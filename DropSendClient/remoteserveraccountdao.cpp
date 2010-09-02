#include "remoteserveraccountdao.h"

using namespace dropsend::data;

RemoteServerAccountDAO::RemoteServerAccountDAO()
{
}

Account* RemoteServerAccountDAO::getById(int id) const {
    return new Account();
}
