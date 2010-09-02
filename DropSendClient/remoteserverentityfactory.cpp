#include "remoteserverentityfactory.h"

#include "remoteserveruserdao.h"
#include "remoteserverreceivedfiledao.h"
#include "remoteserversentfiledao.h"
#include "remoteserveraccountdao.h"
#include "remoteserverplandao.h"

using namespace dropsend::data;

RemoteServerEntityFactory::RemoteServerEntityFactory() : user_DAO_(NULL), received_file_DAO_(NULL),
    sent_file_DAO_(NULL), account_DAO_(NULL), plan_DAO_(NULL)
{
    // open connection...
}

IUserDAO* RemoteServerEntityFactory::getUserDAO() {
    if (user_DAO_ == NULL) {
        user_DAO_ = new RemoteServerUserDAO();
    }
    return user_DAO_;
}

IReceivedFileDAO* RemoteServerEntityFactory::getReceivedFileDAO() {
    if (received_file_DAO_ == NULL) {
        received_file_DAO_ = new RemoteServerReceivedFileDAO();
    }
    return received_file_DAO_;
}

ISentFileDAO* RemoteServerEntityFactory::getSentFileDAO() {
    if (sent_file_DAO_ == NULL) {
        sent_file_DAO_ = new RemoteServerSentFileDAO();
    }
    return new RemoteServerSentFileDAO();
}

IAccountDAO* RemoteServerEntityFactory::getAccountDAO() {
    if (account_DAO_ == NULL) {
        account_DAO_ = new RemoteServerAccountDAO();
    }
    return new RemoteServerAccountDAO();
}

IPlanDAO* RemoteServerEntityFactory::getPlanDAO() {
    if (plan_DAO_ == NULL) {
        plan_DAO_ = new RemoteServerPlanDAO();
    }
    return new RemoteServerPlanDAO();
}
