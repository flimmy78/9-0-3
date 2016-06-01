#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "testPower/RSMV_option.h"

/*******************************************************************************************
 *fun:读取测量值ME,开头需要使能电能脉冲输入.硬件底层Bug.
*******************************************************************************************/

void MainWidget:: startME()
{
    QString Message ="EPI\n\rSTATE;1\n\r";

    if(timeThreadTimer.transmitsSimply((UINT8*)Message.toLatin1().data())!=ERR_RIGHT )
    {
         show_MsBox(QString::fromUtf8("脉冲电能输入使能失败"),3000);
         return;
    }

    ME_phasorPaint->isUpdatePhasor=true;//刷新  界面
    ME_phasorPaint->update();
    timeThreadTimer.run(ME);
}


void MainWidget::slt_ME_update(pMETYPE  pMETYPE_Temp)
{
    //qDebug()<<QString::number(pMETYPE_Temp->Price);
    if(ui->main_SkWidget->currentIndex()==0)
    {
        ui->ES_standard_TblWidget->item(0,1)->setText(QString::number(pMETYPE_Temp->U1,'d',2));
        ui->ES_standard_TblWidget->item(0,5)->setText(QString::number(pMETYPE_Temp->I1,'d',2));
        ui->ES_standard_TblWidget->item(0,7)->setText(QString::number(pMETYPE_Temp->Phase/60.0000,'d',2));

        ui->ES_standard_TblWidget->item(3,1)->setText(QString::number(pMETYPE_Temp->P1,'d',2));
        ui->ES_standard_TblWidget->item(3,3)->setText(QString::number(pMETYPE_Temp->U1Freq,'d',2));

        ui->ME_time_std_LnEdit->setText(QString::number(pMETYPE_Temp->Time,'d',2));
        ui->ME_energy_std_LnEdit->setText(QString::number(pMETYPE_Temp->W,'d',2));//标准电能
        ui->ME_energy_testEqpt_LnEdit->setText(QString::number(pMETYPE_Temp->WC,'d',2));//被检电能（0表示没有脉冲输入，需手动输）

        ME_phasorPaint->UaRotate =0;
        ME_phasorPaint->UbRotate =0;
        ME_phasorPaint->UcRotate =0;
        ME_phasorPaint->IbRotate =0;
        ME_phasorPaint->IcRotate =0;
        ME_phasorPaint->IaRotate =pMETYPE_Temp->Phase/60.0000;
        ME_phasorPaint->update();
     }
    else
    {
        ui->RSMV_harmonic_rms_TblWidget->item(0,1)->setText(QString::number(pMETYPE_Temp->U1,'d',2));
        ui->RSMV_harmonic_rms_TblWidget->item(0,3)->setText(QString::number(pMETYPE_Temp->I1,'d',2));
        ui->RSMV_harmonic_rms_TblWidget->item(3,1)->setText(QString::number(pMETYPE_Temp->U1Freq,'d',2));
    }

   //timeThreadTimer.mutexUpdate.unlock();
}

//电能误差计算
void MainWidget::on_ME_energy_testEqpt_LnEdit_textChanged(const QString &arg1)
{
    float f_Std;
    f_Std = ui->ME_energy_std_LnEdit->text().toFloat(0);
    ui->ES_PE_LnEdit->setText(QString::number((arg1.toFloat(0) - f_Std)/(f_Std*0.01)));
}

//时钟误差计算
void MainWidget::on_ME_time_testEqpt_LnEdit_textChanged(const QString &arg1)
{
    float f_Std;
    f_Std = ui->ME_time_std_LnEdit->text().toFloat(0);
    ui->ES_TE_LnEdit->setText(QString::number((arg1.toFloat(0) - f_Std)/(f_Std*0.01)));
}

