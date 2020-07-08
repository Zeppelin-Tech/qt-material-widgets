#pragma once

#include "ui_checkboxsettingsform.h"
#include <QWidget>

class QtMaterialCheckable;

class CheckBoxSettingsEditor : public QWidget {
  Q_OBJECT

public:
  explicit CheckBoxSettingsEditor(QWidget *parent = 0);
  ~CheckBoxSettingsEditor();

protected slots:
  void setupForm();
  void updateWidget();
  void selectColor();

private:
  Ui::CheckBoxSettingsForm *const ui;
  QtMaterialCheckable *const m_checkBox;
};
