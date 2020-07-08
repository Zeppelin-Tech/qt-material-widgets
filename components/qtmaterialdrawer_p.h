#pragma once

#include <QObject>

class QtMaterialDrawer;
class QtMaterialDrawerWidget;
class QtMaterialDrawerStateMachine;

class QtMaterialDrawerPrivate {
  Q_DISABLE_COPY(QtMaterialDrawerPrivate)
  Q_DECLARE_PUBLIC(QtMaterialDrawer)

public:
  QtMaterialDrawerPrivate(QtMaterialDrawer *q);
  ~QtMaterialDrawerPrivate();

  void init();
  void setClosed(bool value = true);

  QtMaterialDrawer *const q_ptr;
  QtMaterialDrawerWidget *widget;
  QtMaterialDrawerStateMachine *stateMachine;
  QWidget *window;
  int width;
  bool clickToClose;
  bool autoRaise;
  bool closed;
  bool overlay;
};
