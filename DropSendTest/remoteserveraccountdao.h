#ifndef REMOTESERVERACCOUNTDAO_H
#define REMOTESERVERACCOUNTDAO_H

#include <QList>

#include "iaccountdao.h"
#include "account.h"

namespace dropsend {
    namespace data {
        class RemoteServerAccountDAO : public IAccountDAO
        {
        public:
            RemoteServerAccountDAO();

            Account* getById(int id) const;
        };
    }
}

#endif // REMOTESERVERACCOUNTDAO_H
