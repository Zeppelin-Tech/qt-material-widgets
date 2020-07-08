#pragma once

#include "qtmaterialscrollbar.h"
#include <QStateMachine>

class QtMaterialScrollBarStateMachine : public QStateMachine {
  Q_OBJECT

  Q_PROPERTY(qreal opacity WRITE setOpacity READ opacity)

public:
  QtMaterialScrollBarStateMachine(QtMaterialScrollBar *parent);
  ~QtMaterialScrollBarStateMachine();

  inline void setOpacity(qreal opacity);
  inline qreal opacity() const;

private:
  Q_DISABLE_COPY(QtMaterialScrollBarStateMachine)

  QtMaterialScrollBar *const m_scrollBar;
  QState *const m_focusState;
  QState *const m_blurState;
  qreal m_opacity;
};

inline void QtMaterialScrollBarStateMachine::setOpacity(qreal opacity) {
  m_opacity = opacity;
  m_scrollBar->update();
}

inline qreal QtMaterialScrollBarStateMachine::opacity() const { return m_opacity; }
