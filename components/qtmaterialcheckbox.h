#pragma once

#include "lib/qtmaterialcheckable.h"

class QtMaterialCheckBoxPrivate;

class QtMaterialCheckBox : public QtMaterialCheckable {
    Q_OBJECT

  public:
    explicit QtMaterialCheckBox(QWidget *parent = 0);
    ~QtMaterialCheckBox();

  private:
    Q_DISABLE_COPY(QtMaterialCheckBox)
    Q_DECLARE_PRIVATE(QtMaterialCheckBox)
};
