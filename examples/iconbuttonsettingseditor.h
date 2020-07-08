#pragma once

#include "ui_iconbuttonsettingsform.h"
#include <QWidget>

class QtMaterialIconButton;

class IconButtonSettingsEditor : public QWidget {
    Q_OBJECT

  public:
    explicit IconButtonSettingsEditor(QWidget *parent = 0);
    ~IconButtonSettingsEditor();

  protected:
    explicit IconButtonSettingsEditor(QtMaterialIconButton *button, QWidget *parent = 0);

    Ui::IconButtonSettingsForm *const ui;

  protected slots:
    void setupForm();
    void updateWidget();
    void selectColor();

  private:
    void init();

    QtMaterialIconButton *const m_button;
};
