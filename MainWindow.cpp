#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    setMinimumSize(640, 480);
    setWindowIcon(QIcon(":/res/icon.png"));
}
