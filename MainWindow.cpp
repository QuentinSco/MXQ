#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    setMinimumSize(640, 480);
    setWindowIcon(QIcon(":/res/icon.png"));

    m_dateSelectionWidget = new DateSelectionWidget;
    m_centralWidget = new CentralWidget;
    m_dataWidget = new DataWidget;

    m_splitter = new QSplitter;
    m_splitter->setChildrenCollapsible(false);

    m_splitter->addWidget(m_dateSelectionWidget);
    m_splitter->addWidget(m_centralWidget);
    m_splitter->addWidget(m_dataWidget);

    setCentralWidget(m_splitter);
}
