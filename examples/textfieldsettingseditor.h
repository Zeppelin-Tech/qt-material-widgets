#pragma once

#include "ui_textfieldsettingsform.h"
#include <QWidget>

class QtMaterialTextField;

class TextFieldSettingsEditor : public QWidget {
  Q_OBJECT

public:
  explicit TextFieldSettingsEditor(QWidget *parent = 0);
  ~TextFieldSettingsEditor();

protected slots:
  void setupForm();
  void updateWidget();
  void selectColor();
  void setShowInputLine();

private:
  Ui::TextFieldSettingsForm *const ui;
  QtMaterialTextField *const m_textField;
};
