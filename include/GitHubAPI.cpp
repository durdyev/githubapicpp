//
// Created by Ilya Durdyev on 08.08.17.
//

#include <iostream>
#include "GitHubAPI.h"
#include "../src/CURLUtils.h"

/**
 * Please enter here your application client_id and secret
 * and then you can use github API. More information you can
 * find on github website http://developer.github.com
 * @param clientId applicatoin client_id
 * @param secret application secret
 */
githubapicpp::GitHubAPI::GitHubAPI(const std::string &clientId,
                                   const std::string &secret) :
        clientId(clientId),secret(secret) {}

///@inherit
githubapicpp::User githubapicpp::GitHubAPI::getUser(std::string user) {
    std::cout << CURLUtils::getUserCurl(clientId, secret, user) << std::endl;
    return githubapicpp::User();
}
