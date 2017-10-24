//
// Created by Ilya Durdyev on 08.08.17.
//

#ifndef GITHUBAPICPP_GITHUBAPI_H
#define GITHUBAPICPP_GITHUBAPI_H

#include "User.h"
#include "Organization.h"
#include <rapidjson/document.h>
#include <rapidjson/rapidjson.h>

/**
 * \namespace githubapicpp
 *
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
    public:
        /**
         * \fn GitHubAPI(const std::string &clientId, const std::string &secret)
         * Pass here your application client_id and secret
         * @param clientId client_id
         * @param secret application secret
         */
        GitHubAPI(const std::string &clientId, const std::string &secret);
        /**
         * \fn User getUser(std::string user)
         * Get user
         * @param user user name, aka durdyev, github user login
         * @return User object
         */
        User * getUser(std::string user);
        /**
         * \fn std::vector<User> getUsers(int since)
         * Get user list
         * @param since since parameter
         * @return the vector of the User objects
         */
        std::vector<User*> getUsers(int since);

        /**
         * \fn std::vector<Organization> getOrganizations(int since)
         * This method return vector of organizations since selected id
         * @param since since parameter
         * @return vector with orgs
         */
        std::vector<Organization*> getOrganizations(int since);
    };

}

#endif //GITHUBAPICPP_GITHUBAPI_H
