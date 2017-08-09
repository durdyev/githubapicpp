//
// Created by Ilya Durdyev on 10.08.17.
//

#ifndef GITHUBAPICPP_REPOSITORY_H
#define GITHUBAPICPP_REPOSITORY_H


#include <string>
#include "User.h"

namespace githubapicpp {
    /**
     * \class GitHub Repository
     */
    class Repository {
    private:
        int id;
        std::string name;
        std::string fullName;
        User owner;
        bool private;
        std::string htmUrl;
        std::string description;
        bool fork;
        std::string url;
        std::string forksUrl;
        std::string keysUrl;
        std::string collaboratorsUrl;
        std::string teamsUrl;
        std::string hooksUrl;
        std::string issueEventsUrl;
        std::string eventsUrl;
        std::string assigneesUrl;
        std::string branchesUrl;
        std::string tagsUrl;
        std::string blobsUrl;
        std::string gitTagsUrl;
        std::string gitRefsUrl;
        std::string treesUrl;
        std::string statusesUrl;
        std::string languagesUrl;
        std::string stargazersUrl;
        std::string contributorsUrl;
        std::string subscribersUrl;
        std::string subscriptionUrl;
        std::string commitsUrl;
        std::string gitCommitsUrl;
        std::string commentsUrl;
        std::string issueCommentUrl;
        std::string contentsUrl;
        std::string compareUrl;
        std::string mergesUrl;
        std::string archiveUrl;
        std::string downloadsUrl;
        std::string issuesUrl;
        std::string pullsUrl;
        std::string milestonesUrl;
        std::string notificationsUrl;
        std::string labelsUrl;
        std::string releasesUrl;
        std::string deploymentsUrl;
        std::string gitUrl;
        std::string sshUrl;
        std::string cloneUrl;
        std::string svnUrl;
        std::string homepage;
        int size;
        short stargazersCount;
        short watchersCount;
        std::string language;
        bool hasIssues;
        bool hasProjects;
        bool hasDownloads;
        bool hasWiki;
        bool hasPages;
        short forksCount;
        std::string mirrorUrl;
        short openIssuesCount;
        short forks;
        short openIssues;
        short watchers;
        std::string defaultBranch;
    };
}


#endif //GITHUBAPICPP_REPOSITORY_H
