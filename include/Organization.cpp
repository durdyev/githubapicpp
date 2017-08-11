//
// Created by Ilya Durdyev on 09.08.17.
//

#include "Organization.h"

const std::string &githubapicpp::Organization::getLogin() const {
    return login;
}

void githubapicpp::Organization::setLogin(const std::string &login) {
    Organization::login = login;
}

int githubapicpp::Organization::getId() const {
    return id;
}

void githubapicpp::Organization::setId(int id) {
    Organization::id = id;
}

const std::string &githubapicpp::Organization::getUrl() const {
    return url;
}

void githubapicpp::Organization::setUrl(const std::string &url) {
    Organization::url = url;
}

const std::string &githubapicpp::Organization::getReposUrl() const {
    return reposUrl;
}

void githubapicpp::Organization::setReposUrl(const std::string &reposUrl) {
    Organization::reposUrl = reposUrl;
}

const std::string &githubapicpp::Organization::getEventsUrl() const {
    return eventsUrl;
}

void githubapicpp::Organization::setEventsUrl(const std::string &eventsUrl) {
    Organization::eventsUrl = eventsUrl;
}

const std::string &githubapicpp::Organization::getHooksUrl() const {
    return hooksUrl;
}

void githubapicpp::Organization::setHooksUrl(const std::string &hooksUrl) {
    Organization::hooksUrl = hooksUrl;
}

const std::string &githubapicpp::Organization::getIssuesUrl() const {
    return issuesUrl;
}

void githubapicpp::Organization::setIssuesUrl(const std::string &issuesUrl) {
    Organization::issuesUrl = issuesUrl;
}

const std::string &githubapicpp::Organization::getMembersUrl() const {
    return membersUrl;
}

void githubapicpp::Organization::setMembersUrl(const std::string &membersUrl) {
    Organization::membersUrl = membersUrl;
}

const std::string &githubapicpp::Organization::getPublicMembersUrl() const {
    return publicMembersUrl;
}

void githubapicpp::Organization::setPublicMembersUrl(const std::string &publicMembersUrl) {
    Organization::publicMembersUrl = publicMembersUrl;
}

const std::string &githubapicpp::Organization::getAvatarUrl() const {
    return avatarUrl;
}

void githubapicpp::Organization::setAvatarUrl(const std::string &avatarUrl) {
    Organization::avatarUrl = avatarUrl;
}

const std::string &githubapicpp::Organization::getDescription() const {
    return description;
}

void githubapicpp::Organization::setDescription(const std::string &description) {
    Organization::description = description;
}
