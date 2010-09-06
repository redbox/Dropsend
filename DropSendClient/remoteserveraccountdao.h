#ifndef REMOTESERVERACCOUNTDAO_H
#define REMOTESERVERACCOUNTDAO_H

#include <QList>

#include "iaccountdao.h"
#include "account.h"

namespace dropsend {
    namespace data {

        // remote server's DAO implementation for retrieving account information
        class RemoteServerAccountDAO : public IAccountDAO
        {
        public:
            RemoteServerAccountDAO();

            Account* getById(int id) const;
        };
    }
}

#endif // REMOTESERVERACCOUNTDAO_H
