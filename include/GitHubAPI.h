//
// Created by Ilya Durdyev on 08.08.17.
//

#ifndef GITHUBAPICPP_GITHUBAPI_H
#define GITHUBAPICPP_GITHUBAPI_H

#include "User.h"
#include <rapidjson/document.h>
#include <rapidjson/rapidjson.h>

/**
 * GitHubAPI CPP namespace
 */
namespace githubapicpp {

    /**
     * \class GitHubAPI
     * This is main githubapicpp class
     * here are implemented GitHub API Rest V3
     */
    class GitHubAPI {
    private:
        std::string clientId;       /// application client_id
        std::string secret;         /// application secret
        /**
         * \fn Convert JSON string to User object
         * @param json json string
         * @return User object
         */
        User convertJSONToUser(std::string& json);
    public:
        /**
         * \fn Pass here your application client_id and secret
         * @param clientId client_id
         * @param secret application secret
         */
        GitHubAPI(const std::string &clientId, const std::string &secret);
        /**
         * \fn Get user
         * @param user user name, aka durdyev, github user login
         * @return User object
         */
        User getUser(std::string user);
        /**
         * \fn Get user list
         * @param since since parameter
         * @return the vector of the User objects
         */
        std::vector<User> getUsers(int since);
    };

}

#endif //GITHUBAPICPP_GITHUBAPI_H
