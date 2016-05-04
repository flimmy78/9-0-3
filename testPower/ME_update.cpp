/******************************************************************************
*界面 : 有效值
*功能 : 9-1，9-2 接收数据
*人员 : jingzhesiye@163.com
*时间 : 2013.9.25
*******************************************************************************/

#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "testPower/RSMV_option.h"

//从线程源，接收报文同时刷性界面

void MainWidget::slt_ME_update(pMETYPE  pMETYPE_Temp)
{
    //qDebug()<<QString::number(pMETYPE_Temp->Price);
    float f_price=0;
    ui->ES_standard_TblWidget->item(0,1)->setText(QString::number(pMETYPE_Temp->U1,'d',2));
    ui->ES_standard_TblWidget->item(0,5)->setText(QString::number(pMETYPE_Temp->I1,'d',2));
    ui->ES_standard_TblWidget->item(0,7)->setText(QString::number(pMETYPE_Temp->Phase/60.0000,'d',2));

    ui->ES_standard_TblWidget->item(3,3)->setText(QString::number(pMETYPE_Temp->U1Freq,'d',2));
    ui->ES_standard_TblWidget->item(3,5)->setText(QString::number(pMETYPE_Temp->Time,'d',2));

    ui->ME_energy_std_LnEdit->setText(QString::number(pMETYPE_Temp->W,'d',2));//标准电能
    ui->ME_energy_object_LnEdit->setText(QString::number(pMETYPE_Temp->WC,'d',2));//被检电能（0表示没有脉冲输入，需手动输）

//  ui->ES_standard_TblWidget->item(1,7)->setText(QString::number(f_price));//价格

     ME_phasorPaint->UaRotate =0;
     ME_phasorPaint->UbRotate =0;
     ME_phasorPaint->UcRotate =0;
     ME_phasorPaint->IbRotate =0;
     ME_phasorPaint->IcRotate =0;
     ME_phasorPaint->IaRotate =pMETYPE_Temp->Phase/60.0000;
     ME_phasorPaint->update();
   //timeThreadTimer.mutexUpdate.unlock();
}

//清空数据
void MainWidget::clean_main_SkWidget_1()
{
    for(int i =0;i<3;i++)
    {
        ui->ES_standard_TblWidget->item(0,1)->setText("0");
        ui->ES_standard_TblWidget->item(0,3)->setText("0");
        ui->ES_standard_TblWidget->item(0,5)->setText("0");
        ui->ES_standard_TblWidget->item(0,7)->setText("0");
        ui->ES_standard_TblWidget->item(0,9)->setText("0");
    }
    ui->ES_standard_TblWidget->item(3,1)->setText("0");
    ui->ES_standard_TblWidget->item(3,3)->setText("0");

    ui->ES_wave_QwtPlot->replot();

    ESTD_PolygonF.clear();
    RSMV.wave_ESTD_curve->setSamples( ESTD_PolygonF );
    ui->ES_PE_QwtPlot->replot();

    ui->RS_maxCur_Label->setText("0");
    ui->BMS_cntState_Label->setText("断开");
}
