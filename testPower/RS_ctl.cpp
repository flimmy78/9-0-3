#include "mainwidget.h"
#include "ui_mainwidget.h"
/*******************************************************************************************
 *fun:读取状态
 *当机器判断到STATE状态为连接状态时表示机器开始检测，此时可以开始读取测量值，测量时间等信息。
 *当连接连接时用提示框提示连接，当连接断开时生成报表，提示是否进行保存。可以支持文件名修改。
*******************************************************************************************/
void MainWidget:: startRS()
{
    timeThreadTimer.run(RS);
}

void MainWidget:: slt_RS_update(pRSTYPE pRSTYPE_Temp)
{
    ui->RS_maxCur_Label->setText(QString::number(pRSTYPE_Temp->CURRENCEOUT,'d',1));

    if(pRSTYPE_Temp->STATE==0)
    {
       ui->BMS_cntState_Label->setText(QString::fromUtf8("断开"));
    }
    else
    {
       ui->BMS_cntState_Label->setText(QString::fromUtf8("链接"));
    }
}
