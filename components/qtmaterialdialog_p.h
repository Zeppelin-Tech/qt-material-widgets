#pragma once

#include <QtGlobal>

class QStateMachine;
class QtMaterialDialog;
class QStackedLayout;
class QtMaterialDialogWindow;
class QtMaterialDialogProxy;

class QtMaterialDialogPrivate {
    Q_DISABLE_COPY(QtMaterialDialogPrivate)
    Q_DECLARE_PUBLIC(QtMaterialDialog)

  public:
    QtMaterialDialogPrivate(QtMaterialDialog *q);
    ~QtMaterialDialogPrivate();

    void init();

    QtMaterialDialog *const q_ptr;
    QtMaterialDialogWindow *dialogWindow;
    QStackedLayout *proxyStack;
    QStateMachine *stateMachine;
    QtMaterialDialogProxy *proxy;
};
