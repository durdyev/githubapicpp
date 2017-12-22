//
// Created by Ilya Durdyev on 08.08.17.
//

#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include <iostream>
#include "../include/GitHubAPI.h"

#define CLIENT_ID "8564b5af861dd2699df7"
#define SECRET "2a0402554853ae72fb5b6c883707b1b8294b3ca1"

/**
 * Test case select one user by user login
 */
BOOST_AUTO_TEST_CASE( test_get_user ) {
    std::cout << "---- User test ---" << std::endl;
    githubapicpp::GitHubAPI api(CLIENT_ID, SECRET);
    githubapicpp::User* user = api.getUser("durdyev");
    std::cout<<user->getLogin()<<std::endl;
}

/**
 * Test case select all users by since parameter
 */
BOOST_AUTO_TEST_CASE( teset_get_users ) {
    std::cout << "---- User list test ---" << std::endl;
    githubapicpp::GitHubAPI api(CLIENT_ID, SECRET);
    std::vector<githubapicpp::User*> users = api.getUsers(1);
    for (githubapicpp::User* u : users) {
        std::cout << u->getLogin() << std::endl;
    }
}

BOOST_AUTO_TEST_CASE( test_get_organizations ) {
    std::cout << "---- Organization list test ---" << std::endl;
    githubapicpp::GitHubAPI api(CLIENT_ID, SECRET);
    std::vector<githubapicpp::Organization*> orgs = api.getOrganizations(1);
    for (githubapicpp::Organization* o: orgs) {
        std::cout << o->getLogin() << std:: endl;
    }
}

BOOST_AUTO_TEST_CASE ( test_get_organization ) {
    std::cout << "---- Organization test ---" << std::endl;
    githubapicpp::GitHubAPI api(CLIENT_ID, SECRET);
    githubapicpp::Organization *org = api.getOrganization("torgcrm");
    std::cout << org->getReposUrl() << std:: endl;
}