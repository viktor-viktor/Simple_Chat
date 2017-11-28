/********************************************************************************
** Form generated from reading UI file 'accountinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTINFO_H
#define UI_ACCOUNTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AccountInfo
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *graphicsView;
    QGridLayout *gridLayout;
    QLabel *contactName;
    QHBoxLayout *horizontalLayout;
    QTextEdit *lastMessage;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *missedAmount;

    void setupUi(QFrame *AccountInfo)
    {
        if (AccountInfo->objectName().isEmpty())
            AccountInfo->setObjectName(QStringLiteral("AccountInfo"));
        AccountInfo->resize(250, 110);
        AccountInfo->setMaximumSize(QSize(250, 110));
        AccountInfo->setFrameShape(QFrame::StyledPanel);
        AccountInfo->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(AccountInfo);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        graphicsView = new QGraphicsView(AccountInfo);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMaximumSize(QSize(65, 16777215));

        horizontalLayout_2->addWidget(graphicsView);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        contactName = new QLabel(AccountInfo);
        contactName->setObjectName(QStringLiteral("contactName"));

        gridLayout->addWidget(contactName, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lastMessage = new QTextEdit(AccountInfo);
        lastMessage->setObjectName(QStringLiteral("lastMessage"));

        horizontalLayout->addWidget(lastMessage);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        missedAmount = new QLabel(AccountInfo);
        missedAmount->setObjectName(QStringLiteral("missedAmount"));
        missedAmount->setMaximumSize(QSize(20, 20));

        verticalLayout->addWidget(missedAmount);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(AccountInfo);

        QMetaObject::connectSlotsByName(AccountInfo);
    } // setupUi

    void retranslateUi(QFrame *AccountInfo)
    {
        AccountInfo->setWindowTitle(QApplication::translate("AccountInfo", "Frame", Q_NULLPTR));
        contactName->setText(QApplication::translate("AccountInfo", "TextLabel", Q_NULLPTR));
        missedAmount->setText(QApplication::translate("AccountInfo", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AccountInfo: public Ui_AccountInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTINFO_H
