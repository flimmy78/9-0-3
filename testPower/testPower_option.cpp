#include "mainwidget.h"
#include "ui_mainwidget.h"

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
