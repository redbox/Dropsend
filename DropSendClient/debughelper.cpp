#include "debughelper.h"
#include "dropsendservice.h"

using namespace dropsend::debug;

DebugHelper::DebugHelper()
{
}

void DebugHelper::fetchDebugUserInfo(QPlainTextEdit* debugPlainTextEdit) {
    dropsend::DropSendService* service = dropsend::DropSendServiceSingleton::getInstance();
    if (service->login("user", "password")) {
        debugPlainTextEdit->appendPlainText("current user :");
        debugPlainTextEdit->appendPlainText("{");
        debugPlainTextEdit->appendPlainText(
                "    first_name: " + service->getCurrentClientModel()->getUser()->getFirstName());
        debugPlainTextEdit->appendPlainText(
                "    last_name: " + service->getCurrentClientModel()->getUser()->getLastName());
        debugPlainTextEdit->appendPlainText(
                "    is_internal: " + QString::number(service->getCurrentClientModel()->getUser()->isInternal()));
        debugPlainTextEdit->appendPlainText(
                "    is_owner: " + QString::number(service->getCurrentClientModel()->getUser()->isOwner()));
        debugPlainTextEdit->appendPlainText("}");
    }
}

void DebugHelper::fetchDebugAccountInfo(QPlainTextEdit* debugPlainTextEdit) {
    dropsend::DropSendService* service = dropsend::DropSendServiceSingleton::getInstance();
    if (service->login("user", "password")) {
        debugPlainTextEdit->appendPlainText("currrent user's account:");
        debugPlainTextEdit->appendPlainText("{");
        debugPlainTextEdit->appendPlainText(
                "    account_id: " + service->getCurrentClientModel()->getAccount()->getId());
        debugPlainTextEdit->appendPlainText(
                "    plan_id: " + QString::number(service->getCurrentClientModel()->getPlan()->getId()));
        debugPlainTextEdit->appendPlainText(
                "    plan_name: " + service->getCurrentClientModel()->getPlan()->getName());
        debugPlainTextEdit->appendPlainText(
                "    plan_cost: " + QString::number(service->getCurrentClientModel()->getPlan()->getCost()));
        debugPlainTextEdit->appendPlainText("}");
    }
}

void DebugHelper::fetchDebugSentFilesInfo(QPlainTextEdit* debugPlainTextEdit) {
    dropsend::DropSendService* service = dropsend::DropSendServiceSingleton::getInstance();
    if (service->login("user", "password")) {
        QList<SentFile*> sent_files = service->getCurrentClientModel()->getSentFiles();
        for (int i = 0; i < sent_files.size(); ++i) {
            SentFile* sent_file = sent_files.at(i);
            if (sent_file != NULL) {
                debugPlainTextEdit->appendPlainText("sent file :");
                debugPlainTextEdit->appendPlainText("{");
                debugPlainTextEdit->appendPlainText("    sender: " + QString::number(sent_file->getSender()));
                debugPlainTextEdit->appendPlainText("    recipientId: " + QString::number(sent_file->getRecipientId()));
                debugPlainTextEdit->appendPlainText("    name: " + sent_file->getName());
                debugPlainTextEdit->appendPlainText("    extension: " + sent_file->getExtension());
                debugPlainTextEdit->appendPlainText("}");
            }
        }
    }
}

void DebugHelper::fetchDebugReceivedFilesInfo(QPlainTextEdit* debugPlainTextEdit) {
    dropsend::DropSendService* service = dropsend::DropSendServiceSingleton::getInstance();
    if (service->login("user", "password")) {
        QList<ReceivedFile*> received_files = service->getCurrentClientModel()->getReceivedFiles();
        for (int i = 0; i < received_files.size(); ++i) {
            ReceivedFile* received_file = received_files.at(i);
            if (received_file != NULL) {
                debugPlainTextEdit->appendPlainText("received file :");
                debugPlainTextEdit->appendPlainText("{");
                debugPlainTextEdit->appendPlainText("    sender: " + QString::number(received_file->getSender()));
                debugPlainTextEdit->appendPlainText("    name: " + received_file->getName());
                debugPlainTextEdit->appendPlainText("    extension: " + received_file->getExtension());
                debugPlainTextEdit->appendPlainText("}");
            }
        }
    }

}
