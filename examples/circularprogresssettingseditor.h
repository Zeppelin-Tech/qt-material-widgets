#pragma once

#include "ui_circularprogresssettingsform.h"
#include <QWidget>

class QtMaterialCircularProgress;

class CircularProgressSettingsEditor : public QWidget {
  Q_OBJECT

public:
  explicit CircularProgressSettingsEditor(QWidget *parent = 0);
  ~CircularProgressSettingsEditor();

protected slots:
  void setupForm();
  void updateWidget();
  void selectColor();

private:
  Ui::CircularProgressSettingsForm *const ui;
  QtMaterialCircularProgress *const m_progress;
};
