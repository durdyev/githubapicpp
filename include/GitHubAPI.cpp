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

githubapicpp::User * githubapicpp::GitHubAPI::getUser(std::string user) {
    std::string json = CURLUtils::getUser(clientId, secret, user);
    return JSonUtils::convertJSONToUser(json);
}

std::vector<githubapicpp::User*> githubapicpp::GitHubAPI::getUsers(int since) {
    std::vector<githubapicpp::User*> users;
    std::string json = CURLUtils::getUsers(clientId, secret, 1);
    rapidjson::Document doc;
    doc.Parse(json.c_str());
    if (doc.IsArray()) {
        for (auto &el : doc.GetArray()) {
            users.push_back(JSonUtils::convertJSONToUser(JSonUtils::getStringFromJSONElement(el)));
        }
    }
    return users;
}

std::vector<githubapicpp::Organization*> githubapicpp::GitHubAPI::getOrganizations(int since) {
    std::vector<githubapicpp::Organization*> organizations;
    std::string json = CURLUtils::getOrganizations(clientId, secret, since);
    rapidjson::Document doc;
    doc.Parse(json.c_str());
    if (doc.IsArray()) {
        for (auto &el : doc.GetArray()) {
            organizations.push_back(
                    JSonUtils::convertJSONToOrganization(JSonUtils::getStringFromJSONElement(el)));
        }
    }
    return organizations;
}

githubapicpp::Organization * githubapicpp::GitHubAPI::getOrganization(std::string orgName) {
    std::string json = CURLUtils::getOrganization(clientId, secret, orgName);
    return JSonUtils::convertJSONToOrganization(json);
}
