#include "mainwidget.h"
#include "ui_mainwidget.h"

void MainWidget::init_RSMV_phasor()
{

#if 1
    //ui->ME_energy_GpBox
    ME_phasorPaint = new PhasorPaint(ui->ME_phasor_Frame);//phase
    ME_phasorPaint->setGeometry(QRect(0,0,480,360));
    //ui->RSMV_Phasor_TblWidget->setColumnWidth(0,85);
    //ui->RSMV_Phasor_TblWidget->setColumnWidth(1,153);

    ME_phasorPaint->UaRotate=0;
    ME_phasorPaint->UbRotate=0;//5
    ME_phasorPaint->UcRotate=0;//6

    ME_phasorPaint->IaRotate=0;
    ME_phasorPaint->IbRotate=0;//
    ME_phasorPaint->IcRotate=0;//

    ME_phasorPaint->isUpdatePhasor=true;//刷新  界面
    //ME_phasorPaint->update();
#endif
}

