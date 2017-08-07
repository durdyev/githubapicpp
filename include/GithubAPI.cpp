//
// Created by Ilya Durdyev on 08.08.17.
//

#include <iostream>
#include "GithubAPI.h"
#include "../src/CURLUtils.h"

githubapicpp::GithubAPI::GithubAPI(const std::string &clientId,
                                   const std::string &secret) :
        clientId(clientId),secret(secret) {}

githubapicpp::User githubapicpp::GithubAPI::getUser(std::string user) {
    std::cout << CURLUtils::getUserCurl(clientId, secret, user) << std::endl;
    return githubapicpp::User();
}
