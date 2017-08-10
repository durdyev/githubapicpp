//
// Created by Ilya Durdyev on 10.08.17.
//

#ifndef GITHUBAPICPP_REPOSITORY_H
#define GITHUBAPICPP_REPOSITORY_H


#include <string>
#include <vector>
#include "User.h"
#include "Organization.h"

namespace githubapicpp {
    /**
     * \class GitHub Repository
     */
    class Repository {
    private:
        int id;
        std::string name;
        std::string fullName;
        User *owner;
        bool isPrivate;
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
        std::vector<std::string> topics;
        Organization organization;
        Repository *parent;
        Repository *source;
    public:
        int getId() const;

        void setId(int id);

        const std::string &getName() const;

        void setName(const std::string &name);

        const std::string &getFullName() const;

        void setFullName(const std::string &fullName);

        bool isIsPrivate() const;

        void setIsPrivate(bool isPrivate);

        const std::string &getHtmUrl() const;

        void setHtmUrl(const std::string &htmUrl);

        const std::string &getDescription() const;

        void setDescription(const std::string &description);

        bool isFork() const;

        void setFork(bool fork);

        const std::string &getUrl() const;

        void setUrl(const std::string &url);

        const std::string &getForksUrl() const;

        void setForksUrl(const std::string &forksUrl);

        const std::string &getKeysUrl() const;

        void setKeysUrl(const std::string &keysUrl);

        const std::string &getCollaboratorsUrl() const;

        void setCollaboratorsUrl(const std::string &collaboratorsUrl);

        const std::string &getTeamsUrl() const;

        void setTeamsUrl(const std::string &teamsUrl);

        const std::string &getHooksUrl() const;

        void setHooksUrl(const std::string &hooksUrl);

        const std::string &getIssueEventsUrl() const;

        void setIssueEventsUrl(const std::string &issueEventsUrl);

        const std::string &getEventsUrl() const;

        void setEventsUrl(const std::string &eventsUrl);

        const std::string &getAssigneesUrl() const;

        void setAssigneesUrl(const std::string &assigneesUrl);

        const std::string &getBranchesUrl() const;

        void setBranchesUrl(const std::string &branchesUrl);

        const std::string &getTagsUrl() const;

        void setTagsUrl(const std::string &tagsUrl);

        const std::string &getBlobsUrl() const;

        void setBlobsUrl(const std::string &blobsUrl);

        const std::string &getGitTagsUrl() const;

        void setGitTagsUrl(const std::string &gitTagsUrl);

        const std::string &getGitRefsUrl() const;

        void setGitRefsUrl(const std::string &gitRefsUrl);

        const std::string &getTreesUrl() const;

        void setTreesUrl(const std::string &treesUrl);

        const std::string &getStatusesUrl() const;

        void setStatusesUrl(const std::string &statusesUrl);

        const std::string &getLanguagesUrl() const;

        void setLanguagesUrl(const std::string &languagesUrl);

        const std::string &getStargazersUrl() const;

        void setStargazersUrl(const std::string &stargazersUrl);

        const std::string &getContributorsUrl() const;

        void setContributorsUrl(const std::string &contributorsUrl);

        const std::string &getSubscribersUrl() const;

        void setSubscribersUrl(const std::string &subscribersUrl);

        const std::string &getSubscriptionUrl() const;

        void setSubscriptionUrl(const std::string &subscriptionUrl);

        const std::string &getCommitsUrl() const;

        void setCommitsUrl(const std::string &commitsUrl);

        const std::string &getGitCommitsUrl() const;

        void setGitCommitsUrl(const std::string &gitCommitsUrl);

        const std::string &getCommentsUrl() const;

        void setCommentsUrl(const std::string &commentsUrl);

        const std::string &getIssueCommentUrl() const;

        void setIssueCommentUrl(const std::string &issueCommentUrl);

        const std::string &getContentsUrl() const;

        void setContentsUrl(const std::string &contentsUrl);

        const std::string &getCompareUrl() const;

        void setCompareUrl(const std::string &compareUrl);

        const std::string &getMergesUrl() const;

        void setMergesUrl(const std::string &mergesUrl);

        const std::string &getArchiveUrl() const;

        void setArchiveUrl(const std::string &archiveUrl);

        const std::string &getDownloadsUrl() const;

        void setDownloadsUrl(const std::string &downloadsUrl);

        const std::string &getIssuesUrl() const;

        void setIssuesUrl(const std::string &issuesUrl);

        const std::string &getPullsUrl() const;

        void setPullsUrl(const std::string &pullsUrl);

        const std::string &getMilestonesUrl() const;

        void setMilestonesUrl(const std::string &milestonesUrl);

        const std::string &getNotificationsUrl() const;

        void setNotificationsUrl(const std::string &notificationsUrl);

        const std::string &getLabelsUrl() const;

        void setLabelsUrl(const std::string &labelsUrl);

        const std::string &getReleasesUrl() const;

        void setReleasesUrl(const std::string &releasesUrl);

        const std::string &getDeploymentsUrl() const;

        void setDeploymentsUrl(const std::string &deploymentsUrl);

        const std::string &getGitUrl() const;

        void setGitUrl(const std::string &gitUrl);

        const std::string &getSshUrl() const;

        void setSshUrl(const std::string &sshUrl);

        const std::string &getCloneUrl() const;

        void setCloneUrl(const std::string &cloneUrl);

        const std::string &getSvnUrl() const;

        void setSvnUrl(const std::string &svnUrl);

        const std::string &getHomepage() const;

        void setHomepage(const std::string &homepage);

        int getSize() const;

        void setSize(int size);

        short getStargazersCount() const;

        void setStargazersCount(short stargazersCount);

        short getWatchersCount() const;

        void setWatchersCount(short watchersCount);

        const std::string &getLanguage() const;

        void setLanguage(const std::string &language);

        bool isHasIssues() const;

        void setHasIssues(bool hasIssues);

        bool isHasProjects() const;

        void setHasProjects(bool hasProjects);

        bool isHasDownloads() const;

        void setHasDownloads(bool hasDownloads);

        bool isHasWiki() const;

        void setHasWiki(bool hasWiki);

        bool isHasPages() const;

        void setHasPages(bool hasPages);

        short getForksCount() const;

        void setForksCount(short forksCount);

        const std::string &getMirrorUrl() const;

        void setMirrorUrl(const std::string &mirrorUrl);

        short getOpenIssuesCount() const;

        void setOpenIssuesCount(short openIssuesCount);

        short getForks() const;

        void setForks(short forks);

        short getOpenIssues() const;

        void setOpenIssues(short openIssues);

        short getWatchers() const;

        void setWatchers(short watchers);

        const std::string &getDefaultBranch() const;

        void setDefaultBranch(const std::string &defaultBranch);

        const std::vector<std::string> &getTopics() const;

        void setTopics(const std::vector<std::string> &topics);

        const Organization &getOrganization() const;

        void setOrganization(const Organization &organization);

        Repository *getParent() const;

        void setParent(Repository *parent);

        Repository *getSource() const;

        void setSource(Repository *source);

        User *getOwner() const;

        void setOwner(User *owner);
    };
}


#endif //GITHUBAPICPP_REPOSITORY_H
