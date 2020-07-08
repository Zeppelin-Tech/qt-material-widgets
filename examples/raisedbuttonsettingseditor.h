#pragma once

#include "flatbuttonsettingseditor.h"

class RaisedButtonSettingsEditor : public FlatButtonSettingsEditor {
    Q_OBJECT

  public:
    explicit RaisedButtonSettingsEditor(QWidget *parent = 0);
    ~RaisedButtonSettingsEditor();
};
