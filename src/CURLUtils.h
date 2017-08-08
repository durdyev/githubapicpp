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
         * Return user JSON
         * @param clientId application client id
         * @param secret application secret
         * @param user user name
         * @return return JSON of user
         */
        static std::string static getUserCurl(std::string &clientId,
                                              std::string &secret,
                                              std::string &user);
    };
}

#endif //GITHUBAPICPP_CURLUTILS_H
