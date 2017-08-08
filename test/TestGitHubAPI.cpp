//
// Created by Ilya Durdyev on 08.08.17.
//

#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include <iostream>
#include "../include/GitHubAPI.h"

BOOST_AUTO_TEST_CASE( test_get_user ) {
    githubapicpp::GitHubAPI api("", "");
    api.getUser("durdyev");
}