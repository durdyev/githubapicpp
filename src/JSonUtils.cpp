//
// Created by Ilya Durdyev on 11.08.17.
//

#include "JSonUtils.h"
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

githubapicpp::User * githubapicpp::JSonUtils::convertJSONToUser(std::string json) {
    User * user = new User();
    rapidjson::Document el;
    el.Parse(json.c_str());

    if (el.HasMember("id"))
        user->setId(el["id"].GetInt());
    if (el.HasMember("login"))
        user->setLogin(el["login"].GetString());
    if (el.HasMember("avatar_url"))
        user->setAvatarUrl(el["avatar_url"].GetString());
    if (el.HasMember("gravatar_id"))
        user->setGravatarId(el["gravatar_id"].GetString());
    if (el.HasMember("url"))
        user->setUrl(el["url"].GetString());
    if (el.HasMember("html_url"))
        user->setHtmlUrl(el["html_url"].GetString());
    if (el.HasMember("followers_url"))
        user->setFollowersUrl(el["followers_url"].GetString());
    if (el.HasMember("following_url"))
        user->setFollowingUrl(el["following_url"].GetString());
    if (el.HasMember("gists_url"))
        user->setGistsUrl(el["gists_url"].GetString());
    if (el.HasMember("starred_url"))
        user->setStarredUrl(el["starred_url"].GetString());
    if (el.HasMember("subscriptions_url"))
        user->setSubscriptionsUrl(el["subscriptions_url"].GetString());
    if (el.HasMember("organizations_url"))
        user->setOrganizationsUrl(el["organizations_url"].GetString());
    if (el.HasMember("repos_url"))
        user->setReposUrl(el["repos_url"].GetString());
    if (el.HasMember("events_url"))
        user->setEventsUrl(el["events_url"].GetString());
    if (el.HasMember("received_events_url"))
        user->setReceivedEventsUrl(el["received_events_url"].GetString());
    if (el.HasMember("type"))
        user->setType(el["type"].GetString());
    if (el.HasMember("site_admin"))
        user->setSiteAdmin(el["site_admin"].GetBool());
    if (el.HasMember("name"))
        user->setName(el["name"].GetString());
    if (el.HasMember("company"))
        user->setCompany(el["company"].GetString());
    if (el.HasMember("blog"))
        user->setBlog(el["blog"].GetString());
    if (el.HasMember("location"))
        user->setLocation(el["location"].GetString());
    if (el.HasMember("email") && el["email"].IsString())
        user->setEmail(el["email"].GetString());
    if (el.HasMember("hireable"))
        user->setHireable(el["hireable"].GetBool());
    if (el.HasMember("bio"))
        user->setBio(el["bio"].GetString());
    if (el.HasMember("public_repos"))
        user->setPublicRepos(el["public_repos"].GetInt());
    if (el.HasMember("public_gists"))
        user->setPublicGists(el["public_gists"].GetInt());
    if (el.HasMember("followers"))
        user->setFollowers(el["followers"].GetInt());
    if (el.HasMember("following"))
        user->setFollowing(el["following"].GetInt());
    return user;
}

const std::string githubapicpp::JSonUtils::getStringFromJSONElement(rapidjson::GenericValue<rapidjson::UTF8<>> &el) {
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    el.Accept(writer);
    return buffer.GetString();
}

githubapicpp::Organization * githubapicpp::JSonUtils::convertJSONToOrganization(std::string json) {
    Organization * organization = new Organization();
    rapidjson::Document el;
    el.Parse(json.c_str());
    if (el.HasMember("id"))
        organization->setId(el["id"].GetInt());
    if (el.HasMember("login"))
        organization->setLogin(el["login"].GetString());
    if (el.HasMember("url"))
        organization->setUrl(el["url"].GetString());
    if (el.HasMember("repos_url"))
        organization->setReposUrl(el["repos_url"].GetString());
    if (el.HasMember("events_url"))
        organization->setEventsUrl(el["events_url"].GetString());
    if (el.HasMember("hooks_url"))
        organization->setHooksUrl(el["hooks_url"].GetString());
    if (el.HasMember("issues_url"))
        organization->setIssuesUrl(el["issues_url"].GetString());
    if (el.HasMember("members_url"))
        organization->setMembersUrl(el["members_url"].GetString());
    if (el.HasMember("public_members_url"))
        organization->setPublicMembersUrl(el["public_members_url"].GetString());
    if (el.HasMember("avatar_url"))
        organization->setAvatarUrl(el["avatar_url"].GetString());
//    if (el.HasMember("description")) // TODO some bug here
//        organization->setDescription(el["description"].GetString());

    return organization;
}
