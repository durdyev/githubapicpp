//
// Created by Ilya Durdyev on 07.08.17.
//

#ifndef GITHUBAPICPP_CURLUTILS_H
#define GITHUBAPICPP_CURLUTILS_H

#include <string>
#include <curl/curl.h>
#include <iostream>

namespace githubapicpp {
    class CURLUtils {
    public:
        /**
         * Write callback for CURL
         */
        static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

        /**
         * Get response from url
         * @param url website url
         * @return response from url
         */
        static std::string getResponse(char *url);

        /**
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
         * Return user list JSON
         * @param clientId application client id
         * @param secret application secret
         * @param since since parameter
         * @return user list JSON
         */
        static std::string getUsersCurl(std::string &clientId,
                                        std::string &secret,
                                        int since);
    };
}

#endif //GITHUBAPICPP_CURLUTILS_H
