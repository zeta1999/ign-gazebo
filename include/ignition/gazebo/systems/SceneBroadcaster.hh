/*
 * Copyright (C) 2018 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef IGNITION_GAZEBO_SCENEBROADCASTER_SYSTEM_HH_
#define IGNITION_GAZEBO_SCENEBROADCASTER_SYSTEM_HH_

#include <memory>
#include <vector>
#include <ignition/gazebo/config.hh>
#include <ignition/gazebo/Export.hh>
#include <ignition/gazebo/System.hh>

namespace ignition
{
namespace gazebo
{
namespace systems
{
  // Inline bracket to help doxygen filtering.
  inline namespace IGNITION_GAZEBO_VERSION_NAMESPACE {
  class SceneBroadcasterPrivate;

  /** \class SceneBroadcaster SceneBroadcaster.hh \
   * ignition/gazebo/systems/SceneBroadcaster.hh
  **/
  /// \brief System which periodically publishes an ignition::msgs::Scene
  /// message with updated information.
  class IGNITION_GAZEBO_VISIBLE SceneBroadcaster: public System
  {
    /// \brief Constructor
    public: SceneBroadcaster();

    /// \brief Destructor
    public: virtual ~SceneBroadcaster();

    // Documentation inherited
    public: void Init(std::vector<EntityQueryCallback> &_cbs) override final;

    /// \brief Private data pointer
    private: std::unique_ptr<SceneBroadcasterPrivate> dataPtr;
  };
  }
}
}
}
#endif
