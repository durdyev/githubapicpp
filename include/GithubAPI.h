//
// Created by Ilya Durdyev on 08.08.17.
//

#ifndef GITHUBAPICPP_GITHUBAPI_H
#define GITHUBAPICPP_GITHUBAPI_H

#include "User.h"

namespace githubapicpp {

    class GithubAPI {
    private:
        std::string clientId;
        std::string secret;
    public:
        GithubAPI(const std::string &clientId, const std::string &secret);
        User getUser(std::string user);
    };

}

#endif //GITHUBAPICPP_GITHUBAPI_H
