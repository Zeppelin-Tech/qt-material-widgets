#pragma once

#include "lib/qtmaterialtheme.h"
#include <QColor>
#include <QtGlobal>

class QtMaterialProgress;
class QtMaterialProgressDelegate;

class QtMaterialProgressPrivate {
    Q_DISABLE_COPY(QtMaterialProgressPrivate)
    Q_DECLARE_PUBLIC(QtMaterialProgress)

  public:
    QtMaterialProgressPrivate(QtMaterialProgress *q);
    ~QtMaterialProgressPrivate();

    void init();

    QtMaterialProgress *const q_ptr;
    QtMaterialProgressDelegate *delegate;
    Material::ProgressType progressType;
    QColor progressColor;
    QColor backgroundColor;
    bool useThemeColors;
};
