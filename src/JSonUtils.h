//
// Created by Ilya Durdyev on 11.08.17.
//

#ifndef GITHUBAPICPP_JSONUTILS_H
#define GITHUBAPICPP_JSONUTILS_H

/**
 * \namespace githubapicpp
 * The main GitHub API CPP namespace
 */
#include <rapidjson/encodings.h>
#include <rapidjson/document.h>
#include "../include/User.h"
#include "../include/Organization.h"

namespace githubapicpp {
    /**
     * \class JSonUtils
     * This is an utiliy class to convert JSON to objects
     * and objects to JSON
     */
    class JSonUtils {
    public:
        /**
         * \fn static User convertJSONToUser(std::string& json)
         * This function convert JSON string to User object
         * \see User class
         * @param json json string
         * @return User C++ object
         */
        static User * convertJSONToUser(std::string json);
        static Organization * convertJSONToOrganization(std::string json);
        static const std::string getStringFromJSONElement(rapidjson::GenericValue<rapidjson::UTF8<>> &el);
    };
}


#endif //GITHUBAPICPP_JSONUTILS_H
