//
// Created by Ilya Durdyev on 10.08.17.
//

#include "Repository.h"

int githubapicpp::Repository::getId() const {
    return id;
}

void githubapicpp::Repository::setId(int id) {
    Repository::id = id;
}

const std::string &githubapicpp::Repository::getName() const {
    return name;
}

void githubapicpp::Repository::setName(const std::string &name) {
    Repository::name = name;
}

const std::string &githubapicpp::Repository::getFullName() const {
    return fullName;
}

void githubapicpp::Repository::setFullName(const std::string &fullName) {
    Repository::fullName = fullName;
}

const githubapicpp::User &githubapicpp::Repository::getOwner() const {
    return owner;
}

void githubapicpp::Repository::setOwner(const githubapicpp::User &owner) {
    Repository::owner = owner;
}

bool githubapicpp::Repository::isIsPrivate() const {
    return isPrivate;
}

void githubapicpp::Repository::setIsPrivate(bool isPrivate) {
    Repository::isPrivate = isPrivate;
}

const std::string &githubapicpp::Repository::getHtmUrl() const {
    return htmUrl;
}

void githubapicpp::Repository::setHtmUrl(const std::string &htmUrl) {
    Repository::htmUrl = htmUrl;
}

const std::string &githubapicpp::Repository::getDescription() const {
    return description;
}

void githubapicpp::Repository::setDescription(const std::string &description) {
    Repository::description = description;
}

bool githubapicpp::Repository::isFork() const {
    return fork;
}

void githubapicpp::Repository::setFork(bool fork) {
    Repository::fork = fork;
}

const std::string &githubapicpp::Repository::getUrl() const {
    return url;
}

void githubapicpp::Repository::setUrl(const std::string &url) {
    Repository::url = url;
}

const std::string &githubapicpp::Repository::getForksUrl() const {
    return forksUrl;
}

void githubapicpp::Repository::setForksUrl(const std::string &forksUrl) {
    Repository::forksUrl = forksUrl;
}

const std::string &githubapicpp::Repository::getKeysUrl() const {
    return keysUrl;
}

void githubapicpp::Repository::setKeysUrl(const std::string &keysUrl) {
    Repository::keysUrl = keysUrl;
}

const std::string &githubapicpp::Repository::getCollaboratorsUrl() const {
    return collaboratorsUrl;
}

void githubapicpp::Repository::setCollaboratorsUrl(const std::string &collaboratorsUrl) {
    Repository::collaboratorsUrl = collaboratorsUrl;
}

const std::string &githubapicpp::Repository::getTeamsUrl() const {
    return teamsUrl;
}

void githubapicpp::Repository::setTeamsUrl(const std::string &teamsUrl) {
    Repository::teamsUrl = teamsUrl;
}

const std::string &githubapicpp::Repository::getHooksUrl() const {
    return hooksUrl;
}

void githubapicpp::Repository::setHooksUrl(const std::string &hooksUrl) {
    Repository::hooksUrl = hooksUrl;
}

const std::string &githubapicpp::Repository::getIssueEventsUrl() const {
    return issueEventsUrl;
}

void githubapicpp::Repository::setIssueEventsUrl(const std::string &issueEventsUrl) {
    Repository::issueEventsUrl = issueEventsUrl;
}

const std::string &githubapicpp::Repository::getEventsUrl() const {
    return eventsUrl;
}

void githubapicpp::Repository::setEventsUrl(const std::string &eventsUrl) {
    Repository::eventsUrl = eventsUrl;
}

const std::string &githubapicpp::Repository::getAssigneesUrl() const {
    return assigneesUrl;
}

void githubapicpp::Repository::setAssigneesUrl(const std::string &assigneesUrl) {
    Repository::assigneesUrl = assigneesUrl;
}

const std::string &githubapicpp::Repository::getBranchesUrl() const {
    return branchesUrl;
}

void githubapicpp::Repository::setBranchesUrl(const std::string &branchesUrl) {
    Repository::branchesUrl = branchesUrl;
}

