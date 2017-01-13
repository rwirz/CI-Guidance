/********************************************************************************
** Form generated from reading UI file 'Info.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *probeBox;
    QPushButton *button_saveProbe;
    QPushButton *button_centerProbe;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_probe_x;
    QLabel *label_2;
    QLabel *label_probe_y;
    QLabel *label_3;
    QLabel *label_probe_z;
    QPushButton *button_saveProbe_record;
    QGroupBox *CIToolBox;
    QPushButton *button_centerCItool;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLabel *label_ci_x;
    QLabel *label_5;
    QLabel *label_ci_y;
    QLabel *label_6;
    QLabel *label_ci_z;
    QHBoxLayout *Logos;
    QLabel *logo_VUeng;

    void setupUi(QWidget *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QStringLiteral("Info"));
        Info->resize(518, 1284);
        verticalLayout = new QVBoxLayout(Info);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 15, 10, 2);
        probeBox = new QGroupBox(Info);
        probeBox->setObjectName(QStringLiteral("probeBox"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        probeBox->setFont(font);
        probeBox->setLayoutDirection(Qt::LeftToRight);
        button_saveProbe = new QPushButton(probeBox);
        button_saveProbe->setObjectName(QStringLiteral("button_saveProbe"));
        button_saveProbe->setGeometry(QRect(10, 140, 93, 28));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        button_saveProbe->setFont(font1);
        button_centerProbe = new QPushButton(probeBox);
        button_centerProbe->setObjectName(QStringLiteral("button_centerProbe"));
        button_centerProbe->setGeometry(QRect(10, 100, 93, 28));
        button_centerProbe->setFont(font1);
        layoutWidget = new QWidget(probeBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 103, 64));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(30, 0));
        label->setFont(font1);
        label->setTextFormat(Qt::RichText);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_probe_x = new QLabel(layoutWidget);
        label_probe_x->setObjectName(QStringLiteral("label_probe_x"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_probe_x->sizePolicy().hasHeightForWidth());
        label_probe_x->setSizePolicy(sizePolicy);
        label_probe_x->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("Lucida Console"));
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        label_probe_x->setFont(font2);
        label_probe_x->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_probe_x);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setTextFormat(Qt::RichText);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_probe_y = new QLabel(layoutWidget);
        label_probe_y->setObjectName(QStringLiteral("label_probe_y"));
        label_probe_y->setMinimumSize(QSize(0, 0));
        label_probe_y->setFont(font2);
        label_probe_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, label_probe_y);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_probe_z = new QLabel(layoutWidget);
        label_probe_z->setObjectName(QStringLiteral("label_probe_z"));
        label_probe_z->setMinimumSize(QSize(0, 0));
        label_probe_z->setFont(font2);
        label_probe_z->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, label_probe_z);

        button_saveProbe_record = new QPushButton(probeBox);
        button_saveProbe_record->setObjectName(QStringLiteral("button_saveProbe_record"));
        button_saveProbe_record->setGeometry(QRect(10, 180, 111, 28));
        button_saveProbe_record->setFont(font1);

        verticalLayout->addWidget(probeBox);

        CIToolBox = new QGroupBox(Info);
        CIToolBox->setObjectName(QStringLiteral("CIToolBox"));
        CIToolBox->setFont(font);
        button_centerCItool = new QPushButton(CIToolBox);
        button_centerCItool->setObjectName(QStringLiteral("button_centerCItool"));
        button_centerCItool->setGeometry(QRect(10, 100, 93, 28));
        button_centerCItool->setFont(font1);
        layoutWidget1 = new QWidget(CIToolBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 103, 64));
        formLayout_2 = new QFormLayout(layoutWidget1);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(30, 0));
        QFont font3;
        font3.setPointSize(8);
        label_4->setFont(font3);
        label_4->setTextFormat(Qt::RichText);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        label_ci_x = new QLabel(layoutWidget1);
        label_ci_x->setObjectName(QStringLiteral("label_ci_x"));
        label_ci_x->setMinimumSize(QSize(0, 0));
        label_ci_x->setFont(font2);
        label_ci_x->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_ci_x);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);
        label_5->setTextFormat(Qt::RichText);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        label_ci_y = new QLabel(layoutWidget1);
        label_ci_y->setObjectName(QStringLiteral("label_ci_y"));
        label_ci_y->setFont(font2);
        label_ci_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, label_ci_y);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        label_ci_z = new QLabel(layoutWidget1);
        label_ci_z->setObjectName(QStringLiteral("label_ci_z"));
        label_ci_z->setFont(font2);
        label_ci_z->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, label_ci_z);


        verticalLayout->addWidget(CIToolBox);

        Logos = new QHBoxLayout();
        Logos->setSpacing(0);
        Logos->setObjectName(QStringLiteral("Logos"));
        Logos->setContentsMargins(0, -1, -1, -1);
        logo_VUeng = new QLabel(Info);
        logo_VUeng->setObjectName(QStringLiteral("logo_VUeng"));
        logo_VUeng->setEnabled(true);
        logo_VUeng->setPixmap(QPixmap(QString::fromUtf8(":/images/Resources/engineering_logo1_small.tif")));
        logo_VUeng->setScaledContents(true);
        logo_VUeng->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        Logos->addWidget(logo_VUeng);


        verticalLayout->addLayout(Logos);


        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QWidget *Info)
    {
        Info->setWindowTitle(QApplication::translate("Info", "Form", 0));
        probeBox->setTitle(QApplication::translate("Info", "Probe", 0));
        button_saveProbe->setText(QApplication::translate("Info", "Save", 0));
        button_centerProbe->setText(QApplication::translate("Info", "Center View", 0));
        label->setText(QApplication::translate("Info", "<b>x</b>", 0));
        label_probe_x->setText(QApplication::translate("Info", "-0000.00", 0));
        label_2->setText(QApplication::translate("Info", "<b>y</b>", 0));
        label_probe_y->setText(QApplication::translate("Info", "-0000.00", 0));
        label_3->setText(QApplication::translate("Info", "<b>z</b>", 0));
        label_probe_z->setText(QApplication::translate("Info", "-0000.00", 0));
        button_saveProbe_record->setText(QApplication::translate("Info", "Start Recording", 0));
        CIToolBox->setTitle(QApplication::translate("Info", "CI Tool", 0));
        button_centerCItool->setText(QApplication::translate("Info", "Center View", 0));
        label_4->setText(QApplication::translate("Info", "<b>x</b>", 0));
        label_ci_x->setText(QApplication::translate("Info", "-0000.00", 0));
        label_5->setText(QApplication::translate("Info", "<b>y</b>", 0));
        label_ci_y->setText(QApplication::translate("Info", "-0000.00", 0));
        label_6->setText(QApplication::translate("Info", "<b>z</b>", 0));
        label_ci_z->setText(QApplication::translate("Info", "-0000.00", 0));
        logo_VUeng->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
