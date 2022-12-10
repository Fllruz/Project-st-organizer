/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *text_edit;
    QLabel *text_read;
    QPushButton *save_button;
    QPushButton *date_1;
    QPushButton *date_2;
    QPushButton *date_3;
    QPushButton *date_4;
    QPushButton *date_5;
    QPushButton *date_6;
    QPushButton *date_7;
    QPushButton *date_11;
    QPushButton *date_10;
    QPushButton *date_14;
    QPushButton *date_8;
    QPushButton *date_13;
    QPushButton *date_12;
    QPushButton *date_9;
    QPushButton *date_18;
    QPushButton *date_17;
    QPushButton *date_21;
    QPushButton *date_15;
    QPushButton *date_20;
    QPushButton *date_19;
    QPushButton *date_16;
    QPushButton *date_24;
    QPushButton *date_27;
    QPushButton *date_26;
    QPushButton *date_23;
    QPushButton *date_22;
    QPushButton *date_25;
    QPushButton *date_28;
    QPushButton *date_29;
    QPushButton *date_31;
    QPushButton *date_30;
    QSpinBox *mount;
    QSpinBox *year;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(604, 369);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/res/back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #477585;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        text_edit = new QTextEdit(centralwidget);
        text_edit->setObjectName(QString::fromUtf8("text_edit"));
        text_edit->setGeometry(QRect(240, 170, 341, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(10);
        text_edit->setFont(font);
        text_edit->setStyleSheet(QString::fromUtf8("background-color: #424242;\n"
"color: white;"));
        text_read = new QLabel(centralwidget);
        text_read->setObjectName(QString::fromUtf8("text_read"));
        text_read->setGeometry(QRect(20, 20, 561, 131));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Script"));
        font1.setPointSize(16);
        text_read->setFont(font1);
        text_read->setAutoFillBackground(false);
        text_read->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border-bottom: 1px solid gray;\n"
"  background-color: #424242;\n"
"  color: white;\n"
"}\n"
""));
        text_read->setWordWrap(true);
        save_button = new QPushButton(centralwidget);
        save_button->setObjectName(QString::fromUtf8("save_button"));
        save_button->setGeometry(QRect(510, 330, 75, 24));
        save_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        save_button->setCheckable(false);
        save_button->setAutoRepeat(false);
        save_button->setAutoExclusive(false);
        save_button->setFlat(false);
        date_1 = new QPushButton(centralwidget);
        date_1->setObjectName(QString::fromUtf8("date_1"));
        date_1->setGeometry(QRect(20, 170, 31, 31));
        date_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_2 = new QPushButton(centralwidget);
        date_2->setObjectName(QString::fromUtf8("date_2"));
        date_2->setGeometry(QRect(50, 170, 31, 31));
        date_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_3 = new QPushButton(centralwidget);
        date_3->setObjectName(QString::fromUtf8("date_3"));
        date_3->setGeometry(QRect(80, 170, 31, 31));
        date_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_4 = new QPushButton(centralwidget);
        date_4->setObjectName(QString::fromUtf8("date_4"));
        date_4->setGeometry(QRect(110, 170, 31, 31));
        date_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_5 = new QPushButton(centralwidget);
        date_5->setObjectName(QString::fromUtf8("date_5"));
        date_5->setGeometry(QRect(140, 170, 31, 31));
        date_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_6 = new QPushButton(centralwidget);
        date_6->setObjectName(QString::fromUtf8("date_6"));
        date_6->setGeometry(QRect(170, 170, 31, 31));
        date_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_7 = new QPushButton(centralwidget);
        date_7->setObjectName(QString::fromUtf8("date_7"));
        date_7->setGeometry(QRect(200, 170, 31, 31));
        date_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_11 = new QPushButton(centralwidget);
        date_11->setObjectName(QString::fromUtf8("date_11"));
        date_11->setGeometry(QRect(110, 200, 31, 31));
        date_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_10 = new QPushButton(centralwidget);
        date_10->setObjectName(QString::fromUtf8("date_10"));
        date_10->setGeometry(QRect(80, 200, 31, 31));
        date_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_14 = new QPushButton(centralwidget);
        date_14->setObjectName(QString::fromUtf8("date_14"));
        date_14->setGeometry(QRect(200, 200, 31, 31));
        date_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_8 = new QPushButton(centralwidget);
        date_8->setObjectName(QString::fromUtf8("date_8"));
        date_8->setGeometry(QRect(20, 200, 31, 31));
        date_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_13 = new QPushButton(centralwidget);
        date_13->setObjectName(QString::fromUtf8("date_13"));
        date_13->setGeometry(QRect(170, 200, 31, 31));
        date_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_12 = new QPushButton(centralwidget);
        date_12->setObjectName(QString::fromUtf8("date_12"));
        date_12->setGeometry(QRect(140, 200, 31, 31));
        date_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_9 = new QPushButton(centralwidget);
        date_9->setObjectName(QString::fromUtf8("date_9"));
        date_9->setGeometry(QRect(50, 200, 31, 31));
        date_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_18 = new QPushButton(centralwidget);
        date_18->setObjectName(QString::fromUtf8("date_18"));
        date_18->setGeometry(QRect(110, 230, 31, 31));
        date_18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_17 = new QPushButton(centralwidget);
        date_17->setObjectName(QString::fromUtf8("date_17"));
        date_17->setGeometry(QRect(80, 230, 31, 31));
        date_17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_21 = new QPushButton(centralwidget);
        date_21->setObjectName(QString::fromUtf8("date_21"));
        date_21->setGeometry(QRect(200, 230, 31, 31));
        date_21->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_15 = new QPushButton(centralwidget);
        date_15->setObjectName(QString::fromUtf8("date_15"));
        date_15->setGeometry(QRect(20, 230, 31, 31));
        date_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_20 = new QPushButton(centralwidget);
        date_20->setObjectName(QString::fromUtf8("date_20"));
        date_20->setGeometry(QRect(170, 230, 31, 31));
        date_20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_19 = new QPushButton(centralwidget);
        date_19->setObjectName(QString::fromUtf8("date_19"));
        date_19->setGeometry(QRect(140, 230, 31, 31));
        date_19->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_16 = new QPushButton(centralwidget);
        date_16->setObjectName(QString::fromUtf8("date_16"));
        date_16->setGeometry(QRect(50, 230, 31, 31));
        date_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_24 = new QPushButton(centralwidget);
        date_24->setObjectName(QString::fromUtf8("date_24"));
        date_24->setGeometry(QRect(80, 260, 31, 31));
        date_24->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_27 = new QPushButton(centralwidget);
        date_27->setObjectName(QString::fromUtf8("date_27"));
        date_27->setGeometry(QRect(170, 260, 31, 31));
        date_27->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_26 = new QPushButton(centralwidget);
        date_26->setObjectName(QString::fromUtf8("date_26"));
        date_26->setGeometry(QRect(140, 260, 31, 31));
        date_26->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_23 = new QPushButton(centralwidget);
        date_23->setObjectName(QString::fromUtf8("date_23"));
        date_23->setGeometry(QRect(50, 260, 31, 31));
        date_23->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_22 = new QPushButton(centralwidget);
        date_22->setObjectName(QString::fromUtf8("date_22"));
        date_22->setGeometry(QRect(20, 260, 31, 31));
        date_22->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_25 = new QPushButton(centralwidget);
        date_25->setObjectName(QString::fromUtf8("date_25"));
        date_25->setGeometry(QRect(110, 260, 31, 31));
        date_25->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_28 = new QPushButton(centralwidget);
        date_28->setObjectName(QString::fromUtf8("date_28"));
        date_28->setGeometry(QRect(200, 260, 31, 31));
        date_28->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_29 = new QPushButton(centralwidget);
        date_29->setObjectName(QString::fromUtf8("date_29"));
        date_29->setGeometry(QRect(20, 290, 31, 31));
        date_29->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_31 = new QPushButton(centralwidget);
        date_31->setObjectName(QString::fromUtf8("date_31"));
        date_31->setGeometry(QRect(80, 290, 31, 31));
        date_31->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        date_30 = new QPushButton(centralwidget);
        date_30->setObjectName(QString::fromUtf8("date_30"));
        date_30->setGeometry(QRect(50, 290, 31, 31));
        date_30->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #eaeaea;\n"
