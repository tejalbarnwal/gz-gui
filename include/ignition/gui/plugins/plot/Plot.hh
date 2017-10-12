/*
 * Copyright (C) 2017 Open Source Robotics Foundation
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
#ifndef IGNITION_GUI_PLUGINS_PLOT_HH_
#define IGNITION_GUI_PLUGINS_PLOT_HH_

#ifndef Q_MOC_RUN
  #include <ignition/gui/qt.h>
#endif

#include "ignition/gui/Plugin.hh"
#include "ignition/gui/EditableLabel.hh"

namespace ignition
{
namespace gui
{
namespace plugins
{
  /// \brief Widget that allow plotting of Ignition Transport topics.
  class Plot : public Plugin
  {
    Q_OBJECT

    /// \brief Constructor.
    public: Plot();

    /// \brief Destructor.
    public: virtual ~Plot();

    // Documentation inherited.
    public: virtual void LoadConfig(const tinyxml2::XMLElement *_pluginElem)
        override;
  };
}
}
}
#endif
