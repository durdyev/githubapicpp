//
// Created by Ilya Durdyev on 08.08.17.
//

#ifndef GITHUBAPICPP_GITHUBAPI_H
#define GITHUBAPICPP_GITHUBAPI_H

#include "User.h"

/**
 * GitHubAPI CPP namespace
 */
namespace githubapicpp {

    /**
     * This is main githubapicpp class
     * here are implemented GitHub API Rest V3
     */
    class GitHubAPI {
    private:
        std::string clientId;   /// application client_id
        std::string secret;     /// application secret
    public:
        /**
         * Please enter here your application client_id and secret
         * and then you can use github API. More information you can
         * find on github website http://developer.github.com
         * @param clientId applicatoin client_id
         * @param secret application secret
         */
        GitHubAPI(const std::string &clientId, const std::string &secret);
        User getUser(std::string user);
    };

}

#endif //GITHUBAPICPP_GITHUBAPI_H
