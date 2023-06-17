/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 */

#include <limits>

#include "command_parser.h"
#include "commander.h"
#include "commands/scan_base.h"
#include "error_constants.h"
#include "server/redis_reply.h"
#include "server/server.h"
#include "types/redis_hyperloglog.h"

namespace redis {

class CommandPFAdd : public Commander {
 public:
  Status Parse(const std::vector<std::string> &args) override { return Commander::Parse(args); }
  Status Execute(Server *svr, Connection *conn, std::string *output) override { return Status::OK(); }
};

class CommandPFCount : public Commander {
  Status Parse(const std::vector<std::string> &args) override { return Commander::Parse(args); }
  Status Execute(Server *svr, Connection *conn, std::string *output) override { return Status::OK(); }
};

class CommandPFMerge : public Commander {
  Status Parse(const std::vector<std::string> &args) override { return Commander::Parse(args); }
  Status Execute(Server *svr, Connection *conn, std::string *output) override { return Status::OK(); }
};

REDIS_REGISTER_COMMANDS(MakeCmdAttr<CommandPFAdd>("pfadd", -2, "write", 1, 1, 1),
                        MakeCmdAttr<CommandPFCount>("pfcount", -2, "write", 1, -1, 1),
                        MakeCmdAttr<CommandPFMerge>("pfmerge", -2, "write", 1, -1, 1), )

}  // namespace redis
