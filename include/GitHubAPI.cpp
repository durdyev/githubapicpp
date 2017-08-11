//
// Created by Ilya Durdyev on 08.08.17.
//

#include <iostream>
#include <vector>
#include "GitHubAPI.h"
#include "../src/CURLUtils.h"
#include "../src/JSonUtils.h"
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

githubapicpp::GitHubAPI::GitHubAPI(const std::string &clientId,
                                   const std::string &secret) :
        clientId(clientId),secret(secret) {}

githubapicpp::User githubapicpp::GitHubAPI::getUser(std::string user) {
    std::string json = CURLUtils::getUserCurl(clientId, secret, user);
    return JSonUtils::convertJSONToUser(json);
}

std::vector<githubapicpp::User> githubapicpp::GitHubAPI::getUsers(int since) {
    std::vector<githubapicpp::User> usersVector;
    std::string json = CURLUtils::getUsersCurl(clientId, secret, 1);
    rapidjson::Document doc;
    doc.Parse(json.c_str());
    if (doc.IsArray()) {
        for (auto &el : doc.GetArray()) {
            rapidjson::StringBuffer buffer;
            rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
            el.Accept(writer);
            std::string elJson = buffer.GetString();
            usersVector.push_back(JSonUtils::convertJSONToUser(elJson));
        }
    }
    return usersVector;
}

std::vector<githubapicpp::Organization> githubapicpp::GitHubAPI::getOrganizations(int since) {
    std::cout << CURLUtils::getOrganizations(clientId, secret, since) << std::endl;
    return std::vector<githubapicpp::Organization>();
}
