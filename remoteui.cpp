#include "remoteui.h"
#include "ui_remoteui.h"

RemoteUi::RemoteUi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RemoteUi)
{
    ui->setupUi(this);
}

RemoteUi::~RemoteUi()
{
    delete ui;
}
