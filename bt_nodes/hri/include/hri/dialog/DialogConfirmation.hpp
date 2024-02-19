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
// See the License for the specific language governing permissions andGO2OBJECT
// limitations under the License.

#ifndef DIALOG__DIALOGCONFIRMATION_HPP_
#define DIALOG__DIALOGCONFIRMATION_HPP_

#include <algorithm>
#include <string>

#include "behaviortree_cpp_v3/behavior_tree.h"
#include "behaviortree_cpp_v3/bt_factory.h"
#include "hri/dialog/BTActionNode.hpp"
#include "rclcpp/rclcpp.hpp"
#include "whisper_msgs/action/stt.hpp"

namespace dialog {

class DialogConfirmation
    : public dialog::BtActionNode<whisper_msgs::action::STT> {
public:
  explicit DialogConfirmation(const std::string &xml_tag_name,
                              const std::string &action_name,
                              const BT::NodeConfiguration &conf);

  void on_tick() override;
  BT::NodeStatus on_success() override;

  static BT::PortsList providedPorts() { return BT::PortsList({}); }

private:
};

} // namespace dialog

#endif // HRI__DIALOGCONFIRMATION_HPP_
