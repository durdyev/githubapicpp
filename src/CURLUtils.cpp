//
// Created by Ilya Durdyev on 07.08.17.
//

#include <sstream>
#include "CURLUtils.h"

size_t githubapicpp::CURLUtils::WriteCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

std::string githubapicpp::CURLUtils::getUserCurl(std::string &clientId, std::string &secret, std::string &user) {
    std::ostringstream oss;
    oss << "https://api.github.com/users/" << user
        << "?client_id=" << clientId << "&client_secret=" << secret;
    return getResponse((char *)oss.str().c_str());
}

std::string githubapicpp::CURLUtils::getUsersCurl(std::string &clientId, std::string &secret, int since) {
    std::ostringstream oss;
    oss << "https://api.github.com/users"
        << "?client_id=" << clientId << "&client_secret=" << secret
            << "?since=" << since;
    return getResponse((char *)oss.str().c_str());
}

std::string githubapicpp::CURLUtils::getResponse(char *url) {
    CURL *curl;
    std::string readBuffer;

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_USERAGENT, "Mozilla/5.0 (Android 4.4; Tablet; rv:41.0) Gecko/41.0 Firefox/41.0");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        return readBuffer.c_str();
    }

}

std::string githubapicpp::CURLUtils::getOrganizations(std::string &clientId, std::string &secret, int since) {
    std::ostringstream oss;
    oss << "https://api.github.com/organizations"
        << "?client_id=" << clientId << "&client_secret=" << secret
        << "?since=" << since;
    return getResponse((char *)oss.str().c_str());
}
