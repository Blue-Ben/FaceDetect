/********************************************************************************
** Form generated from reading UI file 'FaceDetactUI.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEDETACTUI_H
#define UI_FACEDETACTUI_H

#include <Qt3Support/Q3ComboBox>
#include <Qt3Support/Q3Frame>
#include <Qt3Support/Q3TextEdit>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *adaBoostTab;
    QGroupBox *groupBox;
    QSplitter *splitter;
    QRadioButton *aRealtimeRtb;
    QRadioButton *aFileRtb;
    QPushButton *aStartBtn;
    QGroupBox *groupBox_2;
    QLineEdit *aImgPathText;
    QPushButton *aChoiceFileBtn;
    QGroupBox *groupBox_3;
    QLabel *aSrcImgLabel;
    QLabel *label_2;
    QLabel *aDstImgLabel;
    QLabel *label_4;
    QWidget *pCASVMTab;
    QGroupBox *groupBox_4;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QPushButton *pTrainFaceChoiceFileBtn;
    QLabel *label_11;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QSpinBox *pTrainFaceBeginBox;
    QLabel *label_13;
    QLabel *label_14;
    QSpinBox *pTrainFaceEndBox;
    QLineEdit *pTrainFaceImgPathText;
    QWidget *tab;
    QLineEdit *pTrainNotfaceImgPathText;
    QPushButton *pTrainNotfaceChoiceFileBtn;
    QLabel *label_7;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QSpinBox *pTrainNotfaceBeginBox;
    QLabel *label_10;
    QLabel *label_8;
    QSpinBox *pTrainNotfaceEndBox;
    QPushButton *pStartTrain;
    Q3ComboBox *pSVMCoreFunBox;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *pCptRateBox;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_5;
    QTabWidget *tabWidget_3;
    QWidget *tab_3;
    QPushButton *pTestFaceChoiceFileBtn;
    QLabel *label_15;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_4;
    QLabel *label_16;
    QSpinBox *pTestFaceBeginBox;
    QLabel *label_17;
    QLabel *label_18;
    QSpinBox *pTestFaceEndBox;
    QLineEdit *pTestFaceImgPathText;
    QWidget *tab_4;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_5;
    QLabel *label_19;
    QSpinBox *pTestNotfaceBeginBox;
    QLabel *label_20;
    QLabel *label_21;
    QSpinBox *pTestNotfaceEndBox;
    QPushButton *pTestNotfaceChoiceFileBtn;
    QLineEdit *pTestNotfaceImgPathText;
    QLabel *label_22;
    QPushButton *pStartTest;
    QGroupBox *groupBox_6;
    Q3TextEdit *pMsgText;
    QWidget *yCrCbTab;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_11;
    QLabel *ySplitAreaImgLabel;
    QGroupBox *groupBox_12;
    QLabel *yDstImgLabel;
    QGroupBox *groupBox_8;
    QLabel *ySrcImgLabel;
    QGroupBox *groupBox_7;
    QSplitter *splitter_2;
    QRadioButton *yRealtimeRtb;
    QRadioButton *yFileRtb;
    QLineEdit *yImgPathText;
    QPushButton *yChoiceFileBtn;
    QPushButton *yStartBtn;
    QGroupBox *groupBox_10;
    QLabel *yMorphImgLabel;
    QGroupBox *groupBox_9;
    QLabel *ySkinImgLabel;
    QWidget *compareTab;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        adaBoostTab = new QWidget();
        adaBoostTab->setObjectName(QString::fromUtf8("adaBoostTab"));
        groupBox = new QGroupBox(adaBoostTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 20, 321, 81));
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(110, 30, 232, 22));
        splitter->setOrientation(Qt::Horizontal);
        aRealtimeRtb = new QRadioButton(splitter);
        aRealtimeRtb->setObjectName(QString::fromUtf8("aRealtimeRtb"));
        aRealtimeRtb->setCursor(QCursor(Qt::PointingHandCursor));
        aRealtimeRtb->setAcceptDrops(false);
        aRealtimeRtb->setAutoFillBackground(false);
        aRealtimeRtb->setChecked(true);
        splitter->addWidget(aRealtimeRtb);
        aFileRtb = new QRadioButton(splitter);
        aFileRtb->setObjectName(QString::fromUtf8("aFileRtb"));
        aFileRtb->setCursor(QCursor(Qt::PointingHandCursor));
        splitter->addWidget(aFileRtb);
        aStartBtn = new QPushButton(adaBoostTab);
        aStartBtn->setObjectName(QString::fromUtf8("aStartBtn"));
        aStartBtn->setGeometry(QRect(500, 40, 141, 61));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferDefault);
        aStartBtn->setFont(font);
        aStartBtn->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_2 = new QGroupBox(adaBoostTab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 120, 651, 91));
        aImgPathText = new QLineEdit(groupBox_2);
        aImgPathText->setObjectName(QString::fromUtf8("aImgPathText"));
        aImgPathText->setEnabled(false);
        aImgPathText->setGeometry(QRect(61, 45, 401, 27));
        aChoiceFileBtn = new QPushButton(groupBox_2);
        aChoiceFileBtn->setObjectName(QString::fromUtf8("aChoiceFileBtn"));
        aChoiceFileBtn->setEnabled(false);
        aChoiceFileBtn->setGeometry(QRect(471, 45, 98, 27));
        aChoiceFileBtn->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_3 = new QGroupBox(adaBoostTab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(50, 230, 711, 291));
        aSrcImgLabel = new QLabel(groupBox_3);
        aSrcImgLabel->setObjectName(QString::fromUtf8("aSrcImgLabel"));
        aSrcImgLabel->setEnabled(true);
        aSrcImgLabel->setGeometry(QRect(43, 28, 321, 241));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(aSrcImgLabel->sizePolicy().hasHeightForWidth());
        aSrcImgLabel->setSizePolicy(sizePolicy1);
        aSrcImgLabel->setMinimumSize(QSize(283, 211));
        aSrcImgLabel->setMaximumSize(QSize(543543, 543254));
        aSrcImgLabel->setLayoutDirection(Qt::LeftToRight);
        aSrcImgLabel->setTextFormat(Qt::AutoText);
        aSrcImgLabel->setPixmap(QPixmap(QString::fromUtf8(":/lena.jpg")));
        aSrcImgLabel->setScaledContents(true);
        aSrcImgLabel->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(165, 275, 66, 17));
        aDstImgLabel = new QLabel(groupBox_3);
        aDstImgLabel->setObjectName(QString::fromUtf8("aDstImgLabel"));
        aDstImgLabel->setEnabled(true);
        aDstImgLabel->setGeometry(QRect(380, 30, 321, 241));
        sizePolicy1.setHeightForWidth(aDstImgLabel->sizePolicy().hasHeightForWidth());
        aDstImgLabel->setSizePolicy(sizePolicy1);
        aDstImgLabel->setMinimumSize(QSize(283, 211));
        aDstImgLabel->setMaximumSize(QSize(543543, 543254));
        aDstImgLabel->setLayoutDirection(Qt::LeftToRight);
        aDstImgLabel->setPixmap(QPixmap(QString::fromUtf8(":/lena.jpg")));
        aDstImgLabel->setScaledContents(true);
        aDstImgLabel->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(510, 274, 66, 17));
        tabWidget->addTab(adaBoostTab, QString());
        pCASVMTab = new QWidget();
        pCASVMTab->setObjectName(QString::fromUtf8("pCASVMTab"));
        groupBox_4 = new QGroupBox(pCASVMTab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(30, 10, 731, 251));
        groupBox_4->setStyleSheet(QString::fromUtf8("#groupBox_4\n"
"{\n"
"border:2px solid;\n"
"border-radius:5px;\n"
"}"));
        tabWidget_2 = new QTabWidget(groupBox_4);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(30, 40, 481, 181));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tabWidget_2->setTabShape(QTabWidget::Rounded);
        tabWidget_2->setUsesScrollButtons(true);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pTrainFaceChoiceFileBtn = new QPushButton(tab_2);
        pTrainFaceChoiceFileBtn->setObjectName(QString::fromUtf8("pTrainFaceChoiceFileBtn"));
        pTrainFaceChoiceFileBtn->setGeometry(QRect(344, 60, 91, 27));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 28, 101, 17));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 110, 237, 30));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        label_12->setFont(font1);

        gridLayout_3->addWidget(label_12, 0, 2, 1, 1);

        pTrainFaceBeginBox = new QSpinBox(layoutWidget);
        pTrainFaceBeginBox->setObjectName(QString::fromUtf8("pTrainFaceBeginBox"));

        gridLayout_3->addWidget(pTrainFaceBeginBox, 0, 1, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 0, 4, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        pTrainFaceEndBox = new QSpinBox(layoutWidget);
        pTrainFaceEndBox->setObjectName(QString::fromUtf8("pTrainFaceEndBox"));

        gridLayout_3->addWidget(pTrainFaceEndBox, 0, 3, 1, 1);

        pTrainFaceImgPathText = new QLineEdit(tab_2);
        pTrainFaceImgPathText->setObjectName(QString::fromUtf8("pTrainFaceImgPathText"));
        pTrainFaceImgPathText->setGeometry(QRect(50, 60, 291, 27));
        tabWidget_2->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pTrainNotfaceImgPathText = new QLineEdit(tab);
        pTrainNotfaceImgPathText->setObjectName(QString::fromUtf8("pTrainNotfaceImgPathText"));
        pTrainNotfaceImgPathText->setGeometry(QRect(50, 60, 291, 27));
        pTrainNotfaceChoiceFileBtn = new QPushButton(tab);
        pTrainNotfaceChoiceFileBtn->setObjectName(QString::fromUtf8("pTrainNotfaceChoiceFileBtn"));
        pTrainNotfaceChoiceFileBtn->setGeometry(QRect(344, 60, 91, 27));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 28, 121, 17));
        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 110, 237, 30));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        pTrainNotfaceBeginBox = new QSpinBox(layoutWidget1);
        pTrainNotfaceBeginBox->setObjectName(QString::fromUtf8("pTrainNotfaceBeginBox"));

        gridLayout_2->addWidget(pTrainNotfaceBeginBox, 0, 1, 1, 1);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 4, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        pTrainNotfaceEndBox = new QSpinBox(layoutWidget1);
        pTrainNotfaceEndBox->setObjectName(QString::fromUtf8("pTrainNotfaceEndBox"));

        gridLayout_2->addWidget(pTrainNotfaceEndBox, 0, 3, 1, 1);

        tabWidget_2->addTab(tab, QString());
        pStartTrain = new QPushButton(groupBox_4);
        pStartTrain->setObjectName(QString::fromUtf8("pStartTrain"));
        pStartTrain->setGeometry(QRect(570, 180, 98, 51));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        pStartTrain->setFont(font2);
        pSVMCoreFunBox = new Q3ComboBox(groupBox_4);
        pSVMCoreFunBox->setObjectName(QString::fromUtf8("pSVMCoreFunBox"));
        pSVMCoreFunBox->setGeometry(QRect(560, 140, 96, 27));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(520, 49, 91, 17));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(520, 110, 91, 17));
        pCptRateBox = new QSpinBox(groupBox_4);
        pCptRateBox->setObjectName(QString::fromUtf8("pCptRateBox"));
        pCptRateBox->setGeometry(QRect(612, 44, 71, 27));
        pCptRateBox->setLayoutDirection(Qt::LeftToRight);
        pCptRateBox->setAlignment(Qt::AlignCenter);
        pCptRateBox->setMinimum(0);
        pCptRateBox->setMaximum(100);
        pCptRateBox->setValue(60);
        horizontalSlider = new QSlider(groupBox_4);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(524, 80, 181, 29));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(60);
        horizontalSlider->setOrientation(Qt::Horizontal);
        groupBox_5 = new QGroupBox(pCASVMTab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(30, 280, 381, 241));
        groupBox_5->setStyleSheet(QString::fromUtf8("#groupBox_5\n"
"{\n"
"border:2px solid;\n"
"border-radius:5px;\n"
"}"));
        tabWidget_3 = new QTabWidget(groupBox_5);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 33, 361, 151));
        tabWidget_3->setTabPosition(QTabWidget::West);
        tabWidget_3->setTabShape(QTabWidget::Rounded);
        tabWidget_3->setUsesScrollButtons(true);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pTestFaceChoiceFileBtn = new QPushButton(tab_3);
        pTestFaceChoiceFileBtn->setObjectName(QString::fromUtf8("pTestFaceChoiceFileBtn"));
        pTestFaceChoiceFileBtn->setGeometry(QRect(234, 47, 91, 27));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(7, 16, 101, 17));
        layoutWidget_2 = new QWidget(tab_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(42, 93, 237, 30));
        gridLayout_4 = new QGridLayout(layoutWidget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);

        gridLayout_4->addWidget(label_16, 0, 2, 1, 1);

        pTestFaceBeginBox = new QSpinBox(layoutWidget_2);
        pTestFaceBeginBox->setObjectName(QString::fromUtf8("pTestFaceBeginBox"));

        gridLayout_4->addWidget(pTestFaceBeginBox, 0, 1, 1, 1);

        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 0, 4, 1, 1);

        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 0, 0, 1, 1);

        pTestFaceEndBox = new QSpinBox(layoutWidget_2);
        pTestFaceEndBox->setObjectName(QString::fromUtf8("pTestFaceEndBox"));

        gridLayout_4->addWidget(pTestFaceEndBox, 0, 3, 1, 1);

        pTestFaceImgPathText = new QLineEdit(tab_3);
        pTestFaceImgPathText->setObjectName(QString::fromUtf8("pTestFaceImgPathText"));
        pTestFaceImgPathText->setGeometry(QRect(8, 47, 231, 27));
        tabWidget_3->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        layoutWidget_3 = new QWidget(tab_4);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(42, 93, 237, 30));
        gridLayout_5 = new QGridLayout(layoutWidget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);

        gridLayout_5->addWidget(label_19, 0, 2, 1, 1);

        pTestNotfaceBeginBox = new QSpinBox(layoutWidget_3);
        pTestNotfaceBeginBox->setObjectName(QString::fromUtf8("pTestNotfaceBeginBox"));

        gridLayout_5->addWidget(pTestNotfaceBeginBox, 0, 1, 1, 1);

        label_20 = new QLabel(layoutWidget_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_5->addWidget(label_20, 0, 4, 1, 1);

        label_21 = new QLabel(layoutWidget_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_5->addWidget(label_21, 0, 0, 1, 1);

        pTestNotfaceEndBox = new QSpinBox(layoutWidget_3);
        pTestNotfaceEndBox->setObjectName(QString::fromUtf8("pTestNotfaceEndBox"));

        gridLayout_5->addWidget(pTestNotfaceEndBox, 0, 3, 1, 1);

        pTestNotfaceChoiceFileBtn = new QPushButton(tab_4);
        pTestNotfaceChoiceFileBtn->setObjectName(QString::fromUtf8("pTestNotfaceChoiceFileBtn"));
        pTestNotfaceChoiceFileBtn->setGeometry(QRect(234, 47, 91, 27));
        pTestNotfaceImgPathText = new QLineEdit(tab_4);
        pTestNotfaceImgPathText->setObjectName(QString::fromUtf8("pTestNotfaceImgPathText"));
        pTestNotfaceImgPathText->setGeometry(QRect(8, 47, 231, 27));
        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(7, 16, 121, 17));
        tabWidget_3->addTab(tab_4, QString());
        pStartTest = new QPushButton(groupBox_5);
        pStartTest->setObjectName(QString::fromUtf8("pStartTest"));
        pStartTest->setGeometry(QRect(129, 192, 131, 41));
        pStartTest->setFont(font2);
        groupBox_6 = new QGroupBox(pCASVMTab);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(420, 280, 341, 231));
        pMsgText = new Q3TextEdit(groupBox_6);
        pMsgText->setObjectName(QString::fromUtf8("pMsgText"));
        pMsgText->setGeometry(QRect(40, 20, 291, 211));
        //pMsgText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        pMsgText->setMargin(0);
        pMsgText->setTextFormat(Qt::RichText);
        QBrush brush(QColor(13, 0, 4, 255));
        brush.setStyle(Qt::SolidPattern);
        pMsgText->setPaper(brush);
        pMsgText->setLinkUnderline(true);
        pMsgText->setReadOnly(false);
        tabWidget->addTab(pCASVMTab, QString());
        yCrCbTab = new QWidget();
        yCrCbTab->setObjectName(QString::fromUtf8("yCrCbTab"));
        gridLayout_7 = new QGridLayout(yCrCbTab);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_11 = new QGroupBox(yCrCbTab);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setStyleSheet(QString::fromUtf8("#groupBox_11\n"
"{\n"
"border:2px solid;\n"
"border-radius:30px;\n"
"margin-top:10px;\n"
"margin-left:10px;\n"
"}"));
        ySplitAreaImgLabel = new QLabel(groupBox_11);
        ySplitAreaImgLabel->setObjectName(QString::fromUtf8("ySplitAreaImgLabel"));
        ySplitAreaImgLabel->setGeometry(QRect(30, 40, 201, 191));
        ySplitAreaImgLabel->setPixmap(QPixmap(QString::fromUtf8(":/lena.jpg")));
        ySplitAreaImgLabel->setScaledContents(true);
        ySplitAreaImgLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(groupBox_11, 1, 1, 1, 1);

        groupBox_12 = new QGroupBox(yCrCbTab);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setStyleSheet(QString::fromUtf8("#groupBox_12\n"
"{\n"
"border:2px solid;\n"
"border-radius:30px;\n"
"margin-top:10px;\n"
"margin-left:10px;\n"
"}"));
        yDstImgLabel = new QLabel(groupBox_12);
        yDstImgLabel->setObjectName(QString::fromUtf8("yDstImgLabel"));
        yDstImgLabel->setGeometry(QRect(30, 40, 201, 191));
        yDstImgLabel->setPixmap(QPixmap(QString::fromUtf8(":/lena.jpg")));
        yDstImgLabel->setScaledContents(true);
        yDstImgLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(groupBox_12, 1, 2, 1, 1);

        groupBox_8 = new QGroupBox(yCrCbTab);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setStyleSheet(QString::fromUtf8("#groupBox_8\n"
"{\n"
"border:2px solid;\n"
"border-radius:30px;\n"
"margin-bottom:10px;\n"
"margin-left:10px;\n"
"}"));
        ySrcImgLabel = new QLabel(groupBox_8);
        ySrcImgLabel->setObjectName(QString::fromUtf8("ySrcImgLabel"));
        ySrcImgLabel->setGeometry(QRect(24, 34, 201, 191));
        ySrcImgLabel->setPixmap(QPixmap(QString::fromUtf8(":/lena.jpg")));
        ySrcImgLabel->setScaledContents(true);
        ySrcImgLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(groupBox_8, 0, 1, 1, 1);

        groupBox_7 = new QGroupBox(yCrCbTab);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setStyleSheet(QString::fromUtf8("#groupBox_7\n"
"{\n"
"background-color: rgba(252, 138, 255, 100);\n"
"border:2px solid;\n"
"border-radius:5px;\n"
"margin-top:30px;\n"
"margin-bottom:30px;\n"
"}"));
        splitter_2 = new QSplitter(groupBox_7);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(30, 60, 181, 22));
        splitter_2->setOrientation(Qt::Horizontal);
        yRealtimeRtb = new QRadioButton(splitter_2);
        yRealtimeRtb->setObjectName(QString::fromUtf8("yRealtimeRtb"));
        yRealtimeRtb->setCursor(QCursor(Qt::PointingHandCursor));
        yRealtimeRtb->setAcceptDrops(false);
        yRealtimeRtb->setAutoFillBackground(false);
        yRealtimeRtb->setChecked(true);
        splitter_2->addWidget(yRealtimeRtb);
        yFileRtb = new QRadioButton(splitter_2);
        yFileRtb->setObjectName(QString::fromUtf8("yFileRtb"));
        yFileRtb->setCursor(QCursor(Qt::PointingHandCursor));
        splitter_2->addWidget(yFileRtb);
        yImgPathText = new QLineEdit(groupBox_7);
        yImgPathText->setObjectName(QString::fromUtf8("yImgPathText"));
        yImgPathText->setEnabled(false);
        yImgPathText->setGeometry(QRect(18, 94, 221, 27));
        yChoiceFileBtn = new QPushButton(groupBox_7);
        yChoiceFileBtn->setObjectName(QString::fromUtf8("yChoiceFileBtn"));
        yChoiceFileBtn->setEnabled(false);
        yChoiceFileBtn->setGeometry(QRect(70, 129, 98, 30));
        yChoiceFileBtn->setCursor(QCursor(Qt::PointingHandCursor));
        yStartBtn = new QPushButton(groupBox_7);
        yStartBtn->setObjectName(QString::fromUtf8("yStartBtn"));
        yStartBtn->setGeometry(QRect(70, 166, 98, 41));
        QFont font3;
        font3.setPointSize(19);
        font3.setBold(true);
        font3.setWeight(75);
        yStartBtn->setFont(font3);

        gridLayout_6->addWidget(groupBox_7, 0, 0, 1, 1);

        groupBox_10 = new QGroupBox(yCrCbTab);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setStyleSheet(QString::fromUtf8("#groupBox_10\n"
"{\n"
"border:2px solid;\n"
"border-radius:30px;\n"
"margin-top:10px;\n"
"}"));
        yMorphImgLabel = new QLabel(groupBox_10);
        yMorphImgLabel->setObjectName(QString::fromUtf8("yMorphImgLabel"));
        yMorphImgLabel->setGeometry(QRect(20, 40, 201, 191));
        yMorphImgLabel->setPixmap(QPixmap(QString::fromUtf8(":/lena.jpg")));
        yMorphImgLabel->setScaledContents(true);
        yMorphImgLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(groupBox_10, 1, 0, 1, 1);

        groupBox_9 = new QGroupBox(yCrCbTab);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setStyleSheet(QString::fromUtf8("#groupBox_9\n"
"{\n"
"border:2px solid;\n"
"border-radius:30px;\n"
"margin-left:10px;\n"
"margin-bottom:10px;\n"
"}"));
        ySkinImgLabel = new QLabel(groupBox_9);
        ySkinImgLabel->setObjectName(QString::fromUtf8("ySkinImgLabel"));
        ySkinImgLabel->setGeometry(QRect(30, 30, 201, 191));
        ySkinImgLabel->setPixmap(QPixmap(QString::fromUtf8(":/lena.jpg")));
        ySkinImgLabel->setScaledContents(true);
        ySkinImgLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(groupBox_9, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(yCrCbTab, QString());
        compareTab = new QWidget();
        compareTab->setObjectName(QString::fromUtf8("compareTab"));
        tabWidget->addTab(compareTab, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pCptRateBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), pCptRateBox, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\272\272\350\204\270\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\243\200\346\265\213\346\226\271\345\274\217\357\274\232", 0, QApplication::UnicodeUTF8));
        aRealtimeRtb->setText(QApplication::translate("MainWindow", "\345\256\236\346\227\266\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        aFileRtb->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        aStartBtn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\346\226\207\344\273\266\357\274\232", 0, QApplication::UnicodeUTF8));
        aImgPathText->setText(QString());
        aImgPathText->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\233\276\345\203\217\346\226\207\344\273\266\350\267\257\345\276\204 . . . . . .", 0, QApplication::UnicodeUTF8));
        aChoiceFileBtn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\243\200\346\265\213\347\273\223\346\236\234\357\274\232", 0, QApplication::UnicodeUTF8));
        aSrcImgLabel->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\345\216\237\345\247\213\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        aDstImgLabel->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\346\243\200\346\265\213\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(adaBoostTab), QApplication::translate("MainWindow", "AdaBoost", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\256\255\347\273\203\357\274\232", 0, QApplication::UnicodeUTF8));
        pTrainFaceChoiceFileBtn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "\344\272\272\350\204\270\345\233\276\345\203\217\346\226\207\344\273\266\357\274\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "~", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "\345\217\267\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "  \344\272\272\350\204\270  ", 0, QApplication::UnicodeUTF8));
        pTrainNotfaceChoiceFileBtn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\351\235\236\344\272\272\350\204\270\345\233\276\345\203\217\346\226\207\344\273\266\357\274\232", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "~", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\345\217\267\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("MainWindow", "\351\235\236\344\272\272\350\204\270", 0, QApplication::UnicodeUTF8));
        pStartTrain->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\256\255\347\273\203", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "PCA\346\210\220\345\210\206\346\257\224:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "SVM\346\240\270\345\207\275\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        pCptRateBox->setSuffix(QApplication::translate("MainWindow", "%", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\346\265\213\350\257\225\357\274\232", 0, QApplication::UnicodeUTF8));
        pTestFaceChoiceFileBtn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "\344\272\272\350\204\270\345\233\276\345\203\217\346\226\207\344\273\266\357\274\232", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "~", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "\345\217\267\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_3), QApplication::translate("MainWindow", "  \344\272\272\350\204\270  ", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "~", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "\345\217\267\345\233\276\345\203\217", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        pTestNotfaceChoiceFileBtn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "\351\235\236\344\272\272\350\204\270\345\233\276\345\203\217\346\226\207\344\273\266\357\274\232", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_4), QApplication::translate("MainWindow", "\351\235\236\344\272\272\350\204\270", 0, QApplication::UnicodeUTF8));
        pStartTest->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\344\277\241\346\201\257\357\274\232", 0, QApplication::UnicodeUTF8));
        pMsgText->setText(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\"font-size:11pt;font-family:Ubuntu\">\n"
"<p dir=\"ltr\">\350\256\255\347\273\203\345\217\212\346\265\213\350\257\225\344\277\241\346\201\257\343\200\202\343\200\202\343\200\202\343\200\202\343\200\202\343\200\202</p>\n"
"</body></html>\n"
"", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(pCASVMTab), QApplication::translate("MainWindow", "PCASVM", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "\345\214\272\345\237\237\345\210\206\345\211\262\357\274\232", 0, QApplication::UnicodeUTF8));
        ySplitAreaImgLabel->setText(QString());
        groupBox_12->setTitle(QApplication::translate("MainWindow", "\344\272\272\350\204\270\345\214\272\345\237\237\347\255\233\351\200\211:", 0, QApplication::UnicodeUTF8));
        yDstImgLabel->setText(QString());
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\345\216\237\345\233\276:", 0, QApplication::UnicodeUTF8));
        ySrcImgLabel->setText(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        yRealtimeRtb->setText(QApplication::translate("MainWindow", "\345\256\236\346\227\266\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        yFileRtb->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        yImgPathText->setText(QString());
        yImgPathText->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\233\276\345\203\217\346\226\207\344\273\266\350\267\257\345\276\204 . . . . . .", 0, QApplication::UnicodeUTF8));
        yChoiceFileBtn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        yStartBtn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\345\275\242\346\200\201\345\255\246\345\244\204\347\220\206\357\274\232", 0, QApplication::UnicodeUTF8));
        yMorphImgLabel->setText(QString());
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\350\202\244\350\211\262\345\233\276\357\274\232", 0, QApplication::UnicodeUTF8));
        ySkinImgLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(yCrCbTab), QApplication::translate("MainWindow", "YCrCb", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(compareTab), QApplication::translate("MainWindow", "Compare", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEDETACTUI_H
