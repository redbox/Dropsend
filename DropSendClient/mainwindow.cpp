#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QTableWidgetItem>
#include <QFile>
#include <QMessageBox>

#include "dropsendservice.h"

using namespace dropsend::data;

dropsend::DropSendService* service = dropsend::DropSendServiceSingleton::getInstance();

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

// debug info
void MainWindow::on_pushButton_6_clicked()
{
    if (service->login("user", "password")) {
        ui->debugText->appendPlainText("currrent user :");
        ui->debugText->appendPlainText("{");
        ui->debugText->appendPlainText(
                "    first name: " + service->getCurrentClientModel()->getUser()->getFirstName());
        ui->debugText->appendPlainText(
                "    last name: " + service->getCurrentClientModel()->getUser()->getLastName());
        ui->debugText->appendPlainText(
                "    plan name: " + service->getCurrentClientModel()->getPlan()->getName());
        ui->debugText->appendPlainText(
                "    plan cost: " + QString::number(service->getCurrentClientModel()->getPlan()->getCost()));
        ui->debugText->appendPlainText("}");
    }
}

// debug info
void MainWindow::on_pushButton_8_clicked()
{
    if (service->login("user", "password")) {
        QList<SentFile*> sent_files = service->getCurrentClientModel()->getSentFiles();
        for (int i = 0; i < sent_files.size(); ++i) {
            SentFile* sent_file = sent_files.at(i);
            if (sent_file != NULL) {
                ui->debugText->appendPlainText("sent file :");
                ui->debugText->appendPlainText("{");
                ui->debugText->appendPlainText("    sender: " + QString::number(sent_file->getSender()));
                ui->debugText->appendPlainText("    recipientId: " + QString::number(sent_file->getRecipientId()));
                ui->debugText->appendPlainText("    name: " + sent_file->getName());
                ui->debugText->appendPlainText("    extension: " + sent_file->getExtension());
                ui->debugText->appendPlainText("}");
            }
        }
    }
}

// debug info
void MainWindow::on_pushButton_9_clicked()
{
    if (service->login("user", "password")) {
        QList<ReceivedFile*> received_files = service->getCurrentClientModel()->getReceivedFiles();
        for (int i = 0; i < received_files.size(); ++i) {
            ReceivedFile* received_file = received_files.at(i);
            if (received_file != NULL) {
                ui->debugText->appendPlainText("received file :");
                ui->debugText->appendPlainText("{");
                ui->debugText->appendPlainText("    sender: " + QString::number(received_file->getSender()));
                ui->debugText->appendPlainText("    name: " + received_file->getName());
                ui->debugText->appendPlainText("    extension: " + received_file->getExtension());
                ui->debugText->appendPlainText("}");
            }
        }
    }
}

//test
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
    while (ui->filesTable->rowCount() > 0) {
        ui->filesTable->removeRow(0);
    }
    QMessageBox::information(this, "DropsendClient", "Files has been sent");
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "DropsendClient", "Not implemented yet");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "DropsendClient", "Not implemented yet");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "DropsendClient", "Not implemented yet");
}
