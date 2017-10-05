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

#ifndef IGNITION_GUI_COLLAPSIBLEWIDGET_HH_
#define IGNITION_GUI_COLLAPSIBLEWIDGET_HH_

#include <string>

#include "ignition/gui/qt.h"
#include "ignition/gui/PropertyWidget.hh"
#include "ignition/gui/System.hh"

namespace ignition
{
  namespace gui
  {
    /// \brief A widget consisting of a button and some content. The
    /// content is hidden or shown as the button is toggled.
    /// It inherits from property widget, but it doesn't hold a property value.
    class IGNITION_GUI_VISIBLE CollapsibleWidget : public PropertyWidget
    {
      Q_OBJECT

      /// \brief Constructor
      /// \param[in] _key Title to be displayed on the button.
      public: explicit CollapsibleWidget(const std::string &_key);

      // Documentation inherited
      public: bool SetValue(const QVariant) {return false;}

      // Documentation inherited
      public: QVariant Value() const {return QVariant();}

      /// \brief Callback that collapses or expands the contents.
      /// _param[in] _checked True for expanded.
      public slots: void Toggle(const bool _checked);
    };
  }
}
#endif