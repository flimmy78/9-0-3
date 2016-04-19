#include "mainwidget.h"
#include "ui_mainwidget.h"



void MainWidget:: slt_RS_update(pRSTYPE pRSTYPE_Temp)
{
   // qDebug()<<"11111111111slt_RS_update";
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
