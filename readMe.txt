//电能误差计算
void MainWidget::on_ME_energy_std_LnEdit_textChanged(const QString &arg1)
{
    float f_Std;
    f_Std = ui->ME_energy_testEqpt_LnEdit->text().toFloat(0);
    ui->ES_PE_LnEdit->setText(QString::number((f_Std-arg1.toFloat(0) )/(arg1.toFloat(0)*0.01)));
}

//时钟误差计算
void MainWidget::on_ME_time_std_LnEdit_textChanged(const QString &arg1)
{
    float f_Std;
    f_Std = ui->ME_time_testEqpt_LnEdit->text().toFloat(0);
    ui->ES_TE_LnEdit->setText(QString::number((f_Std-arg1.toFloat(0))/(arg1.toFloat(0)*0.01)));
}
