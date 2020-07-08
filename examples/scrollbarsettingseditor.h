#pragma once

#include "ui_scrollbarsettingsform.h"
#include <QWidget>

class QtMaterialScrollBar;

class ScrollBarSettingsEditor : public QWidget {
    Q_OBJECT

  public:
    explicit ScrollBarSettingsEditor(QWidget *parent = 0);
    ~ScrollBarSettingsEditor();

  protected slots:
    void setupForm();
    void updateWidget();

  private:
    Ui::ScrollBarSettingsForm *const ui;
    QtMaterialScrollBar *const m_verticalScrollbar;
    QtMaterialScrollBar *const m_horizontalScrollbar;
};
