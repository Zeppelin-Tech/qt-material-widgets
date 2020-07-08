#pragma once

#include "lib/qtmaterialstatetransitionevent.h"
#include <QAbstractTransition>

class QtMaterialStateTransition : public QAbstractTransition {
  Q_OBJECT

public:
  QtMaterialStateTransition(QtMaterialStateTransitionType type);

protected:
  virtual bool eventTest(QEvent *event);
  virtual void onTransition(QEvent *);

private:
  QtMaterialStateTransitionType m_type;
};
