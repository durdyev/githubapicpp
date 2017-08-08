//
// Created by Ilya Durdyev on 08.08.17.
//

#include <iostream>
#include "GitHubAPI.h"
#include "../src/CURLUtils.h"

///@inherit
githubapicpp::GitHubAPI::GitHubAPI(const std::string &clientId,
                                   const std::string &secret) :
        clientId(clientId),secret(secret) {}

///@inherit
githubapicpp::User githubapicpp::GitHubAPI::getUser(std::string user) {
    std::cout << CURLUtils::getUserCurl(clientId, secret, user) << std::endl;
    return githubapicpp::User();
}
