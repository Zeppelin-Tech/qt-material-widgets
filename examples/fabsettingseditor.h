#pragma once

#include "ui_fabsettingsform.h"
#include <QWidget>

class QtMaterialFloatingActionButton;

class FloatingActionButtonSettingsEditor : public QWidget {
    Q_OBJECT

  public:
    explicit FloatingActionButtonSettingsEditor(QWidget *parent = 0);
    ~FloatingActionButtonSettingsEditor();

  protected slots:
    void setupForm();
    void updateWidget();
    void selectColor();

  private:
    Ui::FloatingActionButtonSettingsForm *const ui;
    QtMaterialFloatingActionButton *const m_fab;
};
