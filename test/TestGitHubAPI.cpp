//
// Created by Ilya Durdyev on 08.08.17.
//

#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include <iostream>
#include "../include/GitHubAPI.h"

/**
 * Test case select one user by user login
 */
BOOST_AUTO_TEST_CASE( test_get_user ) {
    githubapicpp::GitHubAPI api("", "");
    githubapicpp::User user = api.getUser("durdyev");
    std::cout<<user.getLogin()<<std::endl;
}

/**
 * Test case select all users by since parameter
 */
BOOST_AUTO_TEST_CASE( teset_get_users ) {
    githubapicpp::GitHubAPI api("", "");
    std::vector<githubapicpp::User> users = api.getUsers(1);
    for (githubapicpp::User u : users) {
        std::cout << u.getLogin() << std::endl;
    }
}