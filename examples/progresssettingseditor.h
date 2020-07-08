#pragma once

#include "ui_progresssettingsform.h"
#include <QWidget>

class QtMaterialProgress;

class ProgressSettingsEditor : public QWidget {
  Q_OBJECT

public:
  explicit ProgressSettingsEditor(QWidget *parent = 0);
  ~ProgressSettingsEditor();

protected slots:
  void setupForm();
  void updateWidget();
  void selectColor();

private:
  Ui::ProgressSettingsForm *const ui;
  QtMaterialProgress *const m_progress;
};
