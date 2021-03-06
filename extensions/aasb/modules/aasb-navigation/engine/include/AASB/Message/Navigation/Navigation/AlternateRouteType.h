/*
 * Copyright 2017-2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/*********************************************************
**********************************************************
**********************************************************

THIS FILE IS AUTOGENERATED. DO NOT EDIT

**********************************************************
**********************************************************
*********************************************************/

#ifndef NAVIGATION_ALTERNATEROUTETYPE_H
#define NAVIGATION_ALTERNATEROUTETYPE_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace navigation {
namespace navigation {

//Enum Definition
enum class AlternateRouteType {
    DEFAULT,
    SHORTER_TIME,
    SHORTER_DISTANCE,
};

inline std::string toString(AlternateRouteType enumValue) {
    switch (enumValue) {
        case (AlternateRouteType::DEFAULT):
            return "DEFAULT";
        case (AlternateRouteType::SHORTER_TIME):
            return "SHORTER_TIME";
        case (AlternateRouteType::SHORTER_DISTANCE):
            return "SHORTER_DISTANCE";
    }
    throw std::runtime_error("invalidAlternateRouteTypeType");
}

inline AlternateRouteType toAlternateRouteType(const std::string& stringValue) {
    static std::unordered_map<std::string, AlternateRouteType> map = {
        {"DEFAULT", AlternateRouteType::DEFAULT},
        {"SHORTER_TIME", AlternateRouteType::SHORTER_TIME},
        {"SHORTER_DISTANCE", AlternateRouteType::SHORTER_DISTANCE},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidAlternateRouteTypeType");
}

inline void to_json(nlohmann::json& j, const AlternateRouteType& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, AlternateRouteType& c) {
    c = toAlternateRouteType(j);
}

}  // namespace navigation
}  // namespace navigation
}  // namespace message
}  // namespace aasb

#endif  // NAVIGATION_ALTERNATEROUTETYPE_H
