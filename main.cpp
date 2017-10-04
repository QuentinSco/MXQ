#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget w;
    w.setWindowTitle(QObject::tr("MXQ"));
    w.show();

    return app.exec();
}
