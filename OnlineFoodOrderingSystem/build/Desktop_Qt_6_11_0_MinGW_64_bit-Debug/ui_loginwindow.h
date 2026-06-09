/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout1;
    QSpacerItem *spacerItem1;
    QFrame *loginCard;
    QVBoxLayout *vboxLayout2;
    QLabel *loginTitle;
    QLabel *loginSub;
    QLabel *label;
    QLineEdit *usernameEdit;
    QLabel *label1;
    QLineEdit *passwordEdit;
    QPushButton *loginBtn;
    QPushButton *registerBtn;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(480, 420);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName("vboxLayout");
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        spacerItem = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName("vboxLayout1");
        spacerItem1 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout1->addItem(spacerItem1);

        loginCard = new QFrame(centralwidget);
        loginCard->setObjectName("loginCard");
        vboxLayout2 = new QVBoxLayout(loginCard);
        vboxLayout2->setObjectName("vboxLayout2");
        loginTitle = new QLabel(loginCard);
        loginTitle->setObjectName("loginTitle");

        vboxLayout2->addWidget(loginTitle);

        loginSub = new QLabel(loginCard);
        loginSub->setObjectName("loginSub");

        vboxLayout2->addWidget(loginSub);

        label = new QLabel(loginCard);
        label->setObjectName("label");

        vboxLayout2->addWidget(label);

        usernameEdit = new QLineEdit(loginCard);
        usernameEdit->setObjectName("usernameEdit");

        vboxLayout2->addWidget(usernameEdit);

        label1 = new QLabel(loginCard);
        label1->setObjectName("label1");

        vboxLayout2->addWidget(label1);

        passwordEdit = new QLineEdit(loginCard);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::Password);

        vboxLayout2->addWidget(passwordEdit);

        loginBtn = new QPushButton(loginCard);
        loginBtn->setObjectName("loginBtn");

        vboxLayout2->addWidget(loginBtn);

        registerBtn = new QPushButton(loginCard);
        registerBtn->setObjectName("registerBtn");

        vboxLayout2->addWidget(registerBtn);


        vboxLayout1->addWidget(loginCard);

        spacerItem2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout1->addItem(spacerItem2);


        hboxLayout->addLayout(vboxLayout1);

        spacerItem3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem3);


        vboxLayout->addLayout(hboxLayout);

        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Food Ordering System", nullptr));
        loginTitle->setText(QCoreApplication::translate("LoginWindow", "\360\237\215\224 FoodOrder", nullptr));
        loginSub->setText(QCoreApplication::translate("LoginWindow", "Sign in to continue", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        usernameEdit->setObjectName(QCoreApplication::translate("LoginWindow", "loginInput", nullptr));
        usernameEdit->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter your username", nullptr));
        label1->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        passwordEdit->setObjectName(QCoreApplication::translate("LoginWindow", "loginInput", nullptr));
        passwordEdit->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Enter your password", nullptr));
        loginBtn->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        registerBtn->setText(QCoreApplication::translate("LoginWindow", "Create New Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
