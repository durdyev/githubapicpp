//
// Created by Ilya Durdyev on 08.08.17.
//

#ifndef GITHUBAPICPP_USER_H
#define GITHUBAPICPP_USER_H

#include <string>

namespace githubapicpp {
    class User {
    private:
        std::string login;
        long id;
        std::string avatarUrl;
        std::string gravatarId;
        std::string url;
        std::string htmlUrl;
        std::string followersUrl;
        std::string followingUrl;
        std::string gistsUrl;
        std::string starredUrl;
        std::string subscriptionsUrl;
        std::string organizationsUrl;
        std::string reposUrl;
        std::string eventsUrl;
        std::string receivedEventsUrl;
        std::string type;
        bool siteAdmin;
        std::string name;
        std::string company;
        std::string blog;
        std::string location;
        std::string email;
        bool hireable;
        std::string bio;
        short publicRepos;
        short publicGists;
        short followers;
        short following;
        time_t createdAt;
        time_t updatedAt;
    public:
        const std::string &getLogin() const;

        void setLogin(const std::string &login);

        long getId() const;

        void setId(long id);

        const std::string &getAvatarUrl() const;

        void setAvatarUrl(const std::string &avatarUrl);

        const std::string &getGravatarId() const;

        void setGravatarId(const std::string &gravatarId);

        const std::string &getUrl() const;

        void setUrl(const std::string &url);

        const std::string &getHtmlUrl() const;

        void setHtmlUrl(const std::string &htmlUrl);

        const std::string &getFollowersUrl() const;

        void setFollowersUrl(const std::string &followersUrl);

        const std::string &getFollowingUrl() const;

        void setFollowingUrl(const std::string &followingUrl);

        const std::string &getGistsUrl() const;

        void setGistsUrl(const std::string &gistsUrl);

        const std::string &getStarredUrl() const;

        void setStarredUrl(const std::string &starredUrl);

        const std::string &getSubscriptionsUrl() const;

        void setSubscriptionsUrl(const std::string &subscriptionsUrl);

        const std::string &getOrganizationsUrl() const;

        void setOrganizationsUrl(const std::string &organizationsUrl);

        const std::string &getReposUrl() const;

        void setReposUrl(const std::string &reposUrl);

        const std::string &getEventsUrl() const;

        void setEventsUrl(const std::string &eventsUrl);

        const std::string &getReceivedEventsUrl() const;

        void setReceivedEventsUrl(const std::string &receivedEventsUrl);

        const std::string &getType() const;

        void setType(const std::string &type);

        bool isSiteAdmin() const;

        void setSiteAdmin(bool siteAdmin);

        const std::string &getName() const;

        void setName(const std::string &name);

        const std::string &getCompany() const;

        void setCompany(const std::string &company);

        const std::string &getBlog() const;

        void setBlog(const std::string &blog);

        const std::string &getLocation() const;

        void setLocation(const std::string &location);

        const std::string &getEmail() const;

        void setEmail(const std::string &email);

        bool isHireable() const;

        void setHireable(bool hireable);

        const std::string &getBio() const;

        void setBio(const std::string &bio);

        short getPublicRepos() const;

        void setPublicRepos(short publicRepos);

        short getPublicGists() const;

        void setPublicGists(short publicGists);

        short getFollowers() const;

        void setFollowers(short followers);

        short getFollowing() const;

        void setFollowing(short following);

        time_t getCreatedAt() const;

        void setCreatedAt(time_t createdAt);

        time_t getUpdatedAt() const;

        void setUpdatedAt(time_t updatedAt);
    };
}

#endif //GITHUBAPICPP_USER_H
