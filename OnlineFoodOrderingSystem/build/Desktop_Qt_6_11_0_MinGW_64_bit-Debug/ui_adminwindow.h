/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QFrame *adminCard;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QListWidget *menuList;
    QHBoxLayout *hboxLayout;
    QPushButton *addItemBtn;
    QPushButton *deleteItemBtn;
    QPushButton *updatePriceBtn;
    QPushButton *viewOrdersBtn;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(660, 520);
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName("centralwidget");
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName("vboxLayout");
        adminCard = new QFrame(centralwidget);
        adminCard->setObjectName("adminCard");
        vboxLayout1 = new QVBoxLayout(adminCard);
        vboxLayout1->setObjectName("vboxLayout1");
        label = new QLabel(adminCard);
        label->setObjectName("label");

        vboxLayout1->addWidget(label);

        menuList = new QListWidget(adminCard);
        menuList->setObjectName("menuList");

        vboxLayout1->addWidget(menuList);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        addItemBtn = new QPushButton(adminCard);
        addItemBtn->setObjectName("addItemBtn");

        hboxLayout->addWidget(addItemBtn);

        deleteItemBtn = new QPushButton(adminCard);
        deleteItemBtn->setObjectName("deleteItemBtn");

        hboxLayout->addWidget(deleteItemBtn);

        updatePriceBtn = new QPushButton(adminCard);
        updatePriceBtn->setObjectName("updatePriceBtn");

        hboxLayout->addWidget(updatePriceBtn);

        viewOrdersBtn = new QPushButton(adminCard);
        viewOrdersBtn->setObjectName("viewOrdersBtn");

        hboxLayout->addWidget(viewOrdersBtn);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(adminCard);

        AdminWindow->setCentralWidget(centralwidget);

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Admin Panel", nullptr));
        label->setText(QCoreApplication::translate("AdminWindow", "\360\237\233\240\357\270\217 Admin Panel \342\200\224 Menu Management", nullptr));
        label->setObjectName(QCoreApplication::translate("AdminWindow", "welcomeLabel", nullptr));
        menuList->setObjectName(QCoreApplication::translate("AdminWindow", "adminMenuList", nullptr));
        addItemBtn->setText(QCoreApplication::translate("AdminWindow", "+ Add Item", nullptr));
        addItemBtn->setObjectName(QCoreApplication::translate("AdminWindow", "adminActionBtn", nullptr));
        deleteItemBtn->setText(QCoreApplication::translate("AdminWindow", "\360\237\227\221 Delete", nullptr));
        deleteItemBtn->setObjectName(QCoreApplication::translate("AdminWindow", "adminDeleteBtn", nullptr));
        updatePriceBtn->setText(QCoreApplication::translate("AdminWindow", "\342\234\217 Update Price", nullptr));
        updatePriceBtn->setObjectName(QCoreApplication::translate("AdminWindow", "adminActionBtn", nullptr));
        viewOrdersBtn->setText(QCoreApplication::translate("AdminWindow", "\360\237\223\213 All Orders", nullptr));
        viewOrdersBtn->setObjectName(QCoreApplication::translate("AdminWindow", "adminActionBtn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
