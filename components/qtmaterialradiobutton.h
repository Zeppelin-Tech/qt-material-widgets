#pragma once

#include "lib/qtmaterialcheckable.h"

class QtMaterialRadioButtonPrivate;

class QtMaterialRadioButton : public QtMaterialCheckable {
    Q_OBJECT

  public:
    explicit QtMaterialRadioButton(QWidget *parent = 0);
    ~QtMaterialRadioButton();

  protected:
    void setupProperties();

  private:
    Q_DISABLE_COPY(QtMaterialRadioButton)
    Q_DECLARE_PRIVATE(QtMaterialRadioButton)
};
