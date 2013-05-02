#include "remoteui.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    RemoteUi remoteUi;
    remoteUi.showMaximized();
    return app.exec();
}
