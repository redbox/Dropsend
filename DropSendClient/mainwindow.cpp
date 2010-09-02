#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dropsendservice.h"

using namespace dropsend::data;

dropsend::DropSendService* service = dropsend::DropSendServiceSingleton::getInstance();

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

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