const std::string &githubapicpp::Repository::getTagsUrl() const {
    return tagsUrl;
}

void githubapicpp::Repository::setTagsUrl(const std::string &tagsUrl) {
    Repository::tagsUrl = tagsUrl;
}

const std::string &githubapicpp::Repository::getBlobsUrl() const {
    return blobsUrl;
}

void githubapicpp::Repository::setBlobsUrl(const std::string &blobsUrl) {
    Repository::blobsUrl = blobsUrl;
}

const std::string &githubapicpp::Repository::getGitTagsUrl() const {
    return gitTagsUrl;
}

void githubapicpp::Repository::setGitTagsUrl(const std::string &gitTagsUrl) {
    Repository::gitTagsUrl = gitTagsUrl;
}

const std::string &githubapicpp::Repository::getGitRefsUrl() const {
    return gitRefsUrl;
}

void githubapicpp::Repository::setGitRefsUrl(const std::string &gitRefsUrl) {
    Repository::gitRefsUrl = gitRefsUrl;
}

const std::string &githubapicpp::Repository::getTreesUrl() const {
    return treesUrl;
}

void githubapicpp::Repository::setTreesUrl(const std::string &treesUrl) {
    Repository::treesUrl = treesUrl;
}

const std::string &githubapicpp::Repository::getStatusesUrl() const {
    return statusesUrl;
}

void githubapicpp::Repository::setStatusesUrl(const std::string &statusesUrl) {
    Repository::statusesUrl = statusesUrl;
}

const std::string &githubapicpp::Repository::getLanguagesUrl() const {
    return languagesUrl;
}

void githubapicpp::Repository::setLanguagesUrl(const std::string &languagesUrl) {
    Repository::languagesUrl = languagesUrl;
}

const std::string &githubapicpp::Repository::getStargazersUrl() const {
    return stargazersUrl;
}

void githubapicpp::Repository::setStargazersUrl(const std::string &stargazersUrl) {
    Repository::stargazersUrl = stargazersUrl;
}

const std::string &githubapicpp::Repository::getContributorsUrl() const {
    return contributorsUrl;
}

void githubapicpp::Repository::setContributorsUrl(const std::string &contributorsUrl) {
    Repository::contributorsUrl = contributorsUrl;
}

const std::string &githubapicpp::Repository::getSubscribersUrl() const {
    return subscribersUrl;
}

void githubapicpp::Repository::setSubscribersUrl(const std::string &subscribersUrl) {
    Repository::subscribersUrl = subscribersUrl;
}

const std::string &githubapicpp::Repository::getSubscriptionUrl() const {
    return subscriptionUrl;
}

void githubapicpp::Repository::setSubscriptionUrl(const std::string &subscriptionUrl) {
    Repository::subscriptionUrl = subscriptionUrl;
}

const std::string &githubapicpp::Repository::getCommitsUrl() const {
    return commitsUrl;
}

void githubapicpp::Repository::setCommitsUrl(const std::string &commitsUrl) {
    Repository::commitsUrl = commitsUrl;
}

const std::string &githubapicpp::Repository::getGitCommitsUrl() const {
    return gitCommitsUrl;
}

void githubapicpp::Repository::setGitCommitsUrl(const std::string &gitCommitsUrl) {
    Repository::gitCommitsUrl = gitCommitsUrl;
}

const std::string &githubapicpp::Repository::getCommentsUrl() const {
    return commentsUrl;
}

void githubapicpp::Repository::setCommentsUrl(const std::string &commentsUrl) {
    Repository::commentsUrl = commentsUrl;
}

const std::string &githubapicpp::Repository::getIssueCommentUrl() const {
    return issueCommentUrl;
}

void githubapicpp::Repository::setIssueCommentUrl(const std::string &issueCommentUrl) {
    Repository::issueCommentUrl = issueCommentUrl;
}

const std::string &githubapicpp::Repository::getContentsUrl() const {
    return contentsUrl;
}

void githubapicpp::Repository::setContentsUrl(const std::string &contentsUrl) {
    Repository::contentsUrl = contentsUrl;
}

