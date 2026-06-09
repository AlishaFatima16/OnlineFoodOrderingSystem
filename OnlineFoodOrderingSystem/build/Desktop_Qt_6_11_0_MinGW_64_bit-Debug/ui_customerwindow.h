/********************************************************************************
** Form generated from reading UI file 'customerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWINDOW_H
#define UI_CUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QLineEdit *searchEdit;
    QListWidget *menuList;
    QHBoxLayout *hboxLayout;
    QPushButton *sortByPriceBtn;
    QPushButton *sortByCategoryBtn;
    QPushButton *addToCartBtn;
    QVBoxLayout *vboxLayout1;
    QLabel *label1;
    QListWidget *cartList;
    QPushButton *removeFromCartBtn;
    QLabel *subtotalLabel;
    QPushButton *placeOrderBtn;
    QPushButton *viewOrdersBtn;

    void setupUi(QMainWindow *CustomerWindow)
    {
        if (CustomerWindow->objectName().isEmpty())
            CustomerWindow->setObjectName("CustomerWindow");
        CustomerWindow->resize(820, 580);
        centralwidget = new QWidget(CustomerWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName("vboxLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        vboxLayout->addWidget(label);

        searchEdit = new QLineEdit(centralwidget);
        searchEdit->setObjectName("searchEdit");

        vboxLayout->addWidget(searchEdit);

        menuList = new QListWidget(centralwidget);
        menuList->setObjectName("menuList");

        vboxLayout->addWidget(menuList);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        sortByPriceBtn = new QPushButton(centralwidget);
        sortByPriceBtn->setObjectName("sortByPriceBtn");

        hboxLayout->addWidget(sortByPriceBtn);

        sortByCategoryBtn = new QPushButton(centralwidget);
        sortByCategoryBtn->setObjectName("sortByCategoryBtn");

        hboxLayout->addWidget(sortByCategoryBtn);


        vboxLayout->addLayout(hboxLayout);

        addToCartBtn = new QPushButton(centralwidget);
        addToCartBtn->setObjectName("addToCartBtn");

        vboxLayout->addWidget(addToCartBtn);


        horizontalLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName("vboxLayout1");
        label1 = new QLabel(centralwidget);
        label1->setObjectName("label1");

        vboxLayout1->addWidget(label1);

        cartList = new QListWidget(centralwidget);
        cartList->setObjectName("cartList");

        vboxLayout1->addWidget(cartList);

        removeFromCartBtn = new QPushButton(centralwidget);
        removeFromCartBtn->setObjectName("removeFromCartBtn");

        vboxLayout1->addWidget(removeFromCartBtn);

        subtotalLabel = new QLabel(centralwidget);
        subtotalLabel->setObjectName("subtotalLabel");

        vboxLayout1->addWidget(subtotalLabel);

        placeOrderBtn = new QPushButton(centralwidget);
        placeOrderBtn->setObjectName("placeOrderBtn");

        vboxLayout1->addWidget(placeOrderBtn);

        viewOrdersBtn = new QPushButton(centralwidget);
        viewOrdersBtn->setObjectName("viewOrdersBtn");

        vboxLayout1->addWidget(viewOrdersBtn);


        horizontalLayout->addLayout(vboxLayout1);

        CustomerWindow->setCentralWidget(centralwidget);

        retranslateUi(CustomerWindow);

        QMetaObject::connectSlotsByName(CustomerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CustomerWindow)
    {
        CustomerWindow->setWindowTitle(QCoreApplication::translate("CustomerWindow", "Customer Window", nullptr));
        label->setText(QCoreApplication::translate("CustomerWindow", "Menu", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("CustomerWindow", "Search by name or category...", nullptr));
        sortByPriceBtn->setText(QCoreApplication::translate("CustomerWindow", "Sort by Price", nullptr));
        sortByCategoryBtn->setText(QCoreApplication::translate("CustomerWindow", "Sort by Category", nullptr));
        addToCartBtn->setText(QCoreApplication::translate("CustomerWindow", "Add to Cart", nullptr));
        label1->setText(QCoreApplication::translate("CustomerWindow", "My Cart", nullptr));
        removeFromCartBtn->setText(QCoreApplication::translate("CustomerWindow", "Remove Selected", nullptr));
        subtotalLabel->setText(QCoreApplication::translate("CustomerWindow", "Subtotal: Rs.0.00", nullptr));
        placeOrderBtn->setText(QCoreApplication::translate("CustomerWindow", "Place Order", nullptr));
        viewOrdersBtn->setText(QCoreApplication::translate("CustomerWindow", "View My Orders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindow: public Ui_CustomerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDOW_H
