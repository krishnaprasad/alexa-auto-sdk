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

#ifndef AUDIOOUTPUT_MEDIAERROR_H
#define AUDIOOUTPUT_MEDIAERROR_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace audio {

//Enum Definition
enum class MediaError {
    MEDIA_ERROR_UNKNOWN,
    MEDIA_ERROR_INVALID_REQUEST,
    MEDIA_ERROR_SERVICE_UNAVAILABLE,
    MEDIA_ERROR_INTERNAL_SERVER_ERROR,
    MEDIA_ERROR_INTERNAL_DEVICE_ERROR,
};

inline std::string toString(MediaError enumValue) {
    switch (enumValue) {
        case (MediaError::MEDIA_ERROR_UNKNOWN):
            return "MEDIA_ERROR_UNKNOWN";
        case (MediaError::MEDIA_ERROR_INVALID_REQUEST):
            return "MEDIA_ERROR_INVALID_REQUEST";
        case (MediaError::MEDIA_ERROR_SERVICE_UNAVAILABLE):
            return "MEDIA_ERROR_SERVICE_UNAVAILABLE";
        case (MediaError::MEDIA_ERROR_INTERNAL_SERVER_ERROR):
            return "MEDIA_ERROR_INTERNAL_SERVER_ERROR";
        case (MediaError::MEDIA_ERROR_INTERNAL_DEVICE_ERROR):
            return "MEDIA_ERROR_INTERNAL_DEVICE_ERROR";
    }
    throw std::runtime_error("invalidMediaErrorType");
}

inline MediaError toMediaError(const std::string& stringValue) {
    static std::unordered_map<std::string, MediaError> map = {
        {"MEDIA_ERROR_UNKNOWN", MediaError::MEDIA_ERROR_UNKNOWN},
        {"MEDIA_ERROR_INVALID_REQUEST", MediaError::MEDIA_ERROR_INVALID_REQUEST},
        {"MEDIA_ERROR_SERVICE_UNAVAILABLE", MediaError::MEDIA_ERROR_SERVICE_UNAVAILABLE},
        {"MEDIA_ERROR_INTERNAL_SERVER_ERROR", MediaError::MEDIA_ERROR_INTERNAL_SERVER_ERROR},
        {"MEDIA_ERROR_INTERNAL_DEVICE_ERROR", MediaError::MEDIA_ERROR_INTERNAL_DEVICE_ERROR},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidMediaErrorType");
}

inline void to_json(nlohmann::json& j, const MediaError& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, MediaError& c) {
    c = toMediaError(j);
}

}  // namespace audio
}  // namespace message
}  // namespace aasb

#endif  // AUDIOOUTPUT_MEDIAERROR_H
