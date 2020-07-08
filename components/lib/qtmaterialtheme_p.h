#pragma once

#include <QColor>
#include <QHash>

class QtMaterialTheme;

class QtMaterialThemePrivate {
    Q_DISABLE_COPY(QtMaterialThemePrivate)
    Q_DECLARE_PUBLIC(QtMaterialTheme)

  public:
    QtMaterialThemePrivate(QtMaterialTheme *q);
    ~QtMaterialThemePrivate();

    QColor rgba(int r, int g, int b, qreal a) const;

    QtMaterialTheme *const q_ptr;
    QHash<QString, QColor> colors;
};
