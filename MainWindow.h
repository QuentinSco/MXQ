#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSplitter>

#include "CentralWidget.h"
#include "DateSelectionWidget.h"
#include "DataWidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Q_DISABLE_COPY(MainWindow)

    QSplitter* m_splitter;

    CentralWidget* m_centralWidget;
    DateSelectionWidget* m_dateSelectionWidget;
    DataWidget* m_dataWidget;

protected:

public:
    MainWindow(QWidget* parent = nullptr);

signals:

public slots:

};

#endif // MAINWINDOW_H
