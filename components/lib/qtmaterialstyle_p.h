#pragma once

#include <QtGlobal>

class QtMaterialStyle;
class QtMaterialTheme;

class QtMaterialStylePrivate {
  Q_DISABLE_COPY(QtMaterialStylePrivate)
  Q_DECLARE_PUBLIC(QtMaterialStyle)

public:
  QtMaterialStylePrivate(QtMaterialStyle *q);
  ~QtMaterialStylePrivate();

  void init();

  QtMaterialStyle *const q_ptr;
  QtMaterialTheme *theme;
};
