/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *sideBar_up_Frame;
    QGridLayout *gridLayout_14;
    QLabel *RS_maxCur_Label;
    QLabel *RS_maxCur_tag_Label;
    QLabel *runTime_Label;
    QSpacerItem *sideBar_up_HlSpacer_2;
    QSpacerItem *sideBar_up_HlSpacer_3;
    QLineEdit *runTime_LnEdit;
    QLabel *battery_Label;
    QSpacerItem *sideBar_up_HlSpacer_1;
    QPushButton *keyBoard_PsBtn;
    QLabel *BMS_cntState_tag_Label;
    QLabel *BMS_cntState_Label;
    QRadioButton *lock_RdBtn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *sideBar_up_HlSpacer;
    QStackedWidget *main_SkWidget;
    QWidget *test_power_Page;
    QGridLayout *gridLayout_16;
    QTabWidget *ES_TbWidget;
    QWidget *ES_PE_tab;
    QGridLayout *gridLayout_27;
    QFrame *ES_PE_Frame;
    QGridLayout *gridLayout_12;
    QPushButton *ES_PE_zoomOut_PsBtn;
    QPushButton *ES_PE_zoomIn_PsBtn;
    QSpacerItem *horizontalSpacer_6;
    QwtPlot *ES_PE_QwtPlot;
    QWidget *ES_wave_tab;
    QGridLayout *gridLayout_28;
    QFrame *ES_wave_Frame;
    QGridLayout *gridLayout_29;
    QCheckBox *ES_wave_CkBox;
    QSpacerItem *ES_wave_HlSpacer;
    QwtPlot *ES_wave_QwtPlot;
    QGroupBox *ME_phasor_GpBox;
    QGridLayout *gridLayout_15;
    QFrame *ME_phasor_Frame;
    QTableWidget *ES_standard_TblWidget;
    QGroupBox *ME_energy_GpBox;
    QGridLayout *gridLayout_22;
    QLabel *ME_energy_std_Label;
    QLineEdit *ME_energy_std_LnEdit;
    QLineEdit *lineEdit_6;
    QLabel *RSMV_energy_pul_Label_5;
    QPushButton *RSMV_clearEnergy_PsBtn;
    QLabel *ME_energy_object_Label;
    QLineEdit *ME_energy_object_LnEdit;
    QGroupBox *ES_value_GpBox;
    QGridLayout *gridLayout_23;
    QLabel *ES_TE_Label;
    QPushButton *serPort_EVT_PsBtn;
    QPushButton *ES_insertForm_PsBtn;
    QLineEdit *ES_TE_LnEdit;
    QLabel *ES_PE_Label;
    QLineEdit *ES_PE_LnEdit;
    QWidget *test_ripple_Page;
    QGridLayout *gridLayout_3;
    QwtPlot *RSMV_Harmonic_QwtPlot;
    QFrame *RSMV_harmonic_Frame;
    QGridLayout *gridLayout_10;
    QLabel *RSMV_Harmonic_Phase_Label;
    QComboBox *RSMV_Harmonic_Phase_CbBox;
    QLabel *RSMV_Harmonic_Times_Label;
    QComboBox *RSMV_Harmonic_Times_CbBox;
    QLabel *RSMV_Harmonic_Range_Label;
    QSlider *RSMV_Harmonic_Range_HSlider;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *RSMV_Harmonic_LnEdit_Range;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_12;
    QTableWidget *RSMV_harmonic_rms_TblWidget;
    QTableWidget *RSMV_Harmonic_TblWidget;
    QWidget *from_Page;
    QGridLayout *gridLayout_26;
    QFrame *from_information_Frame;
    QGridLayout *gridLayout_21;
    QLabel *from_information_Label;
    QSpacerItem *from_information_HlSpacer;
    QGroupBox *from_ctl_GpBox;
    QGridLayout *gridLayout_24;
    QPushButton *RSMV_clearFrom_PsBtn;
    QPushButton *RSMV_readFrom_PsBtn;
    QPushButton *RSMV_buildFrom_PsBtn;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *RSMV_saveFormMsg_PsBtn;
    QFrame *from_error_Frame;
    QGridLayout *gridLayout_25;
    QLabel *from_error_Label;
    QSpacerItem *from_error_HlSpacer;
    QTableWidget *from_information_TbWidget;
    QTextEdit *from_error_TxEdit;
    QWidget *serPort_Page;
    QGridLayout *gridLayout_6;
    QGroupBox *serPort_Rec_GbBox;
    QGridLayout *gridLayout_7;
    QTextEdit *serPort_Rec_TxEdit;
    QPushButton *serPort_CleanRec_PsBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QGroupBox *serPort_send_GpBox;
    QGridLayout *gridLayout_8;
    QPushButton *serPort_CleanSend_PsBtn;
    QCheckBox *serPort_LF_CkBox;
    QLabel *label_5;
    QPushButton *serPort_Send_PsBtn;
    QCheckBox *serPort_CR_CkBox;
    QTextEdit *serPort_Send_TxEdit;
    QGroupBox *serPort_shortcut_GpBox;
    QGridLayout *gridLayout_4;
    QPushButton *serPort_RP_PsBtn;
    QPushButton *serPort_ME_PsBtn;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *serPort_RS_PsBtn;
    QPushButton *serPort_RSM_PsBtn;
    QPushButton *serPort_AV_PsBtn;
    QPushButton *serPort_RBAT_PsBtn;
    QSpacerItem *horizontalSpacer_19;
    QGroupBox *serPort_SP_GpBox;
    QGridLayout *gridLayout_17;
    QPushButton *serPort_read_SP_PsBtn;
    QPushButton *serPort_write_SP_PsBtn;
    QSpacerItem *serPort_SP_HlSpacer;
    QTableWidget *serPort_SP_TabWidget;
    QGroupBox *serPort_Settings_GpBox;
    QGridLayout *gridLayout_5;
    QLabel *serPort_portName_Label;
    QComboBox *serPort_portName_CbBox;
    QLabel *serPort_parity_Label;
    QComboBox *serPort_parity_CbBox;
    QLabel *serPort_baudRate_Label;
    QComboBox *serPort_baudRate_CbBox;
    QLabel *serPort_dataBit_Label;
    QComboBox *serPort_dataBit_CbBox;
    QLabel *serPort_stopBit_Label;
    QComboBox *serPort_stopBit_CbBox;
    QLabel *serPort_flowCtl_Label;
    QComboBox *serPort_flowCtl_CbBox;
    QGroupBox *serPort_ctl_GpBox;
    QGridLayout *gridLayout_9;
    QPushButton *serPort_Open_PsBtn;
    QPushButton *serPort_Close_PsBtn;
    QWidget *sideBar_right_Page;
    QGridLayout *gridLayout_2;
    QToolButton *sideBar_TlBtn_3;
    QToolButton *sideBar_TlBtn_2;
    QToolButton *sideBar_TlBtn_4;
    QToolButton *sideBar_TlBtn_1;
    QPushButton *start_PsBtn;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(800, 540);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWidget->sizePolicy().hasHeightForWidth());
        MainWidget->setSizePolicy(sizePolicy);
        MainWidget->setMinimumSize(QSize(800, 540));
        MainWidget->setMaximumSize(QSize(800, 540));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/logo_xinglong.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWidget->setWindowIcon(icon);
        MainWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(MainWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sideBar_up_Frame = new QFrame(MainWidget);
        sideBar_up_Frame->setObjectName(QString::fromUtf8("sideBar_up_Frame"));
        sizePolicy.setHeightForWidth(sideBar_up_Frame->sizePolicy().hasHeightForWidth());
        sideBar_up_Frame->setSizePolicy(sizePolicy);
        sideBar_up_Frame->setMinimumSize(QSize(800, 30));
        sideBar_up_Frame->setMaximumSize(QSize(800, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Narrow"));
        font.setPointSize(12);
        sideBar_up_Frame->setFont(font);
        sideBar_up_Frame->setStyleSheet(QString::fromUtf8("#sideBar_up_Frame{\n"
" border: 1px solid rgb(18, 220, 200);\n"
"    background: qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(7, 85, 75, 255),\n"
"        stop:1 rgba(18, 220, 200, 255));\n"
"}\n"
""));
        sideBar_up_Frame->setFrameShape(QFrame::StyledPanel);
        sideBar_up_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_14 = new QGridLayout(sideBar_up_Frame);
        gridLayout_14->setSpacing(0);
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        RS_maxCur_Label = new QLabel(sideBar_up_Frame);
        RS_maxCur_Label->setObjectName(QString::fromUtf8("RS_maxCur_Label"));
        sizePolicy.setHeightForWidth(RS_maxCur_Label->sizePolicy().hasHeightForWidth());
        RS_maxCur_Label->setSizePolicy(sizePolicy);
        RS_maxCur_Label->setFont(font);
        RS_maxCur_Label->setContextMenuPolicy(Qt::NoContextMenu);
        RS_maxCur_Label->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));

        gridLayout_14->addWidget(RS_maxCur_Label, 0, 10, 1, 1);

        RS_maxCur_tag_Label = new QLabel(sideBar_up_Frame);
        RS_maxCur_tag_Label->setObjectName(QString::fromUtf8("RS_maxCur_tag_Label"));
        sizePolicy.setHeightForWidth(RS_maxCur_tag_Label->sizePolicy().hasHeightForWidth());
        RS_maxCur_tag_Label->setSizePolicy(sizePolicy);
        RS_maxCur_tag_Label->setFont(font);
        RS_maxCur_tag_Label->setContextMenuPolicy(Qt::NoContextMenu);
        RS_maxCur_tag_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(RS_maxCur_tag_Label, 0, 9, 1, 1);

        runTime_Label = new QLabel(sideBar_up_Frame);
        runTime_Label->setObjectName(QString::fromUtf8("runTime_Label"));
        runTime_Label->setFont(font);
        runTime_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(runTime_Label, 0, 3, 1, 1);

        sideBar_up_HlSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(sideBar_up_HlSpacer_2, 0, 5, 1, 1);

        sideBar_up_HlSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(sideBar_up_HlSpacer_3, 0, 15, 1, 1);

        runTime_LnEdit = new QLineEdit(sideBar_up_Frame);
        runTime_LnEdit->setObjectName(QString::fromUtf8("runTime_LnEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(runTime_LnEdit->sizePolicy().hasHeightForWidth());
        runTime_LnEdit->setSizePolicy(sizePolicy1);
        runTime_LnEdit->setMinimumSize(QSize(70, 0));
        runTime_LnEdit->setMaximumSize(QSize(70, 16777215));
        runTime_LnEdit->setFont(font);
        runTime_LnEdit->setReadOnly(true);

        gridLayout_14->addWidget(runTime_LnEdit, 0, 4, 1, 1);

        battery_Label = new QLabel(sideBar_up_Frame);
        battery_Label->setObjectName(QString::fromUtf8("battery_Label"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(battery_Label->sizePolicy().hasHeightForWidth());
        battery_Label->setSizePolicy(sizePolicy2);
        battery_Label->setMinimumSize(QSize(45, 29));
        battery_Label->setMaximumSize(QSize(25, 33));
        battery_Label->setFont(font);
        battery_Label->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/battery_1.png);"));

        gridLayout_14->addWidget(battery_Label, 0, 18, 1, 1);

        sideBar_up_HlSpacer_1 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(sideBar_up_HlSpacer_1, 0, 1, 1, 1);

        keyBoard_PsBtn = new QPushButton(sideBar_up_Frame);
        keyBoard_PsBtn->setObjectName(QString::fromUtf8("keyBoard_PsBtn"));
        QFont font1;
        font1.setPointSize(12);
        keyBoard_PsBtn->setFont(font1);

        gridLayout_14->addWidget(keyBoard_PsBtn, 0, 0, 1, 1);

        BMS_cntState_tag_Label = new QLabel(sideBar_up_Frame);
        BMS_cntState_tag_Label->setObjectName(QString::fromUtf8("BMS_cntState_tag_Label"));
        sizePolicy.setHeightForWidth(BMS_cntState_tag_Label->sizePolicy().hasHeightForWidth());
        BMS_cntState_tag_Label->setSizePolicy(sizePolicy);
        BMS_cntState_tag_Label->setFont(font);
        BMS_cntState_tag_Label->setContextMenuPolicy(Qt::NoContextMenu);
        BMS_cntState_tag_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(BMS_cntState_tag_Label, 0, 6, 1, 1);

        BMS_cntState_Label = new QLabel(sideBar_up_Frame);
        BMS_cntState_Label->setObjectName(QString::fromUtf8("BMS_cntState_Label"));
        BMS_cntState_Label->setMinimumSize(QSize(20, 20));
        BMS_cntState_Label->setFont(font);
        BMS_cntState_Label->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));

        gridLayout_14->addWidget(BMS_cntState_Label, 0, 7, 1, 1);

        lock_RdBtn = new QRadioButton(sideBar_up_Frame);
        lock_RdBtn->setObjectName(QString::fromUtf8("lock_RdBtn"));
        sizePolicy.setHeightForWidth(lock_RdBtn->sizePolicy().hasHeightForWidth());
        lock_RdBtn->setSizePolicy(sizePolicy);
        lock_RdBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_14->addWidget(lock_RdBtn, 0, 16, 1, 1);

        horizontalSpacer = new QSpacerItem(52, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer, 0, 17, 1, 1);

        sideBar_up_HlSpacer = new QSpacerItem(30, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(sideBar_up_HlSpacer, 0, 8, 1, 1);


        gridLayout->addWidget(sideBar_up_Frame, 0, 0, 1, 2);

        main_SkWidget = new QStackedWidget(MainWidget);
        main_SkWidget->setObjectName(QString::fromUtf8("main_SkWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(main_SkWidget->sizePolicy().hasHeightForWidth());
        main_SkWidget->setSizePolicy(sizePolicy3);
        main_SkWidget->setMaximumSize(QSize(16777215, 531));
        main_SkWidget->setFont(font);
        main_SkWidget->setLineWidth(0);
        test_power_Page = new QWidget();
        test_power_Page->setObjectName(QString::fromUtf8("test_power_Page"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(test_power_Page->sizePolicy().hasHeightForWidth());
        test_power_Page->setSizePolicy(sizePolicy4);
        gridLayout_16 = new QGridLayout(test_power_Page);
        gridLayout_16->setSpacing(0);
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        ES_TbWidget = new QTabWidget(test_power_Page);
        ES_TbWidget->setObjectName(QString::fromUtf8("ES_TbWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(ES_TbWidget->sizePolicy().hasHeightForWidth());
        ES_TbWidget->setSizePolicy(sizePolicy5);
        ES_TbWidget->setMinimumSize(QSize(369, 226));
        ES_TbWidget->setMaximumSize(QSize(16777215, 225));
        ES_TbWidget->setFont(font);
        ES_TbWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab \n"
"{\n"
"/*\n"
"   width: 151px;\n"
"	border:1px solid;\n"
"	border-color:rgb(0, 65, 100);  \n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop: 0 #eeeeee, stop: 1 gray);\n"
"	border-top-left-radius:10px;\n"
"	border-top-right-radius:10px;\n"
"    padding:3px;\n"
"*/\n"
"    width:252px;\n"
"	border-top-left-radius:10px;\n"
"	border-top-right-radius:10px;\n"
"	color: rgb(255, 255, 255);\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    background: qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(7, 85, 75, 255),\n"
"        stop:1 rgba(10, 100, 75, 255));\n"
"      padding:2px;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected\n"
"{   \n"
"	margin-top: 5px;\n"
"}"));
        ES_PE_tab = new QWidget();
        ES_PE_tab->setObjectName(QString::fromUtf8("ES_PE_tab"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(ES_PE_tab->sizePolicy().hasHeightForWidth());
        ES_PE_tab->setSizePolicy(sizePolicy6);
        gridLayout_27 = new QGridLayout(ES_PE_tab);
        gridLayout_27->setSpacing(0);
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        ES_PE_Frame = new QFrame(ES_PE_tab);
        ES_PE_Frame->setObjectName(QString::fromUtf8("ES_PE_Frame"));
        sizePolicy3.setHeightForWidth(ES_PE_Frame->sizePolicy().hasHeightForWidth());
        ES_PE_Frame->setSizePolicy(sizePolicy3);
        ES_PE_Frame->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Narrow"));
        ES_PE_Frame->setFont(font2);
        ES_PE_Frame->setStyleSheet(QString::fromUtf8("#ES_PE_Frame\n"
"{\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    background: qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(7, 85, 75, 255),\n"
"        stop:1 rgba(18, 220, 200, 255));\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        ES_PE_Frame->setFrameShape(QFrame::StyledPanel);
        ES_PE_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(ES_PE_Frame);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        ES_PE_zoomOut_PsBtn = new QPushButton(ES_PE_Frame);
        ES_PE_zoomOut_PsBtn->setObjectName(QString::fromUtf8("ES_PE_zoomOut_PsBtn"));
        ES_PE_zoomOut_PsBtn->setFont(font2);

        gridLayout_12->addWidget(ES_PE_zoomOut_PsBtn, 0, 1, 1, 1);

        ES_PE_zoomIn_PsBtn = new QPushButton(ES_PE_Frame);
        ES_PE_zoomIn_PsBtn->setObjectName(QString::fromUtf8("ES_PE_zoomIn_PsBtn"));
        ES_PE_zoomIn_PsBtn->setFont(font2);

        gridLayout_12->addWidget(ES_PE_zoomIn_PsBtn, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_6, 0, 0, 1, 1);


        gridLayout_27->addWidget(ES_PE_Frame, 0, 0, 1, 1);

        ES_PE_QwtPlot = new QwtPlot(ES_PE_tab);
        ES_PE_QwtPlot->setObjectName(QString::fromUtf8("ES_PE_QwtPlot"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(ES_PE_QwtPlot->sizePolicy().hasHeightForWidth());
        ES_PE_QwtPlot->setSizePolicy(sizePolicy7);
        ES_PE_QwtPlot->setMinimumSize(QSize(0, 160));
        ES_PE_QwtPlot->setMaximumSize(QSize(16777215, 160));
        ES_PE_QwtPlot->setFont(font2);
        ES_PE_QwtPlot->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 255);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout_27->addWidget(ES_PE_QwtPlot, 1, 0, 1, 1);

        ES_TbWidget->addTab(ES_PE_tab, QString());
        ES_wave_tab = new QWidget();
        ES_wave_tab->setObjectName(QString::fromUtf8("ES_wave_tab"));
        gridLayout_28 = new QGridLayout(ES_wave_tab);
        gridLayout_28->setSpacing(0);
        gridLayout_28->setContentsMargins(0, 0, 0, 0);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        ES_wave_Frame = new QFrame(ES_wave_tab);
        ES_wave_Frame->setObjectName(QString::fromUtf8("ES_wave_Frame"));
        sizePolicy3.setHeightForWidth(ES_wave_Frame->sizePolicy().hasHeightForWidth());
        ES_wave_Frame->setSizePolicy(sizePolicy3);
        ES_wave_Frame->setMaximumSize(QSize(16777215, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Kalinga"));
        font3.setPointSize(12);
        ES_wave_Frame->setFont(font3);
        ES_wave_Frame->setStyleSheet(QString::fromUtf8("#ES_wave_Frame\n"
"{\n"
" border: 1px solid rgb(18, 220, 200);\n"
"    background: qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(7, 85, 75, 255),\n"
"        stop:1 rgba(18, 220, 200, 255));\n"
"}\n"
"\n"
"\n"
"\n"
""));
        ES_wave_Frame->setFrameShape(QFrame::StyledPanel);
        ES_wave_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_29 = new QGridLayout(ES_wave_Frame);
        gridLayout_29->setSpacing(0);
        gridLayout_29->setContentsMargins(0, 0, 0, 0);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        ES_wave_CkBox = new QCheckBox(ES_wave_Frame);
        ES_wave_CkBox->setObjectName(QString::fromUtf8("ES_wave_CkBox"));
        sizePolicy.setHeightForWidth(ES_wave_CkBox->sizePolicy().hasHeightForWidth());
        ES_wave_CkBox->setSizePolicy(sizePolicy);
        ES_wave_CkBox->setFont(font3);
        ES_wave_CkBox->setLayoutDirection(Qt::RightToLeft);
        ES_wave_CkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_29->addWidget(ES_wave_CkBox, 0, 1, 1, 1);

        ES_wave_HlSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_29->addItem(ES_wave_HlSpacer, 0, 0, 1, 1);


        gridLayout_28->addWidget(ES_wave_Frame, 0, 0, 1, 1);

        ES_wave_QwtPlot = new QwtPlot(ES_wave_tab);
        ES_wave_QwtPlot->setObjectName(QString::fromUtf8("ES_wave_QwtPlot"));
        sizePolicy7.setHeightForWidth(ES_wave_QwtPlot->sizePolicy().hasHeightForWidth());
        ES_wave_QwtPlot->setSizePolicy(sizePolicy7);
        ES_wave_QwtPlot->setMinimumSize(QSize(0, 0));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Kalinga"));
        ES_wave_QwtPlot->setFont(font4);
        ES_wave_QwtPlot->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 255);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout_28->addWidget(ES_wave_QwtPlot, 1, 0, 1, 1);

        ES_TbWidget->addTab(ES_wave_tab, QString());

        gridLayout_16->addWidget(ES_TbWidget, 0, 0, 1, 2);

        ME_phasor_GpBox = new QGroupBox(test_power_Page);
        ME_phasor_GpBox->setObjectName(QString::fromUtf8("ME_phasor_GpBox"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(ME_phasor_GpBox->sizePolicy().hasHeightForWidth());
        ME_phasor_GpBox->setSizePolicy(sizePolicy8);
        ME_phasor_GpBox->setMinimumSize(QSize(0, 0));
        ME_phasor_GpBox->setMaximumSize(QSize(301, 223));
        ME_phasor_GpBox->setFont(font);
        ME_phasor_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color: rgb(255, 255, 255);\n"
"    color: rgb(255, 255, 255);\n"
"\n"
" }\n"
"\n"
" QGroupBox {\n"
"    border: 3px solid rgb(7, 85, 75);\n"
"    border-radius: 5px;\n"
"    margin-top: -1ex; /* leave space at the top for the title */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                     stop:0 rgba(7, 85, 75, 255),\n"
"                     stop:1 rgba(10, 100, 75, 255));\n"
"\n"
" }\n"
"\n"
""));
        ME_phasor_GpBox->setCheckable(false);
        gridLayout_15 = new QGridLayout(ME_phasor_GpBox);
        gridLayout_15->setSpacing(0);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 25, 0, 2);
        ME_phasor_Frame = new QFrame(ME_phasor_GpBox);
        ME_phasor_Frame->setObjectName(QString::fromUtf8("ME_phasor_Frame"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(ME_phasor_Frame->sizePolicy().hasHeightForWidth());
        ME_phasor_Frame->setSizePolicy(sizePolicy9);
        ME_phasor_Frame->setMinimumSize(QSize(200, 0));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Kalinga"));
        font5.setPointSize(9);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        ME_phasor_Frame->setFont(font5);
        ME_phasor_Frame->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 9pt \"Kalinga\";"));
        ME_phasor_Frame->setFrameShape(QFrame::StyledPanel);
        ME_phasor_Frame->setFrameShadow(QFrame::Raised);

        gridLayout_15->addWidget(ME_phasor_Frame, 0, 0, 1, 1);


        gridLayout_16->addWidget(ME_phasor_GpBox, 0, 2, 1, 1);

        ES_standard_TblWidget = new QTableWidget(test_power_Page);
        if (ES_standard_TblWidget->columnCount() < 8)
            ES_standard_TblWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ES_standard_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ES_standard_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ES_standard_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ES_standard_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ES_standard_TblWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ES_standard_TblWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ES_standard_TblWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ES_standard_TblWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (ES_standard_TblWidget->rowCount() < 4)
            ES_standard_TblWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ES_standard_TblWidget->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ES_standard_TblWidget->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        ES_standard_TblWidget->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        ES_standard_TblWidget->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QBrush brush(QColor(255, 255, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QFont font6;
        font6.setBold(false);
        font6.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem12->setFont(font6);
        __qtablewidgetitem12->setForeground(brush);
        __qtablewidgetitem12->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(0, 0, __qtablewidgetitem12);
        QBrush brush1(QColor(255, 255, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem13->setFont(font6);
        __qtablewidgetitem13->setForeground(brush1);
        __qtablewidgetitem13->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(0, 1, __qtablewidgetitem13);
        QBrush brush2(QColor(255, 255, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem14->setForeground(brush2);
        __qtablewidgetitem14->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(0, 2, __qtablewidgetitem14);
        QBrush brush3(QColor(255, 255, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem15->setForeground(brush3);
        __qtablewidgetitem15->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(0, 3, __qtablewidgetitem15);
        QBrush brush4(QColor(255, 255, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem16->setForeground(brush4);
        ES_standard_TblWidget->setItem(0, 4, __qtablewidgetitem16);
        QBrush brush5(QColor(255, 255, 0, 255));
        brush5.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem17->setForeground(brush5);
        ES_standard_TblWidget->setItem(0, 5, __qtablewidgetitem17);
        QBrush brush6(QColor(255, 255, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem18->setForeground(brush6);
        ES_standard_TblWidget->setItem(0, 6, __qtablewidgetitem18);
        QBrush brush7(QColor(255, 255, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        QBrush brush8(QColor(255, 247, 126, 255));
        brush8.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem19->setBackground(brush8);
        __qtablewidgetitem19->setForeground(brush7);
        ES_standard_TblWidget->setItem(0, 7, __qtablewidgetitem19);
        QBrush brush9(QColor(0, 255, 0, 255));
        brush9.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem20->setForeground(brush9);
        __qtablewidgetitem20->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(1, 0, __qtablewidgetitem20);
        QBrush brush10(QColor(0, 255, 0, 255));
        brush10.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem21->setForeground(brush10);
        __qtablewidgetitem21->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(1, 1, __qtablewidgetitem21);
        QBrush brush11(QColor(0, 255, 0, 255));
        brush11.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem22->setForeground(brush11);
        __qtablewidgetitem22->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(1, 2, __qtablewidgetitem22);
        QBrush brush12(QColor(0, 255, 0, 255));
        brush12.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem23->setForeground(brush12);
        __qtablewidgetitem23->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(1, 3, __qtablewidgetitem23);
        QBrush brush13(QColor(0, 255, 0, 255));
        brush13.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem24->setForeground(brush13);
        ES_standard_TblWidget->setItem(1, 4, __qtablewidgetitem24);
        QBrush brush14(QColor(0, 255, 0, 255));
        brush14.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem25->setForeground(brush14);
        ES_standard_TblWidget->setItem(1, 5, __qtablewidgetitem25);
        QBrush brush15(QColor(0, 255, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem26->setForeground(brush15);
        ES_standard_TblWidget->setItem(1, 6, __qtablewidgetitem26);
        QBrush brush16(QColor(0, 255, 0, 255));
        brush16.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem27->setForeground(brush16);
        ES_standard_TblWidget->setItem(1, 7, __qtablewidgetitem27);
        QBrush brush17(QColor(250, 0, 0, 255));
        brush17.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem28->setForeground(brush17);
        __qtablewidgetitem28->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(2, 0, __qtablewidgetitem28);
        QBrush brush18(QColor(250, 0, 0, 255));
        brush18.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem29->setForeground(brush18);
        __qtablewidgetitem29->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(2, 1, __qtablewidgetitem29);
        QBrush brush19(QColor(250, 0, 0, 255));
        brush19.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem30->setForeground(brush19);
        __qtablewidgetitem30->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(2, 2, __qtablewidgetitem30);
        QBrush brush20(QColor(250, 0, 0, 255));
        brush20.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem31->setForeground(brush20);
        __qtablewidgetitem31->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(2, 3, __qtablewidgetitem31);
        QBrush brush21(QColor(250, 0, 0, 255));
        brush21.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem32->setForeground(brush21);
        __qtablewidgetitem32->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(2, 4, __qtablewidgetitem32);
        QBrush brush22(QColor(250, 0, 0, 255));
        brush22.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem33->setForeground(brush22);
        __qtablewidgetitem33->setFlags(Qt::NoItemFlags);
        ES_standard_TblWidget->setItem(2, 5, __qtablewidgetitem33);
        QBrush brush23(QColor(250, 0, 0, 255));
        brush23.setStyle(Qt::NoBrush);
        QBrush brush24(QColor(250, 0, 0, 255));
        brush24.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem34->setBackground(brush24);
        __qtablewidgetitem34->setForeground(brush23);
        ES_standard_TblWidget->setItem(2, 6, __qtablewidgetitem34);
        QBrush brush25(QColor(250, 0, 0, 255));
        brush25.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem35->setForeground(brush25);
        ES_standard_TblWidget->setItem(2, 7, __qtablewidgetitem35);
        QBrush brush26(QColor(0, 170, 255, 255));
        brush26.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem36->setForeground(brush26);
        ES_standard_TblWidget->setItem(3, 0, __qtablewidgetitem36);
        QBrush brush27(QColor(0, 170, 255, 255));
        brush27.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem37->setForeground(brush27);
        ES_standard_TblWidget->setItem(3, 1, __qtablewidgetitem37);
        QBrush brush28(QColor(0, 170, 255, 255));
        brush28.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem38->setForeground(brush28);
        ES_standard_TblWidget->setItem(3, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem39->setForeground(brush26);
        ES_standard_TblWidget->setItem(3, 3, __qtablewidgetitem39);
        QBrush brush29(QColor(0, 170, 255, 255));
        brush29.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem40->setForeground(brush29);
        ES_standard_TblWidget->setItem(3, 4, __qtablewidgetitem40);
        QBrush brush30(QColor(0, 170, 255, 255));
        brush30.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem41->setForeground(brush30);
        ES_standard_TblWidget->setItem(3, 5, __qtablewidgetitem41);
        ES_standard_TblWidget->setObjectName(QString::fromUtf8("ES_standard_TblWidget"));
        sizePolicy.setHeightForWidth(ES_standard_TblWidget->sizePolicy().hasHeightForWidth());
        ES_standard_TblWidget->setSizePolicy(sizePolicy);
        ES_standard_TblWidget->setMinimumSize(QSize(0, 162));
        ES_standard_TblWidget->setMaximumSize(QSize(16777215, 164));
        ES_standard_TblWidget->setFont(font5);
        ES_standard_TblWidget->setStyleSheet(QString::fromUtf8("gridline-color: rgb(18, 220, 200);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 9pt \"Kalinga\";\n"
""));
        ES_standard_TblWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ES_standard_TblWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        ES_standard_TblWidget->horizontalHeader()->setVisible(false);
        ES_standard_TblWidget->horizontalHeader()->setDefaultSectionSize(90);
        ES_standard_TblWidget->horizontalHeader()->setHighlightSections(true);
        ES_standard_TblWidget->horizontalHeader()->setMinimumSectionSize(20);
        ES_standard_TblWidget->verticalHeader()->setVisible(false);
        ES_standard_TblWidget->verticalHeader()->setDefaultSectionSize(40);

        gridLayout_16->addWidget(ES_standard_TblWidget, 1, 0, 1, 3);

        ME_energy_GpBox = new QGroupBox(test_power_Page);
        ME_energy_GpBox->setObjectName(QString::fromUtf8("ME_energy_GpBox"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(1);
        sizePolicy10.setHeightForWidth(ME_energy_GpBox->sizePolicy().hasHeightForWidth());
        ME_energy_GpBox->setSizePolicy(sizePolicy10);
        ME_energy_GpBox->setMinimumSize(QSize(356, 90));
        ME_energy_GpBox->setMaximumSize(QSize(202, 116));
        ME_energy_GpBox->setFont(font);
        ME_energy_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"    \n"
"     padding: 0 3px;\n"
"	 color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
" QGroupBox {\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    border-radius: 5px;\n"
"    margin-top: 0ex; /* leave space at the top for the title */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                     stop:0 rgba(7, 85, 75, 255),\n"
"                     stop:1 rgba(10, 100, 75, 255));\n"
" }\n"
""));
        gridLayout_22 = new QGridLayout(ME_energy_GpBox);
        gridLayout_22->setSpacing(5);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        gridLayout_22->setContentsMargins(2, 19, 2, 2);
        ME_energy_std_Label = new QLabel(ME_energy_GpBox);
        ME_energy_std_Label->setObjectName(QString::fromUtf8("ME_energy_std_Label"));
        ME_energy_std_Label->setFont(font);
        ME_energy_std_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_22->addWidget(ME_energy_std_Label, 0, 0, 1, 1);

        ME_energy_std_LnEdit = new QLineEdit(ME_energy_GpBox);
        ME_energy_std_LnEdit->setObjectName(QString::fromUtf8("ME_energy_std_LnEdit"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Arial Narrow"));
        font7.setPointSize(10);
        ME_energy_std_LnEdit->setFont(font7);

        gridLayout_22->addWidget(ME_energy_std_LnEdit, 0, 1, 1, 1);

        lineEdit_6 = new QLineEdit(ME_energy_GpBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setFont(font7);

        gridLayout_22->addWidget(lineEdit_6, 0, 4, 1, 1);

        RSMV_energy_pul_Label_5 = new QLabel(ME_energy_GpBox);
        RSMV_energy_pul_Label_5->setObjectName(QString::fromUtf8("RSMV_energy_pul_Label_5"));
        RSMV_energy_pul_Label_5->setFont(font);
        RSMV_energy_pul_Label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_22->addWidget(RSMV_energy_pul_Label_5, 0, 2, 1, 1);

        RSMV_clearEnergy_PsBtn = new QPushButton(ME_energy_GpBox);
        RSMV_clearEnergy_PsBtn->setObjectName(QString::fromUtf8("RSMV_clearEnergy_PsBtn"));
        RSMV_clearEnergy_PsBtn->setFont(font);

        gridLayout_22->addWidget(RSMV_clearEnergy_PsBtn, 1, 4, 1, 1);

        ME_energy_object_Label = new QLabel(ME_energy_GpBox);
        ME_energy_object_Label->setObjectName(QString::fromUtf8("ME_energy_object_Label"));
        ME_energy_object_Label->setFont(font);
        ME_energy_object_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_22->addWidget(ME_energy_object_Label, 1, 0, 1, 1);

        ME_energy_object_LnEdit = new QLineEdit(ME_energy_GpBox);
        ME_energy_object_LnEdit->setObjectName(QString::fromUtf8("ME_energy_object_LnEdit"));
        ME_energy_object_LnEdit->setFont(font7);

        gridLayout_22->addWidget(ME_energy_object_LnEdit, 1, 1, 1, 1);


        gridLayout_16->addWidget(ME_energy_GpBox, 2, 0, 1, 1);

        ES_value_GpBox = new QGroupBox(test_power_Page);
        ES_value_GpBox->setObjectName(QString::fromUtf8("ES_value_GpBox"));
        sizePolicy3.setHeightForWidth(ES_value_GpBox->sizePolicy().hasHeightForWidth());
        ES_value_GpBox->setSizePolicy(sizePolicy3);
        ES_value_GpBox->setMinimumSize(QSize(0, 75));
        ES_value_GpBox->setMaximumSize(QSize(16777215, 160));
        ES_value_GpBox->setFont(font);
        ES_value_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"\n"
"     padding: 0 3px;\n"
"	 color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
" QGroupBox {\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    border-radius: 5px;\n"
"    margin-top: 0ex; /* leave space at the top for the title */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                     stop:0 rgba(7, 85, 75, 255),\n"
"                     stop:1 rgba(10, 100, 75, 255));\n"
" }\n"
""));
        ES_value_GpBox->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        gridLayout_23 = new QGridLayout(ES_value_GpBox);
        gridLayout_23->setSpacing(5);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(0, 20, 2, 2);
        ES_TE_Label = new QLabel(ES_value_GpBox);
        ES_TE_Label->setObjectName(QString::fromUtf8("ES_TE_Label"));
        ES_TE_Label->setFont(font);
        ES_TE_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_23->addWidget(ES_TE_Label, 0, 3, 1, 1);

        serPort_EVT_PsBtn = new QPushButton(ES_value_GpBox);
        serPort_EVT_PsBtn->setObjectName(QString::fromUtf8("serPort_EVT_PsBtn"));
        serPort_EVT_PsBtn->setFont(font1);

        gridLayout_23->addWidget(serPort_EVT_PsBtn, 1, 4, 1, 1);

        ES_insertForm_PsBtn = new QPushButton(ES_value_GpBox);
        ES_insertForm_PsBtn->setObjectName(QString::fromUtf8("ES_insertForm_PsBtn"));
        ES_insertForm_PsBtn->setFont(font1);

        gridLayout_23->addWidget(ES_insertForm_PsBtn, 1, 3, 1, 1);

        ES_TE_LnEdit = new QLineEdit(ES_value_GpBox);
        ES_TE_LnEdit->setObjectName(QString::fromUtf8("ES_TE_LnEdit"));
        ES_TE_LnEdit->setFont(font7);

        gridLayout_23->addWidget(ES_TE_LnEdit, 0, 4, 1, 1);

        ES_PE_Label = new QLabel(ES_value_GpBox);
        ES_PE_Label->setObjectName(QString::fromUtf8("ES_PE_Label"));
        ES_PE_Label->setFont(font);
        ES_PE_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_23->addWidget(ES_PE_Label, 0, 1, 1, 1);

        ES_PE_LnEdit = new QLineEdit(ES_value_GpBox);
        ES_PE_LnEdit->setObjectName(QString::fromUtf8("ES_PE_LnEdit"));
        ES_PE_LnEdit->setFont(font7);

        gridLayout_23->addWidget(ES_PE_LnEdit, 0, 2, 1, 1);


        gridLayout_16->addWidget(ES_value_GpBox, 2, 1, 1, 2);

        main_SkWidget->addWidget(test_power_Page);
        test_ripple_Page = new QWidget();
        test_ripple_Page->setObjectName(QString::fromUtf8("test_ripple_Page"));
        gridLayout_3 = new QGridLayout(test_ripple_Page);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        RSMV_Harmonic_QwtPlot = new QwtPlot(test_ripple_Page);
        RSMV_Harmonic_QwtPlot->setObjectName(QString::fromUtf8("RSMV_Harmonic_QwtPlot"));
        RSMV_Harmonic_QwtPlot->setMinimumSize(QSize(0, 232));
        RSMV_Harmonic_QwtPlot->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 255);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(RSMV_Harmonic_QwtPlot, 0, 0, 1, 2);

        RSMV_harmonic_Frame = new QFrame(test_ripple_Page);
        RSMV_harmonic_Frame->setObjectName(QString::fromUtf8("RSMV_harmonic_Frame"));
        sizePolicy3.setHeightForWidth(RSMV_harmonic_Frame->sizePolicy().hasHeightForWidth());
        RSMV_harmonic_Frame->setSizePolicy(sizePolicy3);
        RSMV_harmonic_Frame->setMinimumSize(QSize(0, 45));
        RSMV_harmonic_Frame->setMaximumSize(QSize(16777215, 48));
        RSMV_harmonic_Frame->setStyleSheet(QString::fromUtf8("#RSMV_harmonic_Frame{\n"
" border: 1px solid rgb(18, 220, 200);\n"
"    background: qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(7, 85, 75, 255),\n"
"        stop:1 rgba(18, 220, 200, 255));\n"
"}"));
        RSMV_harmonic_Frame->setFrameShape(QFrame::StyledPanel);
        RSMV_harmonic_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(RSMV_harmonic_Frame);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        RSMV_Harmonic_Phase_Label = new QLabel(RSMV_harmonic_Frame);
        RSMV_Harmonic_Phase_Label->setObjectName(QString::fromUtf8("RSMV_Harmonic_Phase_Label"));
        RSMV_Harmonic_Phase_Label->setFont(font3);
        RSMV_Harmonic_Phase_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(RSMV_Harmonic_Phase_Label, 0, 0, 1, 1);

        RSMV_Harmonic_Phase_CbBox = new QComboBox(RSMV_harmonic_Frame);
        RSMV_Harmonic_Phase_CbBox->setObjectName(QString::fromUtf8("RSMV_Harmonic_Phase_CbBox"));
        RSMV_Harmonic_Phase_CbBox->setMinimumSize(QSize(60, 30));
        RSMV_Harmonic_Phase_CbBox->setFont(font3);
        RSMV_Harmonic_Phase_CbBox->setStyleSheet(QString::fromUtf8("\n"
"QScrollBar:vertical\n"
"{\n"
"	width:26px;\n"
"	background:rgba(0,0,0,10%);\n"
"    border-radius:4px;\n"
"}\n"
""));

        gridLayout_10->addWidget(RSMV_Harmonic_Phase_CbBox, 0, 1, 1, 1);

        RSMV_Harmonic_Times_Label = new QLabel(RSMV_harmonic_Frame);
        RSMV_Harmonic_Times_Label->setObjectName(QString::fromUtf8("RSMV_Harmonic_Times_Label"));
        RSMV_Harmonic_Times_Label->setFont(font3);
        RSMV_Harmonic_Times_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(RSMV_Harmonic_Times_Label, 0, 3, 1, 1);

        RSMV_Harmonic_Times_CbBox = new QComboBox(RSMV_harmonic_Frame);
        RSMV_Harmonic_Times_CbBox->setObjectName(QString::fromUtf8("RSMV_Harmonic_Times_CbBox"));
        QSizePolicy sizePolicy11(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(RSMV_Harmonic_Times_CbBox->sizePolicy().hasHeightForWidth());
        RSMV_Harmonic_Times_CbBox->setSizePolicy(sizePolicy11);
        RSMV_Harmonic_Times_CbBox->setMinimumSize(QSize(60, 30));
        RSMV_Harmonic_Times_CbBox->setFont(font3);
        RSMV_Harmonic_Times_CbBox->setStyleSheet(QString::fromUtf8("\n"
"QScrollBar:vertical\n"
"{\n"
"	width:26px;\n"
"	background:rgba(0,0,0,10%);\n"
"    border-radius:4px;\n"
"}\n"
""));

        gridLayout_10->addWidget(RSMV_Harmonic_Times_CbBox, 0, 4, 1, 1);

        RSMV_Harmonic_Range_Label = new QLabel(RSMV_harmonic_Frame);
        RSMV_Harmonic_Range_Label->setObjectName(QString::fromUtf8("RSMV_Harmonic_Range_Label"));
        RSMV_Harmonic_Range_Label->setFont(font3);
        RSMV_Harmonic_Range_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(RSMV_Harmonic_Range_Label, 0, 7, 1, 1);

        RSMV_Harmonic_Range_HSlider = new QSlider(RSMV_harmonic_Frame);
        RSMV_Harmonic_Range_HSlider->setObjectName(QString::fromUtf8("RSMV_Harmonic_Range_HSlider"));
        RSMV_Harmonic_Range_HSlider->setMinimumSize(QSize(0, 30));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Kalinga"));
        font8.setPointSize(9);
        RSMV_Harmonic_Range_HSlider->setFont(font8);
        RSMV_Harmonic_Range_HSlider->setMaximum(100);
        RSMV_Harmonic_Range_HSlider->setSingleStep(0);
        RSMV_Harmonic_Range_HSlider->setValue(1);
        RSMV_Harmonic_Range_HSlider->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(RSMV_Harmonic_Range_HSlider, 0, 8, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_4, 0, 6, 1, 1);

        RSMV_Harmonic_LnEdit_Range = new QLineEdit(RSMV_harmonic_Frame);
        RSMV_Harmonic_LnEdit_Range->setObjectName(QString::fromUtf8("RSMV_Harmonic_LnEdit_Range"));
        QSizePolicy sizePolicy12(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(RSMV_Harmonic_LnEdit_Range->sizePolicy().hasHeightForWidth());
        RSMV_Harmonic_LnEdit_Range->setSizePolicy(sizePolicy12);
        RSMV_Harmonic_LnEdit_Range->setMinimumSize(QSize(0, 30));
        RSMV_Harmonic_LnEdit_Range->setMaximumSize(QSize(100, 16777215));
        RSMV_Harmonic_LnEdit_Range->setFont(font3);
        RSMV_Harmonic_LnEdit_Range->setStyleSheet(QString::fromUtf8(""));
        RSMV_Harmonic_LnEdit_Range->setReadOnly(true);

        gridLayout_10->addWidget(RSMV_Harmonic_LnEdit_Range, 0, 10, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_11, 0, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_12, 0, 9, 1, 1);


        gridLayout_3->addWidget(RSMV_harmonic_Frame, 1, 0, 1, 2);

        RSMV_harmonic_rms_TblWidget = new QTableWidget(test_ripple_Page);
        if (RSMV_harmonic_rms_TblWidget->columnCount() < 4)
            RSMV_harmonic_rms_TblWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        RSMV_harmonic_rms_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        RSMV_harmonic_rms_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        RSMV_harmonic_rms_TblWidget->setHorizontalHeaderItem(2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        RSMV_harmonic_rms_TblWidget->setHorizontalHeaderItem(3, __qtablewidgetitem45);
        if (RSMV_harmonic_rms_TblWidget->rowCount() < 4)
            RSMV_harmonic_rms_TblWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        RSMV_harmonic_rms_TblWidget->setVerticalHeaderItem(0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        RSMV_harmonic_rms_TblWidget->setVerticalHeaderItem(1, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        RSMV_harmonic_rms_TblWidget->setVerticalHeaderItem(2, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        RSMV_harmonic_rms_TblWidget->setVerticalHeaderItem(3, __qtablewidgetitem49);
        QBrush brush31(QColor(255, 255, 0, 255));
        brush31.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem50->setFont(font6);
        __qtablewidgetitem50->setForeground(brush31);
        __qtablewidgetitem50->setFlags(Qt::NoItemFlags);
        RSMV_harmonic_rms_TblWidget->setItem(0, 0, __qtablewidgetitem50);
        QBrush brush32(QColor(255, 255, 0, 255));
        brush32.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem51->setFont(font6);
        __qtablewidgetitem51->setForeground(brush32);
        __qtablewidgetitem51->setFlags(Qt::NoItemFlags);
        RSMV_harmonic_rms_TblWidget->setItem(0, 1, __qtablewidgetitem51);
        QBrush brush33(QColor(255, 255, 0, 255));
        brush33.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem52->setForeground(brush33);
        RSMV_harmonic_rms_TblWidget->setItem(0, 2, __qtablewidgetitem52);
        QBrush brush34(QColor(255, 255, 0, 255));
        brush34.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem53->setForeground(brush34);
        RSMV_harmonic_rms_TblWidget->setItem(0, 3, __qtablewidgetitem53);
        QBrush brush35(QColor(0, 255, 0, 255));
        brush35.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem54->setForeground(brush35);
        __qtablewidgetitem54->setFlags(Qt::NoItemFlags);
        RSMV_harmonic_rms_TblWidget->setItem(1, 0, __qtablewidgetitem54);
        QBrush brush36(QColor(0, 255, 0, 255));
        brush36.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem55->setForeground(brush36);
        __qtablewidgetitem55->setFlags(Qt::NoItemFlags);
        RSMV_harmonic_rms_TblWidget->setItem(1, 1, __qtablewidgetitem55);
        QBrush brush37(QColor(0, 255, 0, 255));
        brush37.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        __qtablewidgetitem56->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem56->setForeground(brush37);
        RSMV_harmonic_rms_TblWidget->setItem(1, 2, __qtablewidgetitem56);
        QBrush brush38(QColor(0, 255, 0, 255));
        brush38.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        __qtablewidgetitem57->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem57->setForeground(brush38);
        RSMV_harmonic_rms_TblWidget->setItem(1, 3, __qtablewidgetitem57);
        QBrush brush39(QColor(250, 0, 0, 255));
        brush39.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        __qtablewidgetitem58->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem58->setForeground(brush39);
        __qtablewidgetitem58->setFlags(Qt::NoItemFlags);
        RSMV_harmonic_rms_TblWidget->setItem(2, 0, __qtablewidgetitem58);
        QBrush brush40(QColor(250, 0, 0, 255));
        brush40.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        __qtablewidgetitem59->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem59->setForeground(brush40);
        __qtablewidgetitem59->setFlags(Qt::NoItemFlags);
        RSMV_harmonic_rms_TblWidget->setItem(2, 1, __qtablewidgetitem59);
        QBrush brush41(QColor(250, 0, 0, 255));
        brush41.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem60->setForeground(brush41);
        __qtablewidgetitem60->setFlags(Qt::NoItemFlags);
        RSMV_harmonic_rms_TblWidget->setItem(2, 2, __qtablewidgetitem60);
        QBrush brush42(QColor(250, 0, 0, 255));
        brush42.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        __qtablewidgetitem61->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem61->setForeground(brush42);
        __qtablewidgetitem61->setFlags(Qt::NoItemFlags);
        RSMV_harmonic_rms_TblWidget->setItem(2, 3, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        __qtablewidgetitem62->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem62->setForeground(brush26);
        __qtablewidgetitem62->setFlags(Qt::NoItemFlags);
        RSMV_harmonic_rms_TblWidget->setItem(3, 0, __qtablewidgetitem62);
        QBrush brush43(QColor(0, 170, 255, 255));
        brush43.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem63->setForeground(brush43);
        RSMV_harmonic_rms_TblWidget->setItem(3, 1, __qtablewidgetitem63);
        QBrush brush44(QColor(0, 170, 255, 255));
        brush44.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem64->setForeground(brush44);
        RSMV_harmonic_rms_TblWidget->setItem(3, 2, __qtablewidgetitem64);
        QBrush brush45(QColor(0, 170, 255, 255));
        brush45.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem65->setForeground(brush45);
        RSMV_harmonic_rms_TblWidget->setItem(3, 3, __qtablewidgetitem65);
        RSMV_harmonic_rms_TblWidget->setObjectName(QString::fromUtf8("RSMV_harmonic_rms_TblWidget"));
        sizePolicy3.setHeightForWidth(RSMV_harmonic_rms_TblWidget->sizePolicy().hasHeightForWidth());
        RSMV_harmonic_rms_TblWidget->setSizePolicy(sizePolicy3);
        RSMV_harmonic_rms_TblWidget->setMinimumSize(QSize(455, 0));
        RSMV_harmonic_rms_TblWidget->setStyleSheet(QString::fromUtf8("gridline-color: rgb(18, 220, 200);\n"
"background-color: rgb(0, 0, 0);\n"
""));
        RSMV_harmonic_rms_TblWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        RSMV_harmonic_rms_TblWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        RSMV_harmonic_rms_TblWidget->horizontalHeader()->setVisible(false);
        RSMV_harmonic_rms_TblWidget->horizontalHeader()->setDefaultSectionSize(112);
        RSMV_harmonic_rms_TblWidget->horizontalHeader()->setHighlightSections(true);
        RSMV_harmonic_rms_TblWidget->verticalHeader()->setVisible(false);
        RSMV_harmonic_rms_TblWidget->verticalHeader()->setDefaultSectionSize(57);

        gridLayout_3->addWidget(RSMV_harmonic_rms_TblWidget, 2, 0, 1, 1);

        RSMV_Harmonic_TblWidget = new QTableWidget(test_ripple_Page);
        if (RSMV_Harmonic_TblWidget->columnCount() < 2)
            RSMV_Harmonic_TblWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        RSMV_Harmonic_TblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        RSMV_Harmonic_TblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem67);
        if (RSMV_Harmonic_TblWidget->rowCount() < 3)
            RSMV_Harmonic_TblWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        RSMV_Harmonic_TblWidget->setVerticalHeaderItem(0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        RSMV_Harmonic_TblWidget->setVerticalHeaderItem(1, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        RSMV_Harmonic_TblWidget->setVerticalHeaderItem(2, __qtablewidgetitem70);
        RSMV_Harmonic_TblWidget->setObjectName(QString::fromUtf8("RSMV_Harmonic_TblWidget"));
        RSMV_Harmonic_TblWidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 255);\n"
"gridline-color: rgb(18, 220, 200);\n"
"background-color: rgb(0, 0, 0);\n"
""));
        RSMV_Harmonic_TblWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        RSMV_Harmonic_TblWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        RSMV_Harmonic_TblWidget->setSelectionMode(QAbstractItemView::NoSelection);
        RSMV_Harmonic_TblWidget->horizontalHeader()->setVisible(false);
        RSMV_Harmonic_TblWidget->horizontalHeader()->setDefaultSectionSize(126);
        RSMV_Harmonic_TblWidget->horizontalHeader()->setHighlightSections(true);
        RSMV_Harmonic_TblWidget->verticalHeader()->setVisible(false);
        RSMV_Harmonic_TblWidget->verticalHeader()->setDefaultSectionSize(30);

        gridLayout_3->addWidget(RSMV_Harmonic_TblWidget, 2, 1, 1, 1);

        main_SkWidget->addWidget(test_ripple_Page);
        from_Page = new QWidget();
        from_Page->setObjectName(QString::fromUtf8("from_Page"));
        gridLayout_26 = new QGridLayout(from_Page);
        gridLayout_26->setSpacing(0);
        gridLayout_26->setContentsMargins(0, 0, 0, 0);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        from_information_Frame = new QFrame(from_Page);
        from_information_Frame->setObjectName(QString::fromUtf8("from_information_Frame"));
        sizePolicy3.setHeightForWidth(from_information_Frame->sizePolicy().hasHeightForWidth());
        from_information_Frame->setSizePolicy(sizePolicy3);
        from_information_Frame->setMinimumSize(QSize(0, 30));
        from_information_Frame->setMaximumSize(QSize(16777215, 30));
        from_information_Frame->setFont(font3);
        from_information_Frame->setStyleSheet(QString::fromUtf8("#from_information_Frame\n"
"{\n"
" border: 1px solid rgb(18, 220, 200);\n"
"    background: qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(7, 85, 75, 255),\n"
"        stop:1 rgba(18, 220, 200, 255));\n"
"}\n"
"\n"
"\n"
"\n"
""));
        from_information_Frame->setFrameShape(QFrame::StyledPanel);
        from_information_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_21 = new QGridLayout(from_information_Frame);
        gridLayout_21->setSpacing(0);
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        from_information_Label = new QLabel(from_information_Frame);
        from_information_Label->setObjectName(QString::fromUtf8("from_information_Label"));
        from_information_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_21->addWidget(from_information_Label, 0, 0, 1, 1);

        from_information_HlSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(from_information_HlSpacer, 0, 1, 1, 1);


        gridLayout_26->addWidget(from_information_Frame, 2, 0, 1, 1);

        from_ctl_GpBox = new QGroupBox(from_Page);
        from_ctl_GpBox->setObjectName(QString::fromUtf8("from_ctl_GpBox"));
        sizePolicy10.setHeightForWidth(from_ctl_GpBox->sizePolicy().hasHeightForWidth());
        from_ctl_GpBox->setSizePolicy(sizePolicy10);
        from_ctl_GpBox->setMinimumSize(QSize(0, 87));
        from_ctl_GpBox->setMaximumSize(QSize(1000, 106));
        from_ctl_GpBox->setFont(font);
        from_ctl_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"    \n"
"     padding: 0 3px;\n"
"	 color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
" QGroupBox {\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    border-radius: 5px;\n"
"    margin-top: 0ex; /* leave space at the top for the title */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                     stop:0 rgba(7, 85, 75, 255),\n"
"                     stop:1 rgba(10, 100, 75, 255));\n"
" }\n"
""));
        gridLayout_24 = new QGridLayout(from_ctl_GpBox);
        gridLayout_24->setSpacing(5);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        gridLayout_24->setContentsMargins(2, 19, 2, 2);
        RSMV_clearFrom_PsBtn = new QPushButton(from_ctl_GpBox);
        RSMV_clearFrom_PsBtn->setObjectName(QString::fromUtf8("RSMV_clearFrom_PsBtn"));

        gridLayout_24->addWidget(RSMV_clearFrom_PsBtn, 0, 2, 1, 1);

        RSMV_readFrom_PsBtn = new QPushButton(from_ctl_GpBox);
        RSMV_readFrom_PsBtn->setObjectName(QString::fromUtf8("RSMV_readFrom_PsBtn"));

        gridLayout_24->addWidget(RSMV_readFrom_PsBtn, 0, 1, 1, 1);

        RSMV_buildFrom_PsBtn = new QPushButton(from_ctl_GpBox);
        RSMV_buildFrom_PsBtn->setObjectName(QString::fromUtf8("RSMV_buildFrom_PsBtn"));

        gridLayout_24->addWidget(RSMV_buildFrom_PsBtn, 0, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer_15, 0, 4, 1, 1);

        RSMV_saveFormMsg_PsBtn = new QPushButton(from_ctl_GpBox);
        RSMV_saveFormMsg_PsBtn->setObjectName(QString::fromUtf8("RSMV_saveFormMsg_PsBtn"));

        gridLayout_24->addWidget(RSMV_saveFormMsg_PsBtn, 0, 3, 1, 1);


        gridLayout_26->addWidget(from_ctl_GpBox, 4, 0, 1, 1);

        from_error_Frame = new QFrame(from_Page);
        from_error_Frame->setObjectName(QString::fromUtf8("from_error_Frame"));
        sizePolicy3.setHeightForWidth(from_error_Frame->sizePolicy().hasHeightForWidth());
        from_error_Frame->setSizePolicy(sizePolicy3);
        from_error_Frame->setMinimumSize(QSize(0, 30));
        from_error_Frame->setMaximumSize(QSize(16777215, 30));
        from_error_Frame->setFont(font3);
        from_error_Frame->setStyleSheet(QString::fromUtf8("#from_error_Frame\n"
"{\n"
" border: 1px solid rgb(18, 220, 200);\n"
"    background: qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(7, 85, 75, 255),\n"
"        stop:1 rgba(18, 220, 200, 255));\n"
"}\n"
"\n"
"\n"
"\n"
""));
        from_error_Frame->setFrameShape(QFrame::StyledPanel);
        from_error_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_25 = new QGridLayout(from_error_Frame);
        gridLayout_25->setSpacing(0);
        gridLayout_25->setContentsMargins(0, 0, 0, 0);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        from_error_Label = new QLabel(from_error_Frame);
        from_error_Label->setObjectName(QString::fromUtf8("from_error_Label"));
        from_error_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_25->addWidget(from_error_Label, 0, 0, 1, 1);

        from_error_HlSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_25->addItem(from_error_HlSpacer, 0, 1, 1, 1);


        gridLayout_26->addWidget(from_error_Frame, 0, 0, 1, 1);

        from_information_TbWidget = new QTableWidget(from_Page);
        if (from_information_TbWidget->columnCount() < 4)
            from_information_TbWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        from_information_TbWidget->setHorizontalHeaderItem(0, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        from_information_TbWidget->setHorizontalHeaderItem(1, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        from_information_TbWidget->setHorizontalHeaderItem(2, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        from_information_TbWidget->setHorizontalHeaderItem(3, __qtablewidgetitem74);
        if (from_information_TbWidget->rowCount() < 13)
            from_information_TbWidget->setRowCount(13);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(0, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(1, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(2, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(3, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(4, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(5, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(6, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(7, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(8, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(9, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(10, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(11, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        from_information_TbWidget->setVerticalHeaderItem(12, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        from_information_TbWidget->setItem(0, 0, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        from_information_TbWidget->setItem(0, 1, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        from_information_TbWidget->setItem(0, 2, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        from_information_TbWidget->setItem(0, 3, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        from_information_TbWidget->setItem(1, 0, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        from_information_TbWidget->setItem(1, 1, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        from_information_TbWidget->setItem(1, 2, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        from_information_TbWidget->setItem(1, 3, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        from_information_TbWidget->setItem(2, 0, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        from_information_TbWidget->setItem(2, 1, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        from_information_TbWidget->setItem(2, 2, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        from_information_TbWidget->setItem(2, 3, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        from_information_TbWidget->setItem(3, 0, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        from_information_TbWidget->setItem(3, 1, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        from_information_TbWidget->setItem(3, 2, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        from_information_TbWidget->setItem(3, 3, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        from_information_TbWidget->setItem(4, 0, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        from_information_TbWidget->setItem(4, 1, __qtablewidgetitem105);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        from_information_TbWidget->setItem(4, 2, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        from_information_TbWidget->setItem(4, 3, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        from_information_TbWidget->setItem(5, 0, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        from_information_TbWidget->setItem(5, 1, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        from_information_TbWidget->setItem(5, 2, __qtablewidgetitem110);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        from_information_TbWidget->setItem(5, 3, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        from_information_TbWidget->setItem(6, 0, __qtablewidgetitem112);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        from_information_TbWidget->setItem(6, 1, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        from_information_TbWidget->setItem(6, 2, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        from_information_TbWidget->setItem(6, 3, __qtablewidgetitem115);
        QTableWidgetItem *__qtablewidgetitem116 = new QTableWidgetItem();
        from_information_TbWidget->setItem(7, 0, __qtablewidgetitem116);
        QTableWidgetItem *__qtablewidgetitem117 = new QTableWidgetItem();
        from_information_TbWidget->setItem(7, 1, __qtablewidgetitem117);
        QTableWidgetItem *__qtablewidgetitem118 = new QTableWidgetItem();
        from_information_TbWidget->setItem(7, 2, __qtablewidgetitem118);
        QTableWidgetItem *__qtablewidgetitem119 = new QTableWidgetItem();
        from_information_TbWidget->setItem(7, 3, __qtablewidgetitem119);
        QTableWidgetItem *__qtablewidgetitem120 = new QTableWidgetItem();
        from_information_TbWidget->setItem(8, 0, __qtablewidgetitem120);
        QTableWidgetItem *__qtablewidgetitem121 = new QTableWidgetItem();
        from_information_TbWidget->setItem(8, 1, __qtablewidgetitem121);
        QTableWidgetItem *__qtablewidgetitem122 = new QTableWidgetItem();
        from_information_TbWidget->setItem(9, 0, __qtablewidgetitem122);
        QTableWidgetItem *__qtablewidgetitem123 = new QTableWidgetItem();
        from_information_TbWidget->setItem(9, 1, __qtablewidgetitem123);
        QTableWidgetItem *__qtablewidgetitem124 = new QTableWidgetItem();
        from_information_TbWidget->setItem(9, 2, __qtablewidgetitem124);
        QTableWidgetItem *__qtablewidgetitem125 = new QTableWidgetItem();
        from_information_TbWidget->setItem(9, 3, __qtablewidgetitem125);
        QTableWidgetItem *__qtablewidgetitem126 = new QTableWidgetItem();
        from_information_TbWidget->setItem(10, 0, __qtablewidgetitem126);
        QTableWidgetItem *__qtablewidgetitem127 = new QTableWidgetItem();
        from_information_TbWidget->setItem(10, 1, __qtablewidgetitem127);
        QTableWidgetItem *__qtablewidgetitem128 = new QTableWidgetItem();
        from_information_TbWidget->setItem(10, 2, __qtablewidgetitem128);
        QTableWidgetItem *__qtablewidgetitem129 = new QTableWidgetItem();
        from_information_TbWidget->setItem(11, 0, __qtablewidgetitem129);
        QTableWidgetItem *__qtablewidgetitem130 = new QTableWidgetItem();
        from_information_TbWidget->setItem(11, 1, __qtablewidgetitem130);
        QTableWidgetItem *__qtablewidgetitem131 = new QTableWidgetItem();
        from_information_TbWidget->setItem(11, 2, __qtablewidgetitem131);
        QTableWidgetItem *__qtablewidgetitem132 = new QTableWidgetItem();
        from_information_TbWidget->setItem(12, 0, __qtablewidgetitem132);
        QTableWidgetItem *__qtablewidgetitem133 = new QTableWidgetItem();
        __qtablewidgetitem133->setCheckState(Qt::Checked);
        from_information_TbWidget->setItem(12, 1, __qtablewidgetitem133);
        from_information_TbWidget->setObjectName(QString::fromUtf8("from_information_TbWidget"));
        from_information_TbWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        from_information_TbWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        from_information_TbWidget->horizontalHeader()->setVisible(false);
        from_information_TbWidget->horizontalHeader()->setDefaultSectionSize(176);
        from_information_TbWidget->verticalHeader()->setVisible(false);

        gridLayout_26->addWidget(from_information_TbWidget, 3, 0, 1, 1);

        from_error_TxEdit = new QTextEdit(from_Page);
        from_error_TxEdit->setObjectName(QString::fromUtf8("from_error_TxEdit"));
        from_error_TxEdit->setReadOnly(true);

        gridLayout_26->addWidget(from_error_TxEdit, 1, 0, 1, 1);

        main_SkWidget->addWidget(from_Page);
        serPort_Page = new QWidget();
        serPort_Page->setObjectName(QString::fromUtf8("serPort_Page"));
        gridLayout_6 = new QGridLayout(serPort_Page);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        serPort_Rec_GbBox = new QGroupBox(serPort_Page);
        serPort_Rec_GbBox->setObjectName(QString::fromUtf8("serPort_Rec_GbBox"));
        sizePolicy6.setHeightForWidth(serPort_Rec_GbBox->sizePolicy().hasHeightForWidth());
        serPort_Rec_GbBox->setSizePolicy(sizePolicy6);
        serPort_Rec_GbBox->setStyleSheet(QString::fromUtf8(" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
" QGroupBox {\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    border-radius: 5px;\n"
"    margin-top: 0ex; /* leave space at the top for the title */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                     stop:0 rgba(7, 85, 75, 255),\n"
"                     stop:1 rgba(10, 100, 75, 255));\n"
" }\n"
""));
        gridLayout_7 = new QGridLayout(serPort_Rec_GbBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(5, 5, 5, 5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        serPort_Rec_TxEdit = new QTextEdit(serPort_Rec_GbBox);
        serPort_Rec_TxEdit->setObjectName(QString::fromUtf8("serPort_Rec_TxEdit"));
        sizePolicy5.setHeightForWidth(serPort_Rec_TxEdit->sizePolicy().hasHeightForWidth());
        serPort_Rec_TxEdit->setSizePolicy(sizePolicy5);
        serPort_Rec_TxEdit->setReadOnly(true);

        gridLayout_7->addWidget(serPort_Rec_TxEdit, 1, 0, 1, 4);

        serPort_CleanRec_PsBtn = new QPushButton(serPort_Rec_GbBox);
        serPort_CleanRec_PsBtn->setObjectName(QString::fromUtf8("serPort_CleanRec_PsBtn"));

        gridLayout_7->addWidget(serPort_CleanRec_PsBtn, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        label_3 = new QLabel(serPort_Rec_GbBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_7->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_6->addWidget(serPort_Rec_GbBox, 1, 0, 1, 1);

        serPort_send_GpBox = new QGroupBox(serPort_Page);
        serPort_send_GpBox->setObjectName(QString::fromUtf8("serPort_send_GpBox"));
        sizePolicy6.setHeightForWidth(serPort_send_GpBox->sizePolicy().hasHeightForWidth());
        serPort_send_GpBox->setSizePolicy(sizePolicy6);
        serPort_send_GpBox->setMinimumSize(QSize(420, 0));
        serPort_send_GpBox->setMaximumSize(QSize(420, 16777215));
        serPort_send_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
" QGroupBox {\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    border-radius: 5px;\n"
"    margin-top: 0ex; /* leave space at the top for the title */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                     stop:0 rgba(7, 85, 75, 255),\n"
"                     stop:1 rgba(10, 100, 75, 255));\n"
" }\n"
""));
        gridLayout_8 = new QGridLayout(serPort_send_GpBox);
        gridLayout_8->setSpacing(5);
        gridLayout_8->setContentsMargins(5, 5, 5, 5);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        serPort_CleanSend_PsBtn = new QPushButton(serPort_send_GpBox);
        serPort_CleanSend_PsBtn->setObjectName(QString::fromUtf8("serPort_CleanSend_PsBtn"));

        gridLayout_8->addWidget(serPort_CleanSend_PsBtn, 0, 5, 1, 1);

        serPort_LF_CkBox = new QCheckBox(serPort_send_GpBox);
        serPort_LF_CkBox->setObjectName(QString::fromUtf8("serPort_LF_CkBox"));
        serPort_LF_CkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_8->addWidget(serPort_LF_CkBox, 0, 2, 1, 1);

        label_5 = new QLabel(serPort_send_GpBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_8->addWidget(label_5, 0, 0, 1, 1);

        serPort_Send_PsBtn = new QPushButton(serPort_send_GpBox);
        serPort_Send_PsBtn->setObjectName(QString::fromUtf8("serPort_Send_PsBtn"));
        serPort_Send_PsBtn->setEnabled(false);

        gridLayout_8->addWidget(serPort_Send_PsBtn, 0, 4, 1, 1);

        serPort_CR_CkBox = new QCheckBox(serPort_send_GpBox);
        serPort_CR_CkBox->setObjectName(QString::fromUtf8("serPort_CR_CkBox"));
        serPort_CR_CkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_8->addWidget(serPort_CR_CkBox, 0, 1, 1, 1);

        serPort_Send_TxEdit = new QTextEdit(serPort_send_GpBox);
        serPort_Send_TxEdit->setObjectName(QString::fromUtf8("serPort_Send_TxEdit"));
        sizePolicy3.setHeightForWidth(serPort_Send_TxEdit->sizePolicy().hasHeightForWidth());
        serPort_Send_TxEdit->setSizePolicy(sizePolicy3);
        serPort_Send_TxEdit->setMinimumSize(QSize(0, 60));
        serPort_Send_TxEdit->setMaximumSize(QSize(16777215, 60));
        serPort_Send_TxEdit->setReadOnly(false);

        gridLayout_8->addWidget(serPort_Send_TxEdit, 1, 0, 2, 6);

        serPort_shortcut_GpBox = new QGroupBox(serPort_send_GpBox);
        serPort_shortcut_GpBox->setObjectName(QString::fromUtf8("serPort_shortcut_GpBox"));
        QSizePolicy sizePolicy13(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(serPort_shortcut_GpBox->sizePolicy().hasHeightForWidth());
        serPort_shortcut_GpBox->setSizePolicy(sizePolicy13);
        serPort_shortcut_GpBox->setMinimumSize(QSize(0, 90));
        serPort_shortcut_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
" QGroupBox {\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    border-radius: 5px;\n"
"    margin-top: 0ex; /* leave space at the top for the title */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                     stop:0 rgba(7, 85, 75, 255),\n"
"                     stop:1 rgba(10, 100, 75, 255));\n"
" }\n"
""));
        gridLayout_4 = new QGridLayout(serPort_shortcut_GpBox);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 18, 0, 0);
        serPort_RP_PsBtn = new QPushButton(serPort_shortcut_GpBox);
        serPort_RP_PsBtn->setObjectName(QString::fromUtf8("serPort_RP_PsBtn"));

        gridLayout_4->addWidget(serPort_RP_PsBtn, 1, 2, 1, 1);

        serPort_ME_PsBtn = new QPushButton(serPort_shortcut_GpBox);
        serPort_ME_PsBtn->setObjectName(QString::fromUtf8("serPort_ME_PsBtn"));

        gridLayout_4->addWidget(serPort_ME_PsBtn, 2, 1, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_17, 1, 5, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_16, 1, 0, 1, 1);

        serPort_RS_PsBtn = new QPushButton(serPort_shortcut_GpBox);
        serPort_RS_PsBtn->setObjectName(QString::fromUtf8("serPort_RS_PsBtn"));

        gridLayout_4->addWidget(serPort_RS_PsBtn, 2, 2, 1, 1);

        serPort_RSM_PsBtn = new QPushButton(serPort_shortcut_GpBox);
        serPort_RSM_PsBtn->setObjectName(QString::fromUtf8("serPort_RSM_PsBtn"));

        gridLayout_4->addWidget(serPort_RSM_PsBtn, 1, 1, 1, 1);

        serPort_AV_PsBtn = new QPushButton(serPort_shortcut_GpBox);
        serPort_AV_PsBtn->setObjectName(QString::fromUtf8("serPort_AV_PsBtn"));

        gridLayout_4->addWidget(serPort_AV_PsBtn, 1, 4, 1, 1);

        serPort_RBAT_PsBtn = new QPushButton(serPort_shortcut_GpBox);
        serPort_RBAT_PsBtn->setObjectName(QString::fromUtf8("serPort_RBAT_PsBtn"));

        gridLayout_4->addWidget(serPort_RBAT_PsBtn, 2, 4, 1, 1);


        gridLayout_8->addWidget(serPort_shortcut_GpBox, 4, 0, 1, 6);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_19, 0, 3, 1, 1);

        serPort_SP_GpBox = new QGroupBox(serPort_send_GpBox);
        serPort_SP_GpBox->setObjectName(QString::fromUtf8("serPort_SP_GpBox"));
        sizePolicy7.setHeightForWidth(serPort_SP_GpBox->sizePolicy().hasHeightForWidth());
        serPort_SP_GpBox->setSizePolicy(sizePolicy7);
        serPort_SP_GpBox->setMinimumSize(QSize(300, 240));
        serPort_SP_GpBox->setMaximumSize(QSize(16777215, 16777215));
        serPort_SP_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
" QGroupBox {\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    border-radius: 5px;\n"
"    margin-top: 1ex; /* leave space at the top for the title */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                     stop:0 rgba(7, 85, 75, 255),\n"
"                     stop:1 rgba(10, 100, 75, 255));\n"
" }\n"
""));
        gridLayout_17 = new QGridLayout(serPort_SP_GpBox);
        gridLayout_17->setSpacing(0);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 12, 0, 0);
        serPort_read_SP_PsBtn = new QPushButton(serPort_SP_GpBox);
        serPort_read_SP_PsBtn->setObjectName(QString::fromUtf8("serPort_read_SP_PsBtn"));

        gridLayout_17->addWidget(serPort_read_SP_PsBtn, 2, 3, 1, 1);

        serPort_write_SP_PsBtn = new QPushButton(serPort_SP_GpBox);
        serPort_write_SP_PsBtn->setObjectName(QString::fromUtf8("serPort_write_SP_PsBtn"));

        gridLayout_17->addWidget(serPort_write_SP_PsBtn, 2, 2, 1, 1);

        serPort_SP_HlSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(serPort_SP_HlSpacer, 2, 1, 1, 1);

        serPort_SP_TabWidget = new QTableWidget(serPort_SP_GpBox);
        if (serPort_SP_TabWidget->columnCount() < 4)
            serPort_SP_TabWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem134 = new QTableWidgetItem();
        serPort_SP_TabWidget->setHorizontalHeaderItem(0, __qtablewidgetitem134);
        QTableWidgetItem *__qtablewidgetitem135 = new QTableWidgetItem();
        serPort_SP_TabWidget->setHorizontalHeaderItem(1, __qtablewidgetitem135);
        QTableWidgetItem *__qtablewidgetitem136 = new QTableWidgetItem();
        serPort_SP_TabWidget->setHorizontalHeaderItem(2, __qtablewidgetitem136);
        QTableWidgetItem *__qtablewidgetitem137 = new QTableWidgetItem();
        serPort_SP_TabWidget->setHorizontalHeaderItem(3, __qtablewidgetitem137);
        if (serPort_SP_TabWidget->rowCount() < 5)
            serPort_SP_TabWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem138 = new QTableWidgetItem();
        serPort_SP_TabWidget->setVerticalHeaderItem(0, __qtablewidgetitem138);
        QTableWidgetItem *__qtablewidgetitem139 = new QTableWidgetItem();
        serPort_SP_TabWidget->setVerticalHeaderItem(1, __qtablewidgetitem139);
        QTableWidgetItem *__qtablewidgetitem140 = new QTableWidgetItem();
        serPort_SP_TabWidget->setVerticalHeaderItem(2, __qtablewidgetitem140);
        QTableWidgetItem *__qtablewidgetitem141 = new QTableWidgetItem();
        serPort_SP_TabWidget->setVerticalHeaderItem(3, __qtablewidgetitem141);
        QTableWidgetItem *__qtablewidgetitem142 = new QTableWidgetItem();
        serPort_SP_TabWidget->setVerticalHeaderItem(4, __qtablewidgetitem142);
        QTableWidgetItem *__qtablewidgetitem143 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(0, 0, __qtablewidgetitem143);
        QTableWidgetItem *__qtablewidgetitem144 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(0, 1, __qtablewidgetitem144);
        QTableWidgetItem *__qtablewidgetitem145 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(0, 2, __qtablewidgetitem145);
        QTableWidgetItem *__qtablewidgetitem146 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(0, 3, __qtablewidgetitem146);
        QTableWidgetItem *__qtablewidgetitem147 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(1, 0, __qtablewidgetitem147);
        QTableWidgetItem *__qtablewidgetitem148 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(1, 1, __qtablewidgetitem148);
        QTableWidgetItem *__qtablewidgetitem149 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(1, 2, __qtablewidgetitem149);
        QTableWidgetItem *__qtablewidgetitem150 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(1, 3, __qtablewidgetitem150);
        QTableWidgetItem *__qtablewidgetitem151 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(2, 0, __qtablewidgetitem151);
        QTableWidgetItem *__qtablewidgetitem152 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(2, 1, __qtablewidgetitem152);
        QTableWidgetItem *__qtablewidgetitem153 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(2, 2, __qtablewidgetitem153);
        QTableWidgetItem *__qtablewidgetitem154 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(2, 3, __qtablewidgetitem154);
        QTableWidgetItem *__qtablewidgetitem155 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(3, 0, __qtablewidgetitem155);
        QTableWidgetItem *__qtablewidgetitem156 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(3, 1, __qtablewidgetitem156);
        QTableWidgetItem *__qtablewidgetitem157 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(3, 2, __qtablewidgetitem157);
        QTableWidgetItem *__qtablewidgetitem158 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(3, 3, __qtablewidgetitem158);
        QTableWidgetItem *__qtablewidgetitem159 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(4, 0, __qtablewidgetitem159);
        QTableWidgetItem *__qtablewidgetitem160 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(4, 1, __qtablewidgetitem160);
        QTableWidgetItem *__qtablewidgetitem161 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(4, 2, __qtablewidgetitem161);
        QTableWidgetItem *__qtablewidgetitem162 = new QTableWidgetItem();
        serPort_SP_TabWidget->setItem(4, 3, __qtablewidgetitem162);
        serPort_SP_TabWidget->setObjectName(QString::fromUtf8("serPort_SP_TabWidget"));
        sizePolicy3.setHeightForWidth(serPort_SP_TabWidget->sizePolicy().hasHeightForWidth());
        serPort_SP_TabWidget->setSizePolicy(sizePolicy3);
        serPort_SP_TabWidget->setMinimumSize(QSize(0, 157));
        serPort_SP_TabWidget->setMaximumSize(QSize(16777215, 157));
        serPort_SP_TabWidget->horizontalHeader()->setVisible(false);
        serPort_SP_TabWidget->horizontalHeader()->setDefaultSectionSize(101);
        serPort_SP_TabWidget->horizontalHeader()->setMinimumSectionSize(19);
        serPort_SP_TabWidget->verticalHeader()->setVisible(false);
        serPort_SP_TabWidget->verticalHeader()->setDefaultSectionSize(31);

        gridLayout_17->addWidget(serPort_SP_TabWidget, 1, 0, 1, 6);


        gridLayout_8->addWidget(serPort_SP_GpBox, 5, 0, 1, 6);


        gridLayout_6->addWidget(serPort_send_GpBox, 1, 1, 1, 2);

        serPort_Settings_GpBox = new QGroupBox(serPort_Page);
        serPort_Settings_GpBox->setObjectName(QString::fromUtf8("serPort_Settings_GpBox"));
        serPort_Settings_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
" QGroupBox {\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    border-radius: 5px;\n"
"    margin-top: 0ex; /* leave space at the top for the title */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                     stop:0 rgba(7, 85, 75, 255),\n"
"                     stop:1 rgba(10, 100, 75, 255));\n"
" }\n"
""));
        gridLayout_5 = new QGridLayout(serPort_Settings_GpBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        serPort_portName_Label = new QLabel(serPort_Settings_GpBox);
        serPort_portName_Label->setObjectName(QString::fromUtf8("serPort_portName_Label"));
        QSizePolicy sizePolicy14(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy14.setHorizontalStretch(0);
        sizePolicy14.setVerticalStretch(0);
        sizePolicy14.setHeightForWidth(serPort_portName_Label->sizePolicy().hasHeightForWidth());
        serPort_portName_Label->setSizePolicy(sizePolicy14);
        serPort_portName_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(serPort_portName_Label, 0, 0, 1, 1);

        serPort_portName_CbBox = new QComboBox(serPort_Settings_GpBox);
        serPort_portName_CbBox->setObjectName(QString::fromUtf8("serPort_portName_CbBox"));

        gridLayout_5->addWidget(serPort_portName_CbBox, 0, 1, 1, 1);

        serPort_parity_Label = new QLabel(serPort_Settings_GpBox);
        serPort_parity_Label->setObjectName(QString::fromUtf8("serPort_parity_Label"));
        sizePolicy14.setHeightForWidth(serPort_parity_Label->sizePolicy().hasHeightForWidth());
        serPort_parity_Label->setSizePolicy(sizePolicy14);
        serPort_parity_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(serPort_parity_Label, 0, 4, 1, 1);

        serPort_parity_CbBox = new QComboBox(serPort_Settings_GpBox);
        serPort_parity_CbBox->setObjectName(QString::fromUtf8("serPort_parity_CbBox"));

        gridLayout_5->addWidget(serPort_parity_CbBox, 0, 5, 1, 1);

        serPort_baudRate_Label = new QLabel(serPort_Settings_GpBox);
        serPort_baudRate_Label->setObjectName(QString::fromUtf8("serPort_baudRate_Label"));
        sizePolicy14.setHeightForWidth(serPort_baudRate_Label->sizePolicy().hasHeightForWidth());
        serPort_baudRate_Label->setSizePolicy(sizePolicy14);
        serPort_baudRate_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(serPort_baudRate_Label, 0, 2, 1, 1);

        serPort_baudRate_CbBox = new QComboBox(serPort_Settings_GpBox);
        serPort_baudRate_CbBox->setObjectName(QString::fromUtf8("serPort_baudRate_CbBox"));

        gridLayout_5->addWidget(serPort_baudRate_CbBox, 0, 3, 1, 1);

        serPort_dataBit_Label = new QLabel(serPort_Settings_GpBox);
        serPort_dataBit_Label->setObjectName(QString::fromUtf8("serPort_dataBit_Label"));
        sizePolicy14.setHeightForWidth(serPort_dataBit_Label->sizePolicy().hasHeightForWidth());
        serPort_dataBit_Label->setSizePolicy(sizePolicy14);
        serPort_dataBit_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(serPort_dataBit_Label, 1, 0, 1, 1);

        serPort_dataBit_CbBox = new QComboBox(serPort_Settings_GpBox);
        serPort_dataBit_CbBox->setObjectName(QString::fromUtf8("serPort_dataBit_CbBox"));

        gridLayout_5->addWidget(serPort_dataBit_CbBox, 1, 1, 1, 1);

        serPort_stopBit_Label = new QLabel(serPort_Settings_GpBox);
        serPort_stopBit_Label->setObjectName(QString::fromUtf8("serPort_stopBit_Label"));
        sizePolicy14.setHeightForWidth(serPort_stopBit_Label->sizePolicy().hasHeightForWidth());
        serPort_stopBit_Label->setSizePolicy(sizePolicy14);
        serPort_stopBit_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(serPort_stopBit_Label, 1, 2, 1, 1);

        serPort_stopBit_CbBox = new QComboBox(serPort_Settings_GpBox);
        serPort_stopBit_CbBox->setObjectName(QString::fromUtf8("serPort_stopBit_CbBox"));

        gridLayout_5->addWidget(serPort_stopBit_CbBox, 1, 3, 1, 1);

        serPort_flowCtl_Label = new QLabel(serPort_Settings_GpBox);
        serPort_flowCtl_Label->setObjectName(QString::fromUtf8("serPort_flowCtl_Label"));
        sizePolicy14.setHeightForWidth(serPort_flowCtl_Label->sizePolicy().hasHeightForWidth());
        serPort_flowCtl_Label->setSizePolicy(sizePolicy14);
        serPort_flowCtl_Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(serPort_flowCtl_Label, 1, 4, 1, 1);

        serPort_flowCtl_CbBox = new QComboBox(serPort_Settings_GpBox);
        serPort_flowCtl_CbBox->setObjectName(QString::fromUtf8("serPort_flowCtl_CbBox"));

        gridLayout_5->addWidget(serPort_flowCtl_CbBox, 1, 5, 1, 1);


        gridLayout_6->addWidget(serPort_Settings_GpBox, 0, 0, 1, 2);

        serPort_ctl_GpBox = new QGroupBox(serPort_Page);
        serPort_ctl_GpBox->setObjectName(QString::fromUtf8("serPort_ctl_GpBox"));
        serPort_ctl_GpBox->setStyleSheet(QString::fromUtf8(" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"	 color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
" QGroupBox {\n"
"    border: 1px solid rgb(18, 220, 200);\n"
"    border-radius: 5px;\n"
"    margin-top: 0ex; /* leave space at the top for the title */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                     stop:0 rgba(7, 85, 75, 255),\n"
"                     stop:1 rgba(10, 100, 75, 255));\n"
" }\n"
""));
        gridLayout_9 = new QGridLayout(serPort_ctl_GpBox);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        serPort_Open_PsBtn = new QPushButton(serPort_ctl_GpBox);
        serPort_Open_PsBtn->setObjectName(QString::fromUtf8("serPort_Open_PsBtn"));

        gridLayout_9->addWidget(serPort_Open_PsBtn, 0, 0, 1, 1);

        serPort_Close_PsBtn = new QPushButton(serPort_ctl_GpBox);
        serPort_Close_PsBtn->setObjectName(QString::fromUtf8("serPort_Close_PsBtn"));
        serPort_Close_PsBtn->setEnabled(false);

        gridLayout_9->addWidget(serPort_Close_PsBtn, 0, 1, 1, 1);


        gridLayout_6->addWidget(serPort_ctl_GpBox, 0, 2, 1, 1);

        main_SkWidget->addWidget(serPort_Page);

        gridLayout->addWidget(main_SkWidget, 1, 0, 2, 1);

        sideBar_right_Page = new QWidget(MainWidget);
        sideBar_right_Page->setObjectName(QString::fromUtf8("sideBar_right_Page"));
        sizePolicy.setHeightForWidth(sideBar_right_Page->sizePolicy().hasHeightForWidth());
        sideBar_right_Page->setSizePolicy(sizePolicy);
        sideBar_right_Page->setMinimumSize(QSize(73, 0));
        sideBar_right_Page->setMaximumSize(QSize(75, 480));
        sideBar_right_Page->setFont(font);
        sideBar_right_Page->setStyleSheet(QString::fromUtf8("#sideBar_right_Page {\n"
"    border: 1px solid rgb(18, 220, 200);;\n"
"    background: qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(7, 85, 75, 255),\n"
"        stop:1 rgba(18, 220, 200, 255));\n"
"\n"
"\n"
"}\n"
"\n"
"#sideBar_right_Page QToolButton {\n"
"    padding-top: 30px;\n"
"    padding-bottom: 25px;\n"
"    border-top:3px solid qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(10, 10, 10, 255),\n"
"        stop:1 rgba(220, 220, 220, 255));\n"
"}\n"
"\n"
"\n"
"\n"
"#sideBar_right_Page QToolButton[current=\"true\"] {\n"
"    border-right: 3px solid rgb(170, 170, 170);\n"
"    border-left: 3px solid rgb(170, 170, 170);\n"
"    background: qlineargradient(spread:pad,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(1, 240, 220, 255),\n"
"        stop:1 rgba(17, 219, 195, 255));\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(sideBar_right_Page);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sideBar_TlBtn_3 = new QToolButton(sideBar_right_Page);
        sideBar_TlBtn_3->setObjectName(QString::fromUtf8("sideBar_TlBtn_3"));
        QSizePolicy sizePolicy15(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy15.setHorizontalStretch(0);
        sizePolicy15.setVerticalStretch(0);
        sizePolicy15.setHeightForWidth(sideBar_TlBtn_3->sizePolicy().hasHeightForWidth());
        sideBar_TlBtn_3->setSizePolicy(sizePolicy15);
        sideBar_TlBtn_3->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pic/from.png"), QSize(), QIcon::Normal, QIcon::Off);
        sideBar_TlBtn_3->setIcon(icon1);
        sideBar_TlBtn_3->setIconSize(QSize(71, 70));
        sideBar_TlBtn_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(sideBar_TlBtn_3, 4, 0, 1, 1);

        sideBar_TlBtn_2 = new QToolButton(sideBar_right_Page);
        sideBar_TlBtn_2->setObjectName(QString::fromUtf8("sideBar_TlBtn_2"));
        sizePolicy15.setHeightForWidth(sideBar_TlBtn_2->sizePolicy().hasHeightForWidth());
        sideBar_TlBtn_2->setSizePolicy(sizePolicy15);
        sideBar_TlBtn_2->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pic/harmonic.png"), QSize(), QIcon::Normal, QIcon::Off);
        sideBar_TlBtn_2->setIcon(icon2);
        sideBar_TlBtn_2->setIconSize(QSize(70, 70));
        sideBar_TlBtn_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(sideBar_TlBtn_2, 2, 0, 1, 1);

        sideBar_TlBtn_4 = new QToolButton(sideBar_right_Page);
        sideBar_TlBtn_4->setObjectName(QString::fromUtf8("sideBar_TlBtn_4"));
        sizePolicy15.setHeightForWidth(sideBar_TlBtn_4->sizePolicy().hasHeightForWidth());
        sideBar_TlBtn_4->setSizePolicy(sizePolicy15);
        sideBar_TlBtn_4->setFont(font);
        sideBar_TlBtn_4->setStyleSheet(QString::fromUtf8("#sideBar_TlBtn_4 {\n"
"\n"
"    border-top:3px solid qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(10, 10, 10, 255),\n"
"        stop:1 rgba(220, 220, 220, 255));\n"
"   border-bottom:3px solid qlineargradient(spread:reflect,\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 rgba(10, 10, 10, 255),\n"
"        stop:1 rgba(220, 220, 220, 255));\n"
"\n"
"}\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pic/settting.png"), QSize(), QIcon::Normal, QIcon::Off);
        sideBar_TlBtn_4->setIcon(icon3);
        sideBar_TlBtn_4->setIconSize(QSize(70, 70));
        sideBar_TlBtn_4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(sideBar_TlBtn_4, 5, 0, 1, 1);

        sideBar_TlBtn_1 = new QToolButton(sideBar_right_Page);
        sideBar_TlBtn_1->setObjectName(QString::fromUtf8("sideBar_TlBtn_1"));
        sideBar_TlBtn_1->setEnabled(true);
        sizePolicy15.setHeightForWidth(sideBar_TlBtn_1->sizePolicy().hasHeightForWidth());
        sideBar_TlBtn_1->setSizePolicy(sizePolicy15);
        sideBar_TlBtn_1->setMaximumSize(QSize(16777214, 16777215));
        sideBar_TlBtn_1->setFont(font);
        sideBar_TlBtn_1->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pic/measuredValue.png"), QSize(), QIcon::Normal, QIcon::Off);
        sideBar_TlBtn_1->setIcon(icon4);
        sideBar_TlBtn_1->setIconSize(QSize(80, 80));
        sideBar_TlBtn_1->setAutoRepeatDelay(300);
        sideBar_TlBtn_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(sideBar_TlBtn_1, 0, 0, 1, 1);


        gridLayout->addWidget(sideBar_right_Page, 1, 1, 1, 1);

        start_PsBtn = new QPushButton(MainWidget);
        start_PsBtn->setObjectName(QString::fromUtf8("start_PsBtn"));
        sizePolicy.setHeightForWidth(start_PsBtn->sizePolicy().hasHeightForWidth());
        start_PsBtn->setSizePolicy(sizePolicy);
        start_PsBtn->setMinimumSize(QSize(0, 80));
        start_PsBtn->setMaximumSize(QSize(80, 80));
        start_PsBtn->setFont(font);
        start_PsBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image: url(:/pic/Btn_ON.png);\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image: url(:/pic/Btn_OFF.png);\n"
"	color:beige;\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	border-image: url(:/pic/Btn_OFF.png);\n"
"	color:black;\n"
"}\n"
"\n"
"QPushButton:pressed:checked\n"
"{\n"
"	border-image: url(:/pic/Btn_ON.png);\n"
"	color:beige;\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"     border: none;\n"
"}"));
        start_PsBtn->setCheckable(true);

        gridLayout->addWidget(start_PsBtn, 2, 1, 1, 1);


        retranslateUi(MainWidget);

        main_SkWidget->setCurrentIndex(0);
        ES_TbWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "XL.903.\344\272\244\346\265\201\345\205\205\347\224\265\346\241\251\346\243\200\346\265\213\350\243\205\347\275\256", 0, QApplication::UnicodeUTF8));
        RS_maxCur_Label->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        RS_maxCur_tag_Label->setText(QApplication::translate("MainWidget", "\346\234\200\345\244\247\350\276\223\345\207\272\347\224\265\346\265\201.A: ", 0, QApplication::UnicodeUTF8));
        runTime_Label->setText(QApplication::translate("MainWidget", "\350\277\220\350\241\214\346\227\266\351\227\264:  ", 0, QApplication::UnicodeUTF8));
        runTime_LnEdit->setText(QApplication::translate("MainWidget", "00:00:00", 0, QApplication::UnicodeUTF8));
        battery_Label->setText(QString());
        keyBoard_PsBtn->setText(QApplication::translate("MainWidget", "\351\224\256\347\233\230", 0, QApplication::UnicodeUTF8));
        BMS_cntState_tag_Label->setText(QApplication::translate("MainWidget", "\351\223\276\346\216\245\347\212\266\346\200\201: ", 0, QApplication::UnicodeUTF8));
        BMS_cntState_Label->setText(QApplication::translate("MainWidget", "\346\226\255\345\274\200", 0, QApplication::UnicodeUTF8));
        lock_RdBtn->setText(QApplication::translate("MainWidget", "\344\270\212\351\224\201", 0, QApplication::UnicodeUTF8));
        ES_PE_zoomOut_PsBtn->setText(QApplication::translate("MainWidget", "\346\224\276\345\244\247", 0, QApplication::UnicodeUTF8));
        ES_PE_zoomIn_PsBtn->setText(QApplication::translate("MainWidget", "\347\274\251\345\260\217", 0, QApplication::UnicodeUTF8));
        ES_TbWidget->setTabText(ES_TbWidget->indexOf(ES_PE_tab), QApplication::translate("MainWidget", "\347\224\265\350\203\275\350\257\257\345\267\256", 0, QApplication::UnicodeUTF8));
        ES_wave_CkBox->setText(QApplication::translate("MainWidget", "\347\224\265\345\216\213\346\263\242\345\275\242", 0, QApplication::UnicodeUTF8));
        ES_TbWidget->setTabText(ES_TbWidget->indexOf(ES_wave_tab), QApplication::translate("MainWidget", "\350\276\223\345\205\245\346\263\242\345\275\242", 0, QApplication::UnicodeUTF8));
        ME_phasor_GpBox->setTitle(QApplication::translate("MainWidget", "\347\233\270\344\275\215\345\205\250\345\233\276", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = ES_standard_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWidget", "\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = ES_standard_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWidget", "\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = ES_standard_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWidget", "\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = ES_standard_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWidget", "\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = ES_standard_TblWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWidget", "\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = ES_standard_TblWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWidget", "\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = ES_standard_TblWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWidget", "\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = ES_standard_TblWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWidget", "\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = ES_standard_TblWidget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWidget", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = ES_standard_TblWidget->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWidget", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = ES_standard_TblWidget->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWidget", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = ES_standard_TblWidget->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWidget", "4", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = ES_standard_TblWidget->isSortingEnabled();
        ES_standard_TblWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = ES_standard_TblWidget->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWidget", "Ua(V)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = ES_standard_TblWidget->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = ES_standard_TblWidget->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWidget", "Ua(\302\260)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = ES_standard_TblWidget->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = ES_standard_TblWidget->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWidget", "Ia(A)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = ES_standard_TblWidget->item(0, 5);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = ES_standard_TblWidget->item(0, 6);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWidget", "Ia(\302\260)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = ES_standard_TblWidget->item(0, 7);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = ES_standard_TblWidget->item(1, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWidget", "Ub(V)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = ES_standard_TblWidget->item(1, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = ES_standard_TblWidget->item(1, 2);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWidget", "Ub(\302\260)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = ES_standard_TblWidget->item(1, 3);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = ES_standard_TblWidget->item(1, 4);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWidget", "Ib(A)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = ES_standard_TblWidget->item(1, 5);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = ES_standard_TblWidget->item(1, 6);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWidget", "Ib(\302\260)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = ES_standard_TblWidget->item(1, 7);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = ES_standard_TblWidget->item(2, 0);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWidget", "Uc(V)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem29 = ES_standard_TblWidget->item(2, 1);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem30 = ES_standard_TblWidget->item(2, 2);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWidget", "Uc(\302\260)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem31 = ES_standard_TblWidget->item(2, 3);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem32 = ES_standard_TblWidget->item(2, 4);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWidget", "Ic(A)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem33 = ES_standard_TblWidget->item(2, 5);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem34 = ES_standard_TblWidget->item(2, 6);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWidget", "Ic(\302\260)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem35 = ES_standard_TblWidget->item(2, 7);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem36 = ES_standard_TblWidget->item(3, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWidget", "SP(w)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem37 = ES_standard_TblWidget->item(3, 1);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem38 = ES_standard_TblWidget->item(3, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWidget", "f(Hz)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem39 = ES_standard_TblWidget->item(3, 3);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem40 = ES_standard_TblWidget->item(3, 4);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWidget", "Time(sec)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem41 = ES_standard_TblWidget->item(3, 5);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        ES_standard_TblWidget->setSortingEnabled(__sortingEnabled);

        ME_energy_GpBox->setTitle(QApplication::translate("MainWidget", "\347\224\265\350\203\275\347\264\257\350\256\241", 0, QApplication::UnicodeUTF8));
        ME_energy_std_Label->setText(QApplication::translate("MainWidget", "\346\240\207        \345\207\206: ", 0, QApplication::UnicodeUTF8));
        ME_energy_std_LnEdit->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        lineEdit_6->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        RSMV_energy_pul_Label_5->setText(QApplication::translate("MainWidget", "\347\224\250\347\224\265\350\264\271\347\224\250:", 0, QApplication::UnicodeUTF8));
        RSMV_clearEnergy_PsBtn->setText(QApplication::translate("MainWidget", "\346\270\205\351\231\244\347\224\265\350\203\275\347\264\257\347\247\257", 0, QApplication::UnicodeUTF8));
        ME_energy_object_Label->setText(QApplication::translate("MainWidget", "\350\242\253\346\243\200\347\224\265\350\203\275: ", 0, QApplication::UnicodeUTF8));
        ME_energy_object_LnEdit->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        ES_value_GpBox->setTitle(QApplication::translate("MainWidget", "\350\257\257\345\267\256\350\256\241\347\256\227(%)", 0, QApplication::UnicodeUTF8));
        ES_TE_Label->setText(QApplication::translate("MainWidget", "\346\227\266\351\222\237\350\257\257\345\267\256: ", 0, QApplication::UnicodeUTF8));
        serPort_EVT_PsBtn->setText(QApplication::translate("MainWidget", "\346\226\260\346\243\200\345\256\232\347\202\271", 0, QApplication::UnicodeUTF8));
        ES_insertForm_PsBtn->setText(QApplication::translate("MainWidget", "\350\256\260\345\205\245\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        ES_TE_LnEdit->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        ES_PE_Label->setText(QApplication::translate("MainWidget", "\347\224\265\350\203\275\350\257\257\345\267\256: ", 0, QApplication::UnicodeUTF8));
        ES_PE_LnEdit->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        RSMV_Harmonic_Phase_Label->setText(QApplication::translate("MainWidget", "\346\265\213\350\257\225\351\241\271:  ", 0, QApplication::UnicodeUTF8));
        RSMV_Harmonic_Phase_CbBox->clear();
        RSMV_Harmonic_Phase_CbBox->insertItems(0, QStringList()
         << QApplication::translate("MainWidget", "Ua", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWidget", "Ub", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWidget", "Uc", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWidget", "Ia", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWidget", "Ib", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWidget", "Ic", 0, QApplication::UnicodeUTF8)
        );
        RSMV_Harmonic_Times_Label->setText(QApplication::translate("MainWidget", "\350\260\220\346\263\242\346\254\241\346\225\260:  ", 0, QApplication::UnicodeUTF8));
        RSMV_Harmonic_Times_CbBox->clear();
        RSMV_Harmonic_Times_CbBox->insertItems(0, QStringList()
         << QApplication::translate("MainWidget", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWidget", "32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWidget", "40", 0, QApplication::UnicodeUTF8)
        );
        RSMV_Harmonic_Range_Label->setText(QApplication::translate("MainWidget", "\351\230\200\345\200\274(%):  ", 0, QApplication::UnicodeUTF8));
        RSMV_Harmonic_LnEdit_Range->setText(QApplication::translate("MainWidget", "0.1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem42 = RSMV_harmonic_rms_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWidget", "\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem43 = RSMV_harmonic_rms_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWidget", "\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem44 = RSMV_harmonic_rms_TblWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWidget", "\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem45 = RSMV_harmonic_rms_TblWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWidget", "\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem46 = RSMV_harmonic_rms_TblWidget->verticalHeaderItem(0);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWidget", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem47 = RSMV_harmonic_rms_TblWidget->verticalHeaderItem(1);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWidget", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem48 = RSMV_harmonic_rms_TblWidget->verticalHeaderItem(2);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWidget", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem49 = RSMV_harmonic_rms_TblWidget->verticalHeaderItem(3);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWidget", "4", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = RSMV_harmonic_rms_TblWidget->isSortingEnabled();
        RSMV_harmonic_rms_TblWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem50 = RSMV_harmonic_rms_TblWidget->item(0, 0);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWidget", "Ua(V)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem51 = RSMV_harmonic_rms_TblWidget->item(0, 1);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem52 = RSMV_harmonic_rms_TblWidget->item(0, 2);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWidget", "Ia(A)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem53 = RSMV_harmonic_rms_TblWidget->item(0, 3);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem54 = RSMV_harmonic_rms_TblWidget->item(1, 0);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWidget", "Ub(V)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem55 = RSMV_harmonic_rms_TblWidget->item(1, 1);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem56 = RSMV_harmonic_rms_TblWidget->item(1, 2);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWidget", "Ib(A)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem57 = RSMV_harmonic_rms_TblWidget->item(1, 3);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem58 = RSMV_harmonic_rms_TblWidget->item(2, 0);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWidget", "Uc(V)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem59 = RSMV_harmonic_rms_TblWidget->item(2, 1);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem60 = RSMV_harmonic_rms_TblWidget->item(2, 2);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWidget", "Ic(A)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem61 = RSMV_harmonic_rms_TblWidget->item(2, 3);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem62 = RSMV_harmonic_rms_TblWidget->item(3, 0);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWidget", "\351\242\221\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem63 = RSMV_harmonic_rms_TblWidget->item(3, 1);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem64 = RSMV_harmonic_rms_TblWidget->item(3, 2);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWidget", "\350\260\220\346\263\242\346\200\273\345\220\253\346\234\211\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem65 = RSMV_harmonic_rms_TblWidget->item(3, 3);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        RSMV_harmonic_rms_TblWidget->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem66 = RSMV_Harmonic_TblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWidget", "\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem67 = RSMV_Harmonic_TblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem67->setText(QApplication::translate("MainWidget", "\345\220\253\346\234\211\347\216\207(%)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem68 = RSMV_Harmonic_TblWidget->verticalHeaderItem(0);
        ___qtablewidgetitem68->setText(QApplication::translate("MainWidget", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem69 = RSMV_Harmonic_TblWidget->verticalHeaderItem(1);
        ___qtablewidgetitem69->setText(QApplication::translate("MainWidget", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem70 = RSMV_Harmonic_TblWidget->verticalHeaderItem(2);
        ___qtablewidgetitem70->setText(QApplication::translate("MainWidget", "3", 0, QApplication::UnicodeUTF8));
        from_information_Label->setText(QApplication::translate("MainWidget", "\350\241\250\346\240\274\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        from_ctl_GpBox->setTitle(QApplication::translate("MainWidget", "\346\243\200\345\256\232\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        RSMV_clearFrom_PsBtn->setText(QApplication::translate("MainWidget", "\346\270\205\347\251\272\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        RSMV_readFrom_PsBtn->setText(QApplication::translate("MainWidget", "\350\257\273\345\217\226\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        RSMV_buildFrom_PsBtn->setText(QApplication::translate("MainWidget", "\347\224\237\346\210\220\350\257\201\344\271\246", 0, QApplication::UnicodeUTF8));
        RSMV_saveFormMsg_PsBtn->setText(QApplication::translate("MainWidget", "\347\224\237\346\210\220\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        from_error_Label->setText(QApplication::translate("MainWidget", "\350\257\257\345\267\256\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem71 = from_information_TbWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem71->setText(QApplication::translate("MainWidget", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem72 = from_information_TbWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem72->setText(QApplication::translate("MainWidget", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem73 = from_information_TbWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem73->setText(QApplication::translate("MainWidget", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem74 = from_information_TbWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem74->setText(QApplication::translate("MainWidget", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem75 = from_information_TbWidget->verticalHeaderItem(0);
        ___qtablewidgetitem75->setText(QApplication::translate("MainWidget", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem76 = from_information_TbWidget->verticalHeaderItem(1);
        ___qtablewidgetitem76->setText(QApplication::translate("MainWidget", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem77 = from_information_TbWidget->verticalHeaderItem(2);
        ___qtablewidgetitem77->setText(QApplication::translate("MainWidget", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem78 = from_information_TbWidget->verticalHeaderItem(3);
        ___qtablewidgetitem78->setText(QApplication::translate("MainWidget", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem79 = from_information_TbWidget->verticalHeaderItem(4);
        ___qtablewidgetitem79->setText(QApplication::translate("MainWidget", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem80 = from_information_TbWidget->verticalHeaderItem(5);
        ___qtablewidgetitem80->setText(QApplication::translate("MainWidget", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem81 = from_information_TbWidget->verticalHeaderItem(6);
        ___qtablewidgetitem81->setText(QApplication::translate("MainWidget", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem82 = from_information_TbWidget->verticalHeaderItem(7);
        ___qtablewidgetitem82->setText(QApplication::translate("MainWidget", "8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem83 = from_information_TbWidget->verticalHeaderItem(8);
        ___qtablewidgetitem83->setText(QApplication::translate("MainWidget", "9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem84 = from_information_TbWidget->verticalHeaderItem(9);
        ___qtablewidgetitem84->setText(QApplication::translate("MainWidget", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem85 = from_information_TbWidget->verticalHeaderItem(10);
        ___qtablewidgetitem85->setText(QApplication::translate("MainWidget", "11", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem86 = from_information_TbWidget->verticalHeaderItem(11);
        ___qtablewidgetitem86->setText(QApplication::translate("MainWidget", "12", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem87 = from_information_TbWidget->verticalHeaderItem(12);
        ___qtablewidgetitem87->setText(QApplication::translate("MainWidget", "13", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled2 = from_information_TbWidget->isSortingEnabled();
        from_information_TbWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem88 = from_information_TbWidget->item(0, 0);
        ___qtablewidgetitem88->setText(QApplication::translate("MainWidget", "\345\247\224\346\211\230\345\215\225\344\275\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem89 = from_information_TbWidget->item(0, 1);
        ___qtablewidgetitem89->setText(QApplication::translate("MainWidget", "\346\267\261\345\234\263\346\230\237\351\276\231\347\247\221\346\212\200\350\202\241\344\273\275\346\234\211\351\231\220\345\205\254\345\217\270", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem90 = from_information_TbWidget->item(0, 2);
        ___qtablewidgetitem90->setText(QApplication::translate("MainWidget", "\345\215\225\344\275\215\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem91 = from_information_TbWidget->item(0, 3);
        ___qtablewidgetitem91->setText(QApplication::translate("MainWidget", "\346\267\261\345\234\263\345\270\202\345\215\227\345\261\261\345\214\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem92 = from_information_TbWidget->item(1, 0);
        ___qtablewidgetitem92->setText(QApplication::translate("MainWidget", "\344\273\252\345\231\250\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem93 = from_information_TbWidget->item(1, 1);
        ___qtablewidgetitem93->setText(QApplication::translate("MainWidget", "\347\233\264\346\265\201\345\205\205\347\224\265\346\241\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem94 = from_information_TbWidget->item(1, 2);
        ___qtablewidgetitem94->setText(QApplication::translate("MainWidget", "\345\210\266\351\200\240\345\216\202\345\220\215 ", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem95 = from_information_TbWidget->item(1, 3);
        ___qtablewidgetitem95->setText(QApplication::translate("MainWidget", " \346\267\261\345\234\263\346\230\237\351\276\231", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem96 = from_information_TbWidget->item(2, 0);
        ___qtablewidgetitem96->setText(QApplication::translate("MainWidget", "\345\236\213      \345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem97 = from_information_TbWidget->item(2, 1);
        ___qtablewidgetitem97->setText(QApplication::translate("MainWidget", "20151210", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem98 = from_information_TbWidget->item(2, 2);
        ___qtablewidgetitem98->setText(QApplication::translate("MainWidget", "\347\224\237\344\272\247\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem99 = from_information_TbWidget->item(2, 3);
        ___qtablewidgetitem99->setText(QApplication::translate("MainWidget", "20151210", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem100 = from_information_TbWidget->item(3, 0);
        ___qtablewidgetitem100->setText(QApplication::translate("MainWidget", "\345\207\272\345\216\202\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem101 = from_information_TbWidget->item(3, 1);
        ___qtablewidgetitem101->setText(QApplication::translate("MainWidget", "20151210", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem102 = from_information_TbWidget->item(3, 2);
        ___qtablewidgetitem102->setText(QApplication::translate("MainWidget", "\345\207\206\347\241\256\345\272\246\347\255\211\347\272\247", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem103 = from_information_TbWidget->item(3, 3);
        ___qtablewidgetitem103->setText(QApplication::translate("MainWidget", "0.05", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem104 = from_information_TbWidget->item(4, 0);
        ___qtablewidgetitem104->setText(QApplication::translate("MainWidget", "\351\242\235\345\256\232\350\276\223\345\207\272\347\224\265\345\216\213\350\214\203\345\233\264(V)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem105 = from_information_TbWidget->item(4, 1);
        ___qtablewidgetitem105->setText(QApplication::translate("MainWidget", "100", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem106 = from_information_TbWidget->item(4, 2);
        ___qtablewidgetitem106->setText(QApplication::translate("MainWidget", "\351\242\235\345\256\232\350\276\223\345\207\272\347\224\265\346\265\201\350\214\203\345\233\264(A)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem107 = from_information_TbWidget->item(4, 3);
        ___qtablewidgetitem107->setText(QApplication::translate("MainWidget", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem108 = from_information_TbWidget->item(5, 0);
        ___qtablewidgetitem108->setText(QApplication::translate("MainWidget", "\351\242\235\345\256\232\350\276\223\345\207\272\345\270\270\346\225\260\350\214\203\345\233\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem109 = from_information_TbWidget->item(5, 1);
        ___qtablewidgetitem109->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem110 = from_information_TbWidget->item(5, 2);
        ___qtablewidgetitem110->setText(QApplication::translate("MainWidget", "\346\243\200\345\256\232\344\276\235\346\215\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem111 = from_information_TbWidget->item(5, 3);
        ___qtablewidgetitem111->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem112 = from_information_TbWidget->item(6, 0);
        ___qtablewidgetitem112->setText(QApplication::translate("MainWidget", "\346\243\200\345\256\232\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem113 = from_information_TbWidget->item(6, 1);
        ___qtablewidgetitem113->setText(QApplication::translate("MainWidget", "20151210", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem114 = from_information_TbWidget->item(6, 2);
        ___qtablewidgetitem114->setText(QApplication::translate("MainWidget", "\346\234\211 \346\225\210 \346\234\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem115 = from_information_TbWidget->item(6, 3);
        ___qtablewidgetitem115->setText(QApplication::translate("MainWidget", "20161210", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem116 = from_information_TbWidget->item(7, 0);
        ___qtablewidgetitem116->setText(QApplication::translate("MainWidget", "\346\270\251    \345\272\246(\342\204\203)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem117 = from_information_TbWidget->item(7, 1);
        ___qtablewidgetitem117->setText(QApplication::translate("MainWidget", "30", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem118 = from_information_TbWidget->item(7, 2);
        ___qtablewidgetitem118->setText(QApplication::translate("MainWidget", "\347\233\270\345\257\271\346\271\277\345\272\246(%)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem119 = from_information_TbWidget->item(7, 3);
        ___qtablewidgetitem119->setText(QApplication::translate("MainWidget", "12", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem120 = from_information_TbWidget->item(8, 0);
        ___qtablewidgetitem120->setText(QApplication::translate("MainWidget", "\346\243\200\345\256\232\345\234\260\347\202\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem121 = from_information_TbWidget->item(8, 1);
        ___qtablewidgetitem121->setText(QApplication::translate("MainWidget", "\346\267\261\345\234\263\345\270\202\345\215\227\345\261\261\345\214\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem122 = from_information_TbWidget->item(9, 0);
        ___qtablewidgetitem122->setText(QApplication::translate("MainWidget", "\346\240\207\345\207\206\345\231\250\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem123 = from_information_TbWidget->item(9, 1);
        ___qtablewidgetitem123->setText(QApplication::translate("MainWidget", "\344\272\244\346\265\201\345\205\205\347\224\265\346\241\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem124 = from_information_TbWidget->item(9, 2);
        ___qtablewidgetitem124->setText(QApplication::translate("MainWidget", "\347\211\271     \345\276\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem125 = from_information_TbWidget->item(10, 0);
        ___qtablewidgetitem125->setText(QApplication::translate("MainWidget", "\350\256\276\345\244\207\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem126 = from_information_TbWidget->item(10, 1);
        ___qtablewidgetitem126->setText(QApplication::translate("MainWidget", "2016", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem127 = from_information_TbWidget->item(10, 2);
        ___qtablewidgetitem127->setText(QApplication::translate("MainWidget", "\346\243\200\345\256\232/\346\240\241\345\207\206\350\257\201\344\271\246\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem128 = from_information_TbWidget->item(11, 0);
        ___qtablewidgetitem128->setText(QApplication::translate("MainWidget", "\346\234\211\346\225\210\346\234\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem129 = from_information_TbWidget->item(11, 1);
        ___qtablewidgetitem129->setText(QApplication::translate("MainWidget", "20161210", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem130 = from_information_TbWidget->item(11, 2);
        ___qtablewidgetitem130->setText(QApplication::translate("MainWidget", "\344\275\277\347\224\250\345\211\215\345\220\216\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem131 = from_information_TbWidget->item(12, 0);
        ___qtablewidgetitem131->setText(QApplication::translate("MainWidget", " \345\244\226\350\247\202\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem132 = from_information_TbWidget->item(12, 1);
        ___qtablewidgetitem132->setText(QApplication::translate("MainWidget", "\345\220\210\346\240\274", 0, QApplication::UnicodeUTF8));
        from_information_TbWidget->setSortingEnabled(__sortingEnabled2);

        from_error_TxEdit->setHtml(QApplication::translate("MainWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial Narrow'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        serPort_Rec_GbBox->setTitle(QString());
        serPort_CleanRec_PsBtn->setText(QApplication::translate("MainWidget", "\346\270\205\347\251\272\346\216\245\346\224\266", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWidget", "\346\216\245\346\224\266:", 0, QApplication::UnicodeUTF8));
        serPort_send_GpBox->setTitle(QString());
        serPort_CleanSend_PsBtn->setText(QApplication::translate("MainWidget", "\346\270\205\347\251\272\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        serPort_LF_CkBox->setText(QApplication::translate("MainWidget", "LF", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWidget", "\345\217\221\351\200\201:  ", 0, QApplication::UnicodeUTF8));
        serPort_Send_PsBtn->setText(QApplication::translate("MainWidget", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        serPort_CR_CkBox->setText(QApplication::translate("MainWidget", "CR", 0, QApplication::UnicodeUTF8));
        serPort_shortcut_GpBox->setTitle(QApplication::translate("MainWidget", "\345\277\253\351\200\237\346\214\207\344\273\244", 0, QApplication::UnicodeUTF8));
        serPort_RP_PsBtn->setText(QApplication::translate("MainWidget", "RP", 0, QApplication::UnicodeUTF8));
        serPort_ME_PsBtn->setText(QApplication::translate("MainWidget", "ME", 0, QApplication::UnicodeUTF8));
        serPort_RS_PsBtn->setText(QApplication::translate("MainWidget", "RS", 0, QApplication::UnicodeUTF8));
        serPort_RSM_PsBtn->setText(QApplication::translate("MainWidget", "RSM", 0, QApplication::UnicodeUTF8));
        serPort_AV_PsBtn->setText(QApplication::translate("MainWidget", "\347\211\210\346\234\254", 0, QApplication::UnicodeUTF8));
        serPort_RBAT_PsBtn->setText(QApplication::translate("MainWidget", "RBAT", 0, QApplication::UnicodeUTF8));
        serPort_SP_GpBox->setTitle(QApplication::translate("MainWidget", "\345\217\202\346\225\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        serPort_read_SP_PsBtn->setText(QApplication::translate("MainWidget", "\350\257\273\345\217\226", 0, QApplication::UnicodeUTF8));
        serPort_write_SP_PsBtn->setText(QApplication::translate("MainWidget", "\345\206\231\345\205\245", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem133 = serPort_SP_TabWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem133->setText(QApplication::translate("MainWidget", "\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem134 = serPort_SP_TabWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem134->setText(QApplication::translate("MainWidget", "\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem135 = serPort_SP_TabWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem135->setText(QApplication::translate("MainWidget", "\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem136 = serPort_SP_TabWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem136->setText(QApplication::translate("MainWidget", "\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem137 = serPort_SP_TabWidget->verticalHeaderItem(0);
        ___qtablewidgetitem137->setText(QApplication::translate("MainWidget", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem138 = serPort_SP_TabWidget->verticalHeaderItem(1);
        ___qtablewidgetitem138->setText(QApplication::translate("MainWidget", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem139 = serPort_SP_TabWidget->verticalHeaderItem(2);
        ___qtablewidgetitem139->setText(QApplication::translate("MainWidget", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem140 = serPort_SP_TabWidget->verticalHeaderItem(3);
        ___qtablewidgetitem140->setText(QApplication::translate("MainWidget", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem141 = serPort_SP_TabWidget->verticalHeaderItem(4);
        ___qtablewidgetitem141->setText(QApplication::translate("MainWidget", "5", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled3 = serPort_SP_TabWidget->isSortingEnabled();
        serPort_SP_TabWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem142 = serPort_SP_TabWidget->item(0, 0);
        ___qtablewidgetitem142->setText(QApplication::translate("MainWidget", "\351\207\207\346\240\267\347\202\271\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem143 = serPort_SP_TabWidget->item(0, 1);
        ___qtablewidgetitem143->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem144 = serPort_SP_TabWidget->item(0, 2);
        ___qtablewidgetitem144->setText(QApplication::translate("MainWidget", "\345\216\202\345\256\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem145 = serPort_SP_TabWidget->item(0, 3);
        ___qtablewidgetitem145->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem146 = serPort_SP_TabWidget->item(1, 0);
        ___qtablewidgetitem146->setText(QApplication::translate("MainWidget", "\345\205\205\347\224\265\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem147 = serPort_SP_TabWidget->item(1, 1);
        ___qtablewidgetitem147->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem148 = serPort_SP_TabWidget->item(1, 2);
        ___qtablewidgetitem148->setText(QApplication::translate("MainWidget", "\350\264\237\350\275\275\346\226\271\345\274\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem149 = serPort_SP_TabWidget->item(1, 3);
        ___qtablewidgetitem149->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem150 = serPort_SP_TabWidget->item(2, 0);
        ___qtablewidgetitem150->setText(QApplication::translate("MainWidget", "\347\224\265\345\216\213\351\207\217\347\250\213.V", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem151 = serPort_SP_TabWidget->item(2, 1);
        ___qtablewidgetitem151->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem152 = serPort_SP_TabWidget->item(2, 2);
        ___qtablewidgetitem152->setText(QApplication::translate("MainWidget", "\347\224\265\346\265\201\351\207\217\347\250\213.A", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem153 = serPort_SP_TabWidget->item(2, 3);
        ___qtablewidgetitem153->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem154 = serPort_SP_TabWidget->item(3, 0);
        ___qtablewidgetitem154->setText(QApplication::translate("MainWidget", "\350\204\211\345\206\262\345\270\270\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem155 = serPort_SP_TabWidget->item(3, 1);
        ___qtablewidgetitem155->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem156 = serPort_SP_TabWidget->item(3, 2);
        ___qtablewidgetitem156->setText(QApplication::translate("MainWidget", "\347\224\265\350\241\250\345\270\270\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem157 = serPort_SP_TabWidget->item(3, 3);
        ___qtablewidgetitem157->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem158 = serPort_SP_TabWidget->item(4, 0);
        ___qtablewidgetitem158->setText(QApplication::translate("MainWidget", "\347\224\265\350\264\271\345\215\225\344\273\267.\302\245", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem159 = serPort_SP_TabWidget->item(4, 1);
        ___qtablewidgetitem159->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem160 = serPort_SP_TabWidget->item(4, 2);
        ___qtablewidgetitem160->setText(QApplication::translate("MainWidget", "\346\265\213\351\207\217\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem161 = serPort_SP_TabWidget->item(4, 3);
        ___qtablewidgetitem161->setText(QApplication::translate("MainWidget", "0", 0, QApplication::UnicodeUTF8));
        serPort_SP_TabWidget->setSortingEnabled(__sortingEnabled3);

        serPort_Settings_GpBox->setTitle(QString());
        serPort_portName_Label->setText(QApplication::translate("MainWidget", "\347\253\257\345\217\243 :", 0, QApplication::UnicodeUTF8));
        serPort_parity_Label->setText(QApplication::translate("MainWidget", "\346\240\241\351\252\214\344\275\215 :", 0, QApplication::UnicodeUTF8));
        serPort_baudRate_Label->setText(QApplication::translate("MainWidget", "\346\263\242\347\211\271\347\216\207 :", 0, QApplication::UnicodeUTF8));
        serPort_dataBit_Label->setText(QApplication::translate("MainWidget", "\346\225\260\346\215\256\344\275\215 :", 0, QApplication::UnicodeUTF8));
        serPort_stopBit_Label->setText(QApplication::translate("MainWidget", "\345\201\234\346\255\242\344\275\215 :", 0, QApplication::UnicodeUTF8));
        serPort_flowCtl_Label->setText(QApplication::translate("MainWidget", "\346\265\201\346\216\247\345\210\266 :", 0, QApplication::UnicodeUTF8));
        serPort_ctl_GpBox->setTitle(QString());
        serPort_Open_PsBtn->setText(QApplication::translate("MainWidget", "\346\211\223\345\274\200\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        serPort_Close_PsBtn->setText(QApplication::translate("MainWidget", "\345\205\263\351\227\255\347\253\257\345\217\243", 0, QApplication::UnicodeUTF8));
        sideBar_right_Page->setProperty("class", QVariant(QApplication::translate("MainWidget", "SideBar", 0, QApplication::UnicodeUTF8)));
        sideBar_TlBtn_3->setText(QString());
        sideBar_TlBtn_2->setText(QString());
        sideBar_TlBtn_4->setText(QString());
        sideBar_TlBtn_1->setText(QString());
        start_PsBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
