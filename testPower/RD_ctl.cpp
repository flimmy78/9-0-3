#include "mainwidget.h"
#include "ui_mainwidget.h"

//待用
//
void MainWidget:: startRD()
{
    timeThreadTimer.run(RD);
}


void MainWidget:: slt_RD_update(pRDTYPE pRDTYPE_Temp)
{
#if 0
    ui->RS_charger_TblWidget->item(0,3)->setText(QString::number(pRDTYPE_Temp->VOLTAGEOUTMAX*0.1,'d',1)); //最高输出电压
    ui->RS_charger_TblWidget->item(0,5)->setText(QString::number(pRDTYPE_Temp->VOLTAGEOUTMIN*0.1,'d',1)); //最低输出电压

    ui->RS_charger_TblWidget->item(1,3)->setText(QString::number(pRDTYPE_Temp->CURRENCEOUTMAX*0.1,'d',1)); //最高输出电流：
    ui->RS_charger_TblWidget->item(1,5)->setText(QString::number(pRDTYPE_Temp->POWER,'d',1));          //输出总电能
#endif
}
