#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsWidget>
#include <QMainWindow>
#include <app/ui/container/blockcanvas.h>
#include <app/ui/container/blocksselection.h>
#include "ui/portregister.h"


class AppWindow: public QGraphicsWidget
{
        Q_OBJECT
    private:
        BlocksSelection* m_blockSelection;
        BlockCanvas* m_blockCanvas;

    public:
        AppWindow(QGraphicsWidget* parent = nullptr);

    public slots:
        void resizeWindow(QSize size);
};
#endif // MAINWINDOW_H
