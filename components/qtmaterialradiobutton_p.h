#pragma once

#include "lib/qtmaterialcheckable_p.h"

class QtMaterialRadioButton;

class QtMaterialRadioButtonPrivate : public QtMaterialCheckablePrivate {
    Q_DISABLE_COPY(QtMaterialRadioButtonPrivate)
    Q_DECLARE_PUBLIC(QtMaterialRadioButton)

  public:
    QtMaterialRadioButtonPrivate(QtMaterialRadioButton *q);
    ~QtMaterialRadioButtonPrivate();

    void init();
};
