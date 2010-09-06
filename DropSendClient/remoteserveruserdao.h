#ifndef REMOTESERVERUSERDAO_H
#define REMOTESERVERUSERDAO_H

#include "iuserdao.h"
#include "user.h"

namespace dropsend {
    namespace data {
        // remote server's DAO implementation for retrieving information
        class RemoteServerUserDAO : public IUserDAO
        {
        public:
            RemoteServerUserDAO();

            User* getById(int id) const;
            User* getByLoginAndPassword(const QString& login, const QString& password) const;
        };
    }
}

#endif // REMOTESERVERUSERDAO_H