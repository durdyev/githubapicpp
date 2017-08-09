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
     * \class
     * This is main githubapicpp class
     * here are implemented GitHub API Rest V3
     */
    class GitHubAPI {
    private:
        std::string clientId;       /// application client_id
        std::string secret;         /// application secret
        User convertJSONToUser(std::string &json);
        std::vector<User> convertJSONToUsers(std::string &json);
    public:
        GitHubAPI(const std::string &clientId, const std::string &secret);
        User getUser(std::string user);
        std::vector<User> getUsers(int since);
    };

}

#endif //GITHUBAPICPP_GITHUBAPI_H
