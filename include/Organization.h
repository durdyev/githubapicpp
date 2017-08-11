//
// Created by Ilya Durdyev on 09.08.17.
//

#ifndef GITHUBAPICPP_ORGANIZATION_H
#define GITHUBAPICPP_ORGANIZATION_H

#include <iostream>

/**
 * \name githubapicpp
 * The main namespace of this library
 */
namespace githubapicpp {
    /**
     * \class Organization
     * This is a C++ implementation of GitHub API organization.
     * See more information here https://developer.github.com/v3/orgs/
     */
    class Organization {
    private:
        std::string login;
        int id;
        std::string url;
        std::string reposUrl;
        std::string eventsUrl;
        std::string hooksUrl;
        std::string issuesUrl;
        std::string membersUrl;
        std::string publicMembersUrl;
        std::string avatarUrl;
        std::string description;
    public:
        const std::string &getLogin() const;

        void setLogin(const std::string &login);

        int getId() const;

        void setId(int id);

        const std::string &getUrl() const;

        void setUrl(const std::string &url);

        const std::string &getReposUrl() const;

        void setReposUrl(const std::string &reposUrl);

        const std::string &getEventsUrl() const;

        void setEventsUrl(const std::string &eventsUrl);

        const std::string &getHooksUrl() const;

        void setHooksUrl(const std::string &hooksUrl);

        const std::string &getIssuesUrl() const;

        void setIssuesUrl(const std::string &issuesUrl);

        const std::string &getMembersUrl() const;

        void setMembersUrl(const std::string &membersUrl);

        const std::string &getPublicMembersUrl() const;

        void setPublicMembersUrl(const std::string &publicMembersUrl);

        const std::string &getAvatarUrl() const;

        void setAvatarUrl(const std::string &avatarUrl);

        const std::string &getDescription() const;

        void setDescription(const std::string &description);
    };
}


#endif //GITHUBAPICPP_ORGANIZATION_H
