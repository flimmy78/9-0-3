/******************************************************************************
*dec:右侧栏功能实现
*******************************************************************************/
#include "mainwidget.h"
#include "xl618.h"
#include "QMessageBox"
#include "QTimer"

 //将按钮放在一个list
void MainWidget::init_sideBar()
{
    sideBar_BtnList.append(ui->sideBar_TlBtn_1);
    sideBar_BtnList.append(ui->sideBar_TlBtn_2);
    sideBar_BtnList.append(ui->sideBar_TlBtn_3);
    sideBar_BtnList.append(ui->sideBar_TlBtn_4);

    foreach (QToolButton *b, sideBar_BtnList)
    {
        connect(b, SIGNAL(clicked()), this, SLOT(changeButtonStatus()));
    }

    ui->sideBar_TlBtn_1->click();
}


void MainWidget::on_start_PsBtn_clicked(bool checked)
{
    if(!checked)
    {
      ui->sideBar_right_Page->setDisabled(false);
      timeThreadTimer.stop();
      elapseTimer->stop();
      ME_phasorPaint->isUpdatePhasor=false;//刷新  界面
      //ME_phasorPaint->update();

      return;
    }
    switch(ui->main_SkWidget->currentIndex())
    {

        case 0:
                clean_main_SkWidget_1();//清除界面1的数据
//               startRD();

                startRS();//读状态消息,停止显示保存数据
                startES();//电能误差
                startME(); //测量值
                startELAPSETIME();
        break;

        case 1:
                // startRRF();
                //startWAVE();
                //ripple
                //startRIPPLE();
                startHAR();//谐波
        break;
        default:
        break;
    }
     ui->sideBar_right_Page->setDisabled(true);
}
/**************************************************************
// 用按钮的current属性来控制被按下按钮的外观.
// 当按钮被按下时, 设置其current属性为true,
// 其他按钮的current属性为false, 为了更新按钮的外观.
*****************************************************************/

void MainWidget::changeButtonStatus() {

    foreach (QToolButton *b, sideBar_BtnList)
    {
        b->setProperty("current", "false");
        b->setStyleSheet(""); // 刷新按钮的样式
    }

    QToolButton *source = qobject_cast<QToolButton *>(sender());
    source->setProperty("current", "true");
    source->setStyleSheet("");

    if(source==ui->sideBar_TlBtn_1)
    {
       // ui->RS_charger_TblWidget->horizontalHeader()->setResizeMode( QHeaderView::Stretch);
        ui->ES_standard_TblWidget->horizontalHeader()->setResizeMode( QHeaderView::Stretch);
        ui->main_SkWidget->setCurrentIndex(0);
        ui->start_PsBtn->setEnabled(true);
    }
    if(source==ui->sideBar_TlBtn_2)
    {
        ui->main_SkWidget->setCurrentIndex(1);
        ui->start_PsBtn->setEnabled(true);
         set_TblWdiget_Header( ui->RSMV_Harmonic_TblWidget ,true,false);
    }
    if(source==ui->sideBar_TlBtn_3)
    {
        ui->main_SkWidget->setCurrentIndex(2);
        ui->start_PsBtn->setEnabled(true);
    }
    if(source==ui->sideBar_TlBtn_4)
    {
        ui->main_SkWidget->setCurrentIndex(3);
        ui->start_PsBtn->setEnabled(false);
    }

}
