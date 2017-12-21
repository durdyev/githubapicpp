//
// Created by Ilya Durdyev on 07.08.17.
//

#ifndef GITHUBAPICPP_CURLUTILS_H
#define GITHUBAPICPP_CURLUTILS_H

#include <string>
#include <curl/curl.h>
#include <iostream>

#define GITHUB_API_URL "https://api.github.com"

/**
 * \namespace githubapicpp
 * This is the main namespace of this library
 */
namespace githubapicpp {
    /**
     * \class CURLUtils
     * CURL utils which help to make request into GitHub API website
     */
    class CURLUtils {
    public:
        /**
         * \fn static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
         *
         * Write callback for CURL
         */
        static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

        /**
         * \fn static std::string getResponse(char *url)
         * Get response from url
         * @param url website url
         * @return response from url
         */
        static std::string getResponse(char *url);

        /**
         * \fn std::string getUserCurl(std::string &clientId,
                                              std::string &secret,
                                              std::string &user)
         * Return user JSON
         * @param clientId application client id
         * @param secret application secret
         * @param user user name
         * @return return JSON of user
         */
        static std::string getUserCurl(std::string &clientId,
                                              std::string &secret,
                                              std::string &user);
        /**
         * \fn static std::string getUsersCurl(std::string &clientId,
                                        std::string &secret,
                                        int since)
         * Return user list JSON
         * @param clientId application client id
         * @param secret application secret
         * @param since since parameter
         * @return user list JSON
         */
        static std::string getUsersCurl(std::string &clientId,
                                        std::string &secret,
                                        int since);

        /**
         * \fn static std::string getOrganizations(std::string &clientId,
                                            std::string &secret,
                                            int since)
         * This method return organzations since selected id
         * @param clientId application client_id
         * @param secret application secret
         * @param since since parameter
         * @return json string of orgs since selected id
         */
        static std::string getOrganizations(std::string &clientId,
                                            std::string &secret,
                                            int since);
    };
}

#endif //GITHUBAPICPP_CURLUTILS_H
