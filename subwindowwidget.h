#ifndef SUBWINDOWWIDGET_H
#define SUBWINDOWWIDGET_H

#include <QtCore>
#include <QtGui>
#include <QLabel>
#include "constants.h"


class SubWindowWidget: public QLabel
{
    Q_OBJECT

public:
    SubWindowWidget()
    {
        setText(ALERTA_STR);
    }
};

#endif // SUBWINDOWWIDGET_H
