//
// Created by Ilya Durdyev on 08.08.17.
//

#include "User.h"

const std::string &githubapicpp::User::getLogin() const {
    return login;
}

void githubapicpp::User::setLogin(const std::string &login) {
    User::login = login;
}

long githubapicpp::User::getId() const {
    return id;
}

void githubapicpp::User::setId(long id) {
    User::id = id;
}

const std::string &githubapicpp::User::getAvatarUrl() const {
    return avatarUrl;
}

void githubapicpp::User::setAvatarUrl(const std::string &avatarUrl) {
    User::avatarUrl = avatarUrl;
}

const std::string &githubapicpp::User::getGravatarId() const {
    return gravatarId;
}

void githubapicpp::User::setGravatarId(const std::string &gravatarId) {
    User::gravatarId = gravatarId;
}

const std::string &githubapicpp::User::getUrl() const {
    return url;
}

void githubapicpp::User::setUrl(const std::string &url) {
    User::url = url;
}

const std::string &githubapicpp::User::getHtmlUrl() const {
    return htmlUrl;
}

void githubapicpp::User::setHtmlUrl(const std::string &htmlUrl) {
    User::htmlUrl = htmlUrl;
}

const std::string &githubapicpp::User::getFollowersUrl() const {
    return followersUrl;
}

void githubapicpp::User::setFollowersUrl(const std::string &followersUrl) {
    User::followersUrl = followersUrl;
}

const std::string &githubapicpp::User::getFollowingUrl() const {
    return followingUrl;
}

void githubapicpp::User::setFollowingUrl(const std::string &followingUrl) {
    User::followingUrl = followingUrl;
}

const std::string &githubapicpp::User::getGistsUrl() const {
    return gistsUrl;
}

void githubapicpp::User::setGistsUrl(const std::string &gistsUrl) {
    User::gistsUrl = gistsUrl;
}

const std::string &githubapicpp::User::getStarredUrl() const {
    return starredUrl;
}

void githubapicpp::User::setStarredUrl(const std::string &starredUrl) {
    User::starredUrl = starredUrl;
}

const std::string &githubapicpp::User::getSubscriptionsUrl() const {
    return subscriptionsUrl;
}

void githubapicpp::User::setSubscriptionsUrl(const std::string &subscriptionsUrl) {
    User::subscriptionsUrl = subscriptionsUrl;
}

const std::string &githubapicpp::User::getOrganizationsUrl() const {
    return organizationsUrl;
}

void githubapicpp::User::setOrganizationsUrl(const std::string &organizationsUrl) {
    User::organizationsUrl = organizationsUrl;
}

const std::string &githubapicpp::User::getReposUrl() const {
    return reposUrl;
}

void githubapicpp::User::setReposUrl(const std::string &reposUrl) {
    User::reposUrl = reposUrl;
}

const std::string &githubapicpp::User::getEventsUrl() const {
    return eventsUrl;
}

void githubapicpp::User::setEventsUrl(const std::string &eventsUrl) {
    User::eventsUrl = eventsUrl;
}

const std::string &githubapicpp::User::getReceivedEventsUrl() const {
    return receivedEventsUrl;
}

void githubapicpp::User::setReceivedEventsUrl(const std::string &receivedEventsUrl) {
    User::receivedEventsUrl = receivedEventsUrl;
}

const std::string &githubapicpp::User::getType() const {
    return type;
}

void githubapicpp::User::setType(const std::string &type) {
    User::type = type;
}

bool githubapicpp::User::isSiteAdmin() const {
    return siteAdmin;
}

void githubapicpp::User::setSiteAdmin(bool siteAdmin) {
    User::siteAdmin = siteAdmin;
}

const std::string &githubapicpp::User::getName() const {
    return name;
}

void githubapicpp::User::setName(const std::string &name) {
    User::name = name;
}

const std::string &githubapicpp::User::getCompany() const {
    return company;
}

void githubapicpp::User::setCompany(const std::string &company) {
    User::company = company;
}

const std::string &githubapicpp::User::getBlog() const {
    return blog;
}

void githubapicpp::User::setBlog(const std::string &blog) {
    User::blog = blog;
}

const std::string &githubapicpp::User::getLocation() const {
    return location;
}

void githubapicpp::User::setLocation(const std::string &location) {
    User::location = location;
}

const std::string &githubapicpp::User::getEmail() const {
    return email;
}

void githubapicpp::User::setEmail(const std::string &email) {
    User::email = email;
}

bool githubapicpp::User::isHireable() const {
    return hireable;
}

void githubapicpp::User::setHireable(bool hireable) {
    User::hireable = hireable;
}

const std::string &githubapicpp::User::getBio() const {
    return bio;
}

void githubapicpp::User::setBio(const std::string &bio) {
    User::bio = bio;
}

short githubapicpp::User::getPublicRepos() const {
    return publicRepos;
}

void githubapicpp::User::setPublicRepos(short publicRepos) {
    User::publicRepos = publicRepos;
}

short githubapicpp::User::getPublicGists() const {
    return publicGists;
}

void githubapicpp::User::setPublicGists(short publicGists) {
    User::publicGists = publicGists;
}

short githubapicpp::User::getFollowers() const {
    return followers;
}

void githubapicpp::User::setFollowers(short folowers) {
    User::followers = folowers;
}

short githubapicpp::User::getFollowing() const {
    return following;
}

void githubapicpp::User::setFollowing(short folowing) {
    User::following = folowing;
}

time_t githubapicpp::User::getCreatedAt() const {
    return createdAt;
}

void githubapicpp::User::setCreatedAt(time_t createdAt) {
    User::createdAt = createdAt;
}

time_t githubapicpp::User::getUpdatedAt() const {
    return updatedAt;
}

void githubapicpp::User::setUpdatedAt(time_t updatedAt) {
    User::updatedAt = updatedAt;
}
