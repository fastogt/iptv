/*  Copyright (C) 2014-2020 FastoGT. All right reserved.
    This file is part of fastocloud.
    fastocloud is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    fastocloud is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with fastocloud. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <string>

#include <common/value.h>

struct json_object;

namespace fastocloud {

std::unique_ptr<common::HashValue> MakeConfigFromJson(const std::string& json);
std::unique_ptr<common::HashValue> MakeConfigFromJson(json_object* obj);

bool MakeJsonFromConfig(std::shared_ptr<common::HashValue> config, std::string* json);

}  // namespace fastocloud