const std::string &githubapicpp::Repository::getCompareUrl() const {
    return compareUrl;
}

void githubapicpp::Repository::setCompareUrl(const std::string &compareUrl) {
    Repository::compareUrl = compareUrl;
}

const std::string &githubapicpp::Repository::getMergesUrl() const {
    return mergesUrl;
}

void githubapicpp::Repository::setMergesUrl(const std::string &mergesUrl) {
    Repository::mergesUrl = mergesUrl;
}

const std::string &githubapicpp::Repository::getArchiveUrl() const {
    return archiveUrl;
}

void githubapicpp::Repository::setArchiveUrl(const std::string &archiveUrl) {
    Repository::archiveUrl = archiveUrl;
}

const std::string &githubapicpp::Repository::getDownloadsUrl() const {
    return downloadsUrl;
}

void githubapicpp::Repository::setDownloadsUrl(const std::string &downloadsUrl) {
    Repository::downloadsUrl = downloadsUrl;
}

const std::string &githubapicpp::Repository::getIssuesUrl() const {
    return issuesUrl;
}

void githubapicpp::Repository::setIssuesUrl(const std::string &issuesUrl) {
    Repository::issuesUrl = issuesUrl;
}

const std::string &githubapicpp::Repository::getPullsUrl() const {
    return pullsUrl;
}

void githubapicpp::Repository::setPullsUrl(const std::string &pullsUrl) {
    Repository::pullsUrl = pullsUrl;
}

const std::string &githubapicpp::Repository::getMilestonesUrl() const {
    return milestonesUrl;
}

void githubapicpp::Repository::setMilestonesUrl(const std::string &milestonesUrl) {
    Repository::milestonesUrl = milestonesUrl;
}

const std::string &githubapicpp::Repository::getNotificationsUrl() const {
    return notificationsUrl;
}

void githubapicpp::Repository::setNotificationsUrl(const std::string &notificationsUrl) {
    Repository::notificationsUrl = notificationsUrl;
}

const std::string &githubapicpp::Repository::getLabelsUrl() const {
    return labelsUrl;
}

void githubapicpp::Repository::setLabelsUrl(const std::string &labelsUrl) {
    Repository::labelsUrl = labelsUrl;
}

const std::string &githubapicpp::Repository::getReleasesUrl() const {
    return releasesUrl;
}

void githubapicpp::Repository::setReleasesUrl(const std::string &releasesUrl) {
    Repository::releasesUrl = releasesUrl;
}

const std::string &githubapicpp::Repository::getDeploymentsUrl() const {
    return deploymentsUrl;
}

void githubapicpp::Repository::setDeploymentsUrl(const std::string &deploymentsUrl) {
    Repository::deploymentsUrl = deploymentsUrl;
}

const std::string &githubapicpp::Repository::getGitUrl() const {
    return gitUrl;
}

void githubapicpp::Repository::setGitUrl(const std::string &gitUrl) {
    Repository::gitUrl = gitUrl;
}

const std::string &githubapicpp::Repository::getSshUrl() const {
    return sshUrl;
}

void githubapicpp::Repository::setSshUrl(const std::string &sshUrl) {
    Repository::sshUrl = sshUrl;
}

const std::string &githubapicpp::Repository::getCloneUrl() const {
    return cloneUrl;
}

void githubapicpp::Repository::setCloneUrl(const std::string &cloneUrl) {
    Repository::cloneUrl = cloneUrl;
}

const std::string &githubapicpp::Repository::getSvnUrl() const {
    return svnUrl;
}

void githubapicpp::Repository::setSvnUrl(const std::string &svnUrl) {
    Repository::svnUrl = svnUrl;
}

const std::string &githubapicpp::Repository::getHomepage() const {
    return homepage;
}

void githubapicpp::Repository::setHomepage(const std::string &homepage) {
    Repository::homepage = homepage;
}

int githubapicpp::Repository::getSize() const {
    return size;
}

void githubapicpp::Repository::setSize(int size) {
    Repository::size = size;
}

