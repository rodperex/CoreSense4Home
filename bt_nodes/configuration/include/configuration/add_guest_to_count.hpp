// Copyright 2024 Intelligent Robotics Lab - Gentlebots
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CONFIGURATION__ADD_GUEST_TO_COUNT_HPP_
#define CONFIGURATION__ADD_GUEST_TO_COUNT_HPP_


#include "behaviortree_cpp_v3/behavior_tree.h"
#include "behaviortree_cpp_v3/bt_factory.h"

namespace configuration
{

class AddGuestToCount : public BT::ActionNodeBase
{
public:
  explicit AddGuestToCount(const std::string & xml_tag_name, const BT::NodeConfiguration & conf);

  void halt();
  BT::NodeStatus tick();

  static BT::PortsList providedPorts()
  {
    return BT::PortsList(
      {
        BT::BidirectionalPort<std::string>("guest_id"),
      });
  }
  
  
};

}  // namespace configuration

#endif  // CONFIGURATION__ADD_GUEST_TO_COUNT_HPP_
