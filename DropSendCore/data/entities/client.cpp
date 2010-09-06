#include "client.h"

using namespace dropsend::data::entities;

Client::Client() {

}

void Client::update(User* user, Account* account, Plan* plan,
       QList<SentFile*> sent_files,
       QList<ReceivedFile*> received_files) {
    user_ = user;
    account_ = account;
    plan_ = plan;
    sent_files_ = sent_files;
    received_files_ = received_files;
}


User* Client::getUser() const {
    return user_;
}

Account* Client::getAccount() const {
    return account_;
}

Plan* Client::getPlan() const {
    return plan_;
}

QList<SentFile*> Client::getSentFiles() const {
    return sent_files_;
}

QList<ReceivedFile*> Client::getReceivedFiles() const {
    return received_files_;
}

Client::~Client() {
    if (user_ != NULL) {
        delete user_;
    }
    if (account_ != NULL) {
        delete account_;
    }
    if (plan_ != NULL) {
        delete plan_;
    }
    for (int i = 0; i < sent_files_.size(); ++i) {
        SentFile* sent_file = sent_files_.at(i);
        if (sent_file != NULL) {
            delete sent_file;
        }
    }
    sent_files_.clear();
    sent_files_.~QList();

    for (int i = 0; i < received_files_.size(); ++i) {
        ReceivedFile* received_file = received_files_.at(i);
        if (received_file != NULL) {
            delete received_file;
        }
    }
    received_files_.clear();
    received_files_.~QList();
}
