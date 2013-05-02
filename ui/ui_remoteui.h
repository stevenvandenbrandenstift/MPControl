/********************************************************************************
** Form generated from reading UI file 'remoteui.ui'
**
** Created: Thu 2. May 18:45:33 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEUI_H
#define UI_REMOTEUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoteUi
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_1;
    QPushButton *button_5;
    QPushButton *button_8;
    QPushButton *button_0;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_6;
    QPushButton *button_7;
    QPushButton *button_9;
    QPushButton *button_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *button_channelUp;
    QPushButton *button_channelDown;
    QPushButton *button_volumeUp;
    QPushButton *button_volumeDown;
    QPushButton *button_Mute;
    QWidget *horizontalLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *button_power;
    QPushButton *button_epg;
    QPushButton *button_back;
    QButtonGroup *numbersGroup;

    void setupUi(QMainWindow *RemoteUi)
    {
        if (RemoteUi->objectName().isEmpty())
            RemoteUi->setObjectName(QString::fromUtf8("RemoteUi"));
        RemoteUi->resize(354, 552);
        RemoteUi->setAutoFillBackground(false);
        centralwidget = new QWidget(RemoteUi);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 10, 254, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_1 = new QPushButton(gridLayoutWidget);
        numbersGroup = new QButtonGroup(RemoteUi);
        numbersGroup->setObjectName(QString::fromUtf8("numbersGroup"));
        numbersGroup->setExclusive(true);
        numbersGroup->addButton(button_1);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);
        button_1->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(button_1, 0, 0, 1, 1);

        button_5 = new QPushButton(gridLayoutWidget);
        numbersGroup->addButton(button_5);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);
        button_5->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(button_5, 1, 1, 1, 1);

        button_8 = new QPushButton(gridLayoutWidget);
        numbersGroup->addButton(button_8);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(button_8, 2, 1, 1, 1);

        button_0 = new QPushButton(gridLayoutWidget);
        numbersGroup->addButton(button_0);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        button_0->setEnabled(true);
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);
        button_0->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(button_0, 3, 1, 1, 1);

        button_3 = new QPushButton(gridLayoutWidget);
        numbersGroup->addButton(button_3);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);
        button_3->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(button_3, 0, 2, 1, 1);

        button_4 = new QPushButton(gridLayoutWidget);
        numbersGroup->addButton(button_4);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);
        button_4->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(button_4, 1, 0, 1, 1);

        button_6 = new QPushButton(gridLayoutWidget);
        numbersGroup->addButton(button_6);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(button_6, 1, 2, 1, 1);

        button_7 = new QPushButton(gridLayoutWidget);
        numbersGroup->addButton(button_7);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);
        button_7->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(button_7, 2, 0, 1, 1);

        button_9 = new QPushButton(gridLayoutWidget);
        numbersGroup->addButton(button_9);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        sizePolicy.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy);
        button_9->setMinimumSize(QSize(80, 80));
        button_9->setMaximumSize(QSize(16777215, 16777212));

        gridLayout->addWidget(button_9, 2, 2, 1, 1);

        button_2 = new QPushButton(gridLayoutWidget);
        numbersGroup->addButton(button_2);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(button_2, 0, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 10, 91, 476));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        button_channelUp = new QPushButton(verticalLayoutWidget);
        button_channelUp->setObjectName(QString::fromUtf8("button_channelUp"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_channelUp->sizePolicy().hasHeightForWidth());
        button_channelUp->setSizePolicy(sizePolicy1);
        button_channelUp->setMinimumSize(QSize(80, 90));

        verticalLayout->addWidget(button_channelUp);

        button_channelDown = new QPushButton(verticalLayoutWidget);
        button_channelDown->setObjectName(QString::fromUtf8("button_channelDown"));
        sizePolicy1.setHeightForWidth(button_channelDown->sizePolicy().hasHeightForWidth());
        button_channelDown->setSizePolicy(sizePolicy1);
        button_channelDown->setMinimumSize(QSize(80, 90));

        verticalLayout->addWidget(button_channelDown);

        button_volumeUp = new QPushButton(verticalLayoutWidget);
        button_volumeUp->setObjectName(QString::fromUtf8("button_volumeUp"));
        sizePolicy1.setHeightForWidth(button_volumeUp->sizePolicy().hasHeightForWidth());
        button_volumeUp->setSizePolicy(sizePolicy1);
        button_volumeUp->setMinimumSize(QSize(80, 90));

        verticalLayout->addWidget(button_volumeUp);

        button_volumeDown = new QPushButton(verticalLayoutWidget);
        button_volumeDown->setObjectName(QString::fromUtf8("button_volumeDown"));
        sizePolicy1.setHeightForWidth(button_volumeDown->sizePolicy().hasHeightForWidth());
        button_volumeDown->setSizePolicy(sizePolicy1);
        button_volumeDown->setMinimumSize(QSize(81, 90));

        verticalLayout->addWidget(button_volumeDown);

        button_Mute = new QPushButton(verticalLayoutWidget);
        button_Mute->setObjectName(QString::fromUtf8("button_Mute"));
        sizePolicy1.setHeightForWidth(button_Mute->sizePolicy().hasHeightForWidth());
        button_Mute->setSizePolicy(sizePolicy1);
        button_Mute->setMinimumSize(QSize(80, 90));

        verticalLayout->addWidget(button_Mute);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 390, 261, 101));
        gridLayout_2 = new QGridLayout(horizontalLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        button_power = new QPushButton(horizontalLayoutWidget);
        button_power->setObjectName(QString::fromUtf8("button_power"));
        button_power->setEnabled(true);
        sizePolicy.setHeightForWidth(button_power->sizePolicy().hasHeightForWidth());
        button_power->setSizePolicy(sizePolicy);
        button_power->setMinimumSize(QSize(70, 70));

        gridLayout_2->addWidget(button_power, 0, 0, 1, 1);

        button_epg = new QPushButton(horizontalLayoutWidget);
        button_epg->setObjectName(QString::fromUtf8("button_epg"));
        button_epg->setEnabled(true);
        sizePolicy.setHeightForWidth(button_epg->sizePolicy().hasHeightForWidth());
        button_epg->setSizePolicy(sizePolicy);
        button_epg->setMinimumSize(QSize(70, 70));

        gridLayout_2->addWidget(button_epg, 0, 1, 1, 1);

        button_back = new QPushButton(horizontalLayoutWidget);
        button_back->setObjectName(QString::fromUtf8("button_back"));
        button_back->setEnabled(true);
        sizePolicy.setHeightForWidth(button_back->sizePolicy().hasHeightForWidth());
        button_back->setSizePolicy(sizePolicy);
        button_back->setMinimumSize(QSize(70, 70));

        gridLayout_2->addWidget(button_back, 0, 2, 1, 1);

        RemoteUi->setCentralWidget(centralwidget);

        retranslateUi(RemoteUi);

        QMetaObject::connectSlotsByName(RemoteUi);
    } // setupUi

    void retranslateUi(QMainWindow *RemoteUi)
    {
        RemoteUi->setWindowTitle(QApplication::translate("RemoteUi", "Remote", 0, QApplication::UnicodeUTF8));
        button_1->setText(QApplication::translate("RemoteUi", "1", 0, QApplication::UnicodeUTF8));
        button_5->setText(QApplication::translate("RemoteUi", "5", 0, QApplication::UnicodeUTF8));
        button_8->setText(QApplication::translate("RemoteUi", "8", 0, QApplication::UnicodeUTF8));
        button_0->setText(QApplication::translate("RemoteUi", "0", 0, QApplication::UnicodeUTF8));
        button_3->setText(QApplication::translate("RemoteUi", "3", 0, QApplication::UnicodeUTF8));
        button_4->setText(QApplication::translate("RemoteUi", "4", 0, QApplication::UnicodeUTF8));
        button_6->setText(QApplication::translate("RemoteUi", "6", 0, QApplication::UnicodeUTF8));
        button_7->setText(QApplication::translate("RemoteUi", "7", 0, QApplication::UnicodeUTF8));
        button_9->setText(QApplication::translate("RemoteUi", "9", 0, QApplication::UnicodeUTF8));
        button_2->setText(QApplication::translate("RemoteUi", "2", 0, QApplication::UnicodeUTF8));
        button_channelUp->setText(QApplication::translate("RemoteUi", "Ch Up", 0, QApplication::UnicodeUTF8));
        button_channelDown->setText(QApplication::translate("RemoteUi", "Ch Down", 0, QApplication::UnicodeUTF8));
        button_volumeUp->setText(QApplication::translate("RemoteUi", "Vol Up", 0, QApplication::UnicodeUTF8));
        button_volumeDown->setText(QApplication::translate("RemoteUi", "V Down", 0, QApplication::UnicodeUTF8));
        button_Mute->setText(QApplication::translate("RemoteUi", "mute", 0, QApplication::UnicodeUTF8));
        button_power->setText(QApplication::translate("RemoteUi", "Power", 0, QApplication::UnicodeUTF8));
        button_epg->setText(QApplication::translate("RemoteUi", "EPG", 0, QApplication::UnicodeUTF8));
        button_back->setText(QApplication::translate("RemoteUi", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RemoteUi: public Ui_RemoteUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEUI_H
