#include "remoteserveraccountdao.h"

using namespace dropsend::data::entities;
using namespace dropsend::data::dao::remoteserver;

RemoteServerAccountDAO::RemoteServerAccountDAO()
{
}

Account* RemoteServerAccountDAO::getById(int id) const {
    return new Account();
}