"background: #424242;\n"
"}\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: #fff;\n"
"}"));
        mount = new QSpinBox(centralwidget);
        mount->setObjectName(QString::fromUtf8("mount"));
        mount->setGeometry(QRect(112, 295, 42, 22));
        mount->setStyleSheet(QString::fromUtf8("color: white;\n"
"background: #424242;"));
        mount->setMinimum(1);
        mount->setMaximum(12);
        year = new QSpinBox(centralwidget);
        year->setObjectName(QString::fromUtf8("year"));
        year->setGeometry(QRect(162, 295, 67, 22));
        year->setStyleSheet(QString::fromUtf8("color: white;\n"
"background: #424242;"));
        year->setMinimum(2022);
        year->setMaximum(2030);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 631, 371));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/res/back.jpg")));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        text_edit->raise();
        text_read->raise();
        save_button->raise();
        date_1->raise();
        date_2->raise();
        date_3->raise();
        date_4->raise();
        date_5->raise();
        date_6->raise();
        date_7->raise();
        date_8->raise();
        date_9->raise();
        mount->raise();
        year->raise();
        date_10->raise();
        date_11->raise();
        date_12->raise();
        date_13->raise();
        date_14->raise();
        date_15->raise();
        date_16->raise();
        date_17->raise();
        date_18->raise();
        date_19->raise();
        date_20->raise();
        date_21->raise();
        date_22->raise();
        date_23->raise();
        date_24->raise();
        date_25->raise();
        date_26->raise();
        date_27->raise();
        date_28->raise();
        date_29->raise();
        date_30->raise();
        date_31->raise();

        retranslateUi(MainWindow);

        save_button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        text_read->setText(QCoreApplication::translate("MainWindow", "Heeeeelllo! It`s student project orginizer! ", nullptr));
        save_button->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        date_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        date_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        date_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        date_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        date_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        date_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        date_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        date_11->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
        date_10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        date_14->setText(QCoreApplication::translate("MainWindow", "14", nullptr));
        date_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        date_13->setText(QCoreApplication::translate("MainWindow", "13", nullptr));
        date_12->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        date_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        date_18->setText(QCoreApplication::translate("MainWindow", "18", nullptr));
        date_17->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
        date_21->setText(QCoreApplication::translate("MainWindow", "21", nullptr));
        date_15->setText(QCoreApplication::translate("MainWindow", "15", nullptr));
        date_20->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        date_19->setText(QCoreApplication::translate("MainWindow", "19", nullptr));
        date_16->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
        date_24->setText(QCoreApplication::translate("MainWindow", "24", nullptr));
        date_27->setText(QCoreApplication::translate("MainWindow", "27", nullptr));
        date_26->setText(QCoreApplication::translate("MainWindow", "26", nullptr));
        date_23->setText(QCoreApplication::translate("MainWindow", "23", nullptr));
        date_22->setText(QCoreApplication::translate("MainWindow", "22", nullptr));
        date_25->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
        date_28->setText(QCoreApplication::translate("MainWindow", "28", nullptr));
        date_29->setText(QCoreApplication::translate("MainWindow", "29", nullptr));
        date_31->setText(QCoreApplication::translate("MainWindow", "31", nullptr));
        date_30->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
