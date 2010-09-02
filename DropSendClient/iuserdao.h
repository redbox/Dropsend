#ifndef IUSERDAO_H
#define IUSERDAO_H

#include <QString>

#include "ientitydao.h"

namespace dropsend {
    namespace data {
        class User;

        // dropbox's user dao interface
        class IUserDAO : public IEntityDAO<User>
        {
        public:
            virtual User* getByLoginAndPassword(const QString& login, const QString& password) const = 0;
        };
    }
}

#endif // IUSERDAO_H
