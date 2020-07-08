#pragma once

#include "lib/qtmaterialtheme.h"
#include <QtGlobal>

class QtMaterialCircularProgress;
class QtMaterialCircularProgressDelegate;

class QtMaterialCircularProgressPrivate {
  Q_DISABLE_COPY(QtMaterialCircularProgressPrivate)
  Q_DECLARE_PUBLIC(QtMaterialCircularProgress)

public:
  QtMaterialCircularProgressPrivate(QtMaterialCircularProgress *q);
  ~QtMaterialCircularProgressPrivate();

  void init();

  QtMaterialCircularProgress *const q_ptr;
  QtMaterialCircularProgressDelegate *delegate;
  Material::ProgressType progressType;
  QColor color;
  qreal penWidth;
  int size;
  bool useThemeColors;
};
