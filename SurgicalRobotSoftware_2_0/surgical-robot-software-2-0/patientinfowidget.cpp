#include "patientinfowidget.h"
#include <QListWidget>
#include <QComboBox>
#include "ui_patientinfowidget.h"
void setInputStyle(QLineEdit *lineEdit){
    lineEdit->setFixedSize(300,40);
    lineEdit->setAlignment(Qt::AlignCenter);
}


void setListInputStyle(QComboBox *comboBox, QStringList items, const QString& styleSheet){
    QListWidget *listWidget = new QListWidget();
    for(int i = 0;i < items.count();++i)
    {
        QListWidgetItem *item = new QListWidgetItem(items.at(i));
        item->setTextAlignment(Qt::AlignCenter);
        listWidget->addItem(item);
    }

    comboBox->setModel(listWidget->model());
    comboBox->setView(listWidget);

    QLineEdit *lineEdit = new QLineEdit;
    lineEdit->setReadOnly(true);
    lineEdit->setAlignment(Qt::AlignCenter);
    lineEdit->setStyleSheet(styleSheet);
    comboBox->setLineEdit(lineEdit);
    comboBox->setFixedSize(300,40);
}


PatientInfoWidget::PatientInfoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PatientInfoWidget)
{
    ui->setupUi(this);
    ui->bellIcon->setFixedSize(40,40);
    setInputStyle(ui->patientAgeInput);
    setInputStyle(ui->patientNameInput);
    setInputStyle(ui->patientNumInput);
    setListInputStyle(ui->patientGenderInput,{"男","女"},ui->patientNumInput->styleSheet());
    setListInputStyle(ui->surgicalTypeInput,{"脊柱"},ui->patientNumInput->styleSheet());
    ui->backButton->setFixedSize(100,30);
    ui->confirmButton->setFixedSize(100,30);


}

PatientInfoWidget::~PatientInfoWidget()
{
    delete ui;
}

void PatientInfoWidget::on_confirmButton_clicked()
{
    emit confirmButton_pressed();
}

