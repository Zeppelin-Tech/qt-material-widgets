#pragma once

#include "qtmaterialautocomplete.h"
#include <QStateMachine>

class QtMaterialAutoCompleteStateMachine : public QStateMachine {
  Q_OBJECT

public:
  explicit QtMaterialAutoCompleteStateMachine(QWidget *menu);
  ~QtMaterialAutoCompleteStateMachine();

signals:
  void shouldOpen();
  void shouldClose();
  void shouldFade();

private:
  Q_DISABLE_COPY(QtMaterialAutoCompleteStateMachine)

  QWidget *const m_menu;
  QState *const m_closedState;
  QState *const m_openState;
  QState *const m_closingState;
};
