#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QTableWidgetItem>
#include <QFile>
#include <QMessageBox>

#include ".\debug\debughelper.h"

using namespace dropsend::debug;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->filesTable->setColumnWidth(0, 300);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_6_clicked()
{
    DebugHelper::fetchDebugUserInfo(ui->debugText);
}

void MainWindow::on_pushButton_5_clicked()
{
    DebugHelper::fetchDebugAccountInfo(ui->debugText);
}

void MainWindow::on_pushButton_8_clicked()
{
    DebugHelper::fetchDebugSentFilesInfo(ui->debugText);
}

void MainWindow::on_pushButton_9_clicked()
{
    DebugHelper::fetchDebugReceivedFilesInfo(ui->debugText);
}

void MainWindow::on_pushButton_2_clicked()
{    
    QString fileName = QFileDialog::getOpenFileName(this, "Open file", "", "All Files (*.*)");
    if (!fileName.isEmpty()) {
        int currentRowIndex = ui->filesTable->rowCount();
        ui->filesTable->insertRow(currentRowIndex);

        QTableWidgetItem *file_name_column = new QTableWidgetItem(fileName);
        ui->filesTable->setItem(currentRowIndex, 0, file_name_column);

        QFile* file = new QFile(fileName);
        float file_size = (file->size() / 1000.0);
        QTableWidgetItem *file_size_column = new QTableWidgetItem(QString::number(file_size) + "KB");
        ui->filesTable->setItem(currentRowIndex, 1, file_size_column);
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if (!validateForm()) {
        QMessageBox::warning(this, "DropSend Direct Qt Version", "Please, fill all fields");
        return;
    }
    while (ui->filesTable->rowCount() > 0) {
        ui->filesTable->removeRow(0);
    }
    ui->mailMessageText->clear();
    ui->mailReceiverEdit->clear();
    ui->mailSubjectEdit->clear();
    QMessageBox::information(this, "DropSend Direct Qt Version", "Files have been sent");
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "DropSend Direct Qt Version", "Not implemented yet");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "DropSend Direct Qt Version", "Not implemented yet");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "DropSend Direct Qt Version", "Not implemented yet");
}

bool MainWindow::validateForm() {
    bool hasReceiver = !ui->mailReceiverEdit->text().isEmpty();
    bool hasSubject = !ui->mailSubjectEdit->text().isEmpty();
    bool hasMessage = !ui->mailMessageText->document()->isEmpty();
    return (hasMessage && hasSubject && hasReceiver);
}