short githubapicpp::Repository::getStargazersCount() const {
    return stargazersCount;
}

void githubapicpp::Repository::setStargazersCount(short stargazersCount) {
    Repository::stargazersCount = stargazersCount;
}

short githubapicpp::Repository::getWatchersCount() const {
    return watchersCount;
}

void githubapicpp::Repository::setWatchersCount(short watchersCount) {
    Repository::watchersCount = watchersCount;
}

const std::string &githubapicpp::Repository::getLanguage() const {
    return language;
}

void githubapicpp::Repository::setLanguage(const std::string &language) {
    Repository::language = language;
}

bool githubapicpp::Repository::isHasIssues() const {
    return hasIssues;
}

void githubapicpp::Repository::setHasIssues(bool hasIssues) {
    Repository::hasIssues = hasIssues;
}

bool githubapicpp::Repository::isHasProjects() const {
    return hasProjects;
}

void githubapicpp::Repository::setHasProjects(bool hasProjects) {
    Repository::hasProjects = hasProjects;
}

bool githubapicpp::Repository::isHasDownloads() const {
    return hasDownloads;
}

void githubapicpp::Repository::setHasDownloads(bool hasDownloads) {
    Repository::hasDownloads = hasDownloads;
}

bool githubapicpp::Repository::isHasWiki() const {
    return hasWiki;
}

void githubapicpp::Repository::setHasWiki(bool hasWiki) {
    Repository::hasWiki = hasWiki;
}

bool githubapicpp::Repository::isHasPages() const {
    return hasPages;
}

void githubapicpp::Repository::setHasPages(bool hasPages) {
    Repository::hasPages = hasPages;
}

short githubapicpp::Repository::getForksCount() const {
    return forksCount;
}

void githubapicpp::Repository::setForksCount(short forksCount) {
    Repository::forksCount = forksCount;
}

const std::string &githubapicpp::Repository::getMirrorUrl() const {
    return mirrorUrl;
}

void githubapicpp::Repository::setMirrorUrl(const std::string &mirrorUrl) {
    Repository::mirrorUrl = mirrorUrl;
}

short githubapicpp::Repository::getOpenIssuesCount() const {
    return openIssuesCount;
}

void githubapicpp::Repository::setOpenIssuesCount(short openIssuesCount) {
    Repository::openIssuesCount = openIssuesCount;
}

short githubapicpp::Repository::getForks() const {
    return forks;
}

void githubapicpp::Repository::setForks(short forks) {
    Repository::forks = forks;
}

short githubapicpp::Repository::getOpenIssues() const {
    return openIssues;
}

void githubapicpp::Repository::setOpenIssues(short openIssues) {
    Repository::openIssues = openIssues;
}

short githubapicpp::Repository::getWatchers() const {
    return watchers;
}

void githubapicpp::Repository::setWatchers(short watchers) {
    Repository::watchers = watchers;
}

const std::string &githubapicpp::Repository::getDefaultBranch() const {
    return defaultBranch;
}

void githubapicpp::Repository::setDefaultBranch(const std::string &defaultBranch) {
    Repository::defaultBranch = defaultBranch;
}

const std::vector<std::string> &githubapicpp::Repository::getTopics() const {
    return topics;
}

void githubapicpp::Repository::setTopics(const std::vector<std::string> &topics) {
    Repository::topics = topics;
}

const githubapicpp::Organization &githubapicpp::Repository::getOrganization() const {
    return organization;
}

void githubapicpp::Repository::setOrganization(const githubapicpp::Organization &organization) {
    Repository::organization = organization;
}

const githubapicpp::Repository &githubapicpp::Repository::getParent() const {
    return parent;
}

void githubapicpp::Repository::setParent(const githubapicpp::Repository &parent) {
    Repository::parent = parent;
}

const githubapicpp::Repository &githubapicpp::Repository::getSource() const {
    return source;
}

void githubapicpp::Repository::setSource(const githubapicpp::Repository &source) {
    Repository::source = source;
}
