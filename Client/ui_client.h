/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mytextedit.h"

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QAction *actionChangeName;
    QAction *actionQuit;
    QAction *actionAddContact;
    QAction *actionFindContact;
    QAction *actionChange_Name;
    QAction *actionExit;
    QAction *actionAdd_contact;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textScreen;
    MyTextEdit *textMessage;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;
    QMenuBar *menubar;
    QMenu *menuUsername;
    QMenu *menuContacts;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QStringLiteral("Client"));
        Client->resize(643, 449);
        Client->setMinimumSize(QSize(600, 400));
        Client->setMaximumSize(QSize(900, 600));
        actionChangeName = new QAction(Client);
        actionChangeName->setObjectName(QStringLiteral("actionChangeName"));
        actionQuit = new QAction(Client);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAddContact = new QAction(Client);
        actionAddContact->setObjectName(QStringLiteral("actionAddContact"));
        actionFindContact = new QAction(Client);
        actionFindContact->setObjectName(QStringLiteral("actionFindContact"));
        actionChange_Name = new QAction(Client);
        actionChange_Name->setObjectName(QStringLiteral("actionChange_Name"));
        actionExit = new QAction(Client);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAdd_contact = new QAction(Client);
        actionAdd_contact->setObjectName(QStringLiteral("actionAdd_contact"));
        centralwidget = new QWidget(Client);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 161, 383));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textScreen = new QTextEdit(centralwidget);
        textScreen->setObjectName(QStringLiteral("textScreen"));
        textScreen->setMinimumSize(QSize(450, 150));
        textScreen->setMaximumSize(QSize(700, 400));

        verticalLayout->addWidget(textScreen);

        textMessage = new MyTextEdit(centralwidget);
        textMessage->setObjectName(QStringLiteral("textMessage"));
        textMessage->setMinimumSize(QSize(450, 100));
        textMessage->setMaximumSize(QSize(700, 250));

        verticalLayout->addWidget(textMessage);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout->addWidget(sendButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        Client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Client);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setEnabled(false);
        menubar->setGeometry(QRect(0, 0, 643, 22));
        menuUsername = new QMenu(menubar);
        menuUsername->setObjectName(QStringLiteral("menuUsername"));
        menuContacts = new QMenu(menubar);
        menuContacts->setObjectName(QStringLiteral("menuContacts"));
        Client->setMenuBar(menubar);
        statusbar = new QStatusBar(Client);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Client->setStatusBar(statusbar);

        menubar->addAction(menuUsername->menuAction());
        menubar->addAction(menuContacts->menuAction());
        menuUsername->addAction(actionChange_Name);
        menuUsername->addAction(actionExit);
        menuContacts->addAction(actionAdd_contact);

        retranslateUi(Client);
        QObject::connect(sendButton, SIGNAL(clicked(bool)), Client, SLOT(slotMessageSend()));
        QObject::connect(textMessage, SIGNAL(enterPressed()), Client, SLOT(slotMessageSend()));

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QMainWindow *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "MainWindow", Q_NULLPTR));
        actionChangeName->setText(QApplication::translate("Client", "ChangeName", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("Client", "Quit", Q_NULLPTR));
        actionAddContact->setText(QApplication::translate("Client", "AddContact", Q_NULLPTR));
        actionFindContact->setText(QApplication::translate("Client", "FindContact", Q_NULLPTR));
        actionChange_Name->setText(QApplication::translate("Client", "Change Name", Q_NULLPTR));
        actionExit->setText(QApplication::translate("Client", "Exit", Q_NULLPTR));
        actionAdd_contact->setText(QApplication::translate("Client", "Add contact", Q_NULLPTR));
        sendButton->setText(QApplication::translate("Client", "PushButton", Q_NULLPTR));
        menuUsername->setTitle(QApplication::translate("Client", "Username", Q_NULLPTR));
        menuContacts->setTitle(QApplication::translate("Client", "Contacts", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
