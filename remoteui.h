#ifndef REMOTEUI_H
#define REMOTEUI_H

#include <QMainWindow>

namespace Ui {
    class RemoteUi;
}

class RemoteUi : public QMainWindow
{
    Q_OBJECT

public:
    explicit RemoteUi(QWidget *parent = 0);
    ~RemoteUi();

private:
    Ui::RemoteUi *ui;

};

#endif //REMOTEUI.H
