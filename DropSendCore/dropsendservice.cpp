#include "dropsendservice.h"

#include "./data/entities/user.h"

using namespace dropsend;
using namespace dropsend::data;

DropSendService::DropSendService() : client_model_(NULL)
{
    entity_factory_ = AbstractEntityFactory::getDAOFactory(
            AbstractEntityFactory::REMOTE_SERVER_FACTORY);
    entity_factory_->getDAOFactory(1);
}

bool DropSendService::login(const QString& login, const QString& password) {
    User* user = entity_factory_->getUserDAO()->getByLoginAndPassword(login, password);
    if (user == NULL) {
        return false;
    }
    Account* account = entity_factory_->getAccountDAO()->getById(user->getAccountId());
    Plan* plan = entity_factory_->getPlanDAO()->getById(account->getPlanId());
    QList<ReceivedFile*> received_files = entity_factory_->getReceivedFileDAO()->getByUserId(user->getId());
    QList<SentFile*> sent_files = entity_factory_->getSentFileDAO()->getByUserId(user->getId());

    client_model_ = new Client();
    client_model_->update(user, account, plan, sent_files, received_files);
    return true;
}

Client* DropSendService::getCurrentClientModel() const{
    return client_model_;
}

Account* DropSendService::getAccountByUser(int user_id) const {
    User* user = entity_factory_->getUserDAO()->getById(user_id);
    int account_id = user->getAccountId();
    delete user;
    return entity_factory_->getAccountDAO()->getById(account_id);
}

Plan* DropSendService::getPlanByUser(int user_id) const {
    Account* account = getAccountByUser(user_id);
    int plan_id = account->getPlanId();
    delete account;
    return entity_factory_->getPlanDAO()->getById(plan_id);
}

QList<ReceivedFile*> DropSendService::getReceivedFilesByUser(int user_id) const {
    return entity_factory_->getReceivedFileDAO()->getByUserId(user_id);
}

QList<SentFile*> DropSendService::getSentFilesByUser(int user_id) const {
    return entity_factory_->getSentFileDAO()->getByUserId(user_id);
}

