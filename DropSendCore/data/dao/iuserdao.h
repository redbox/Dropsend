#ifndef IUSERDAO_H
#define IUSERDAO_H

#include <QString>

#include "./../dao/ientitydao.h"

namespace dropsend {
    namespace data {
        namespace entities {
            class User;
        }
    }
}

namespace dropsend {
    namespace data {
        using namespace entities;
        namespace dao {
            /**
             * @interface IUserDAO.
             * @brief User's objects's DAO interface.
             * Provides functionality to obtain user's info data model.
             * Inherited from IEntityDAO.
             * @see dropsend::data::dao::IEntityDAO
             **/
            class IUserDAO : public IEntityDAO<User>
            {
            public:
                /**
                 * @brief Gets user instance by login and password.
                 * @param login User's login.
                 * @param password User's password.
                 * @returns User's data model instance or NULL, If specified login and password are incorrect.
                 **/
                virtual User* getByLoginAndPassword(const QString& login, const QString& password) const = 0;
            };
        }
    }
}

#endif // IUSERDAO_H
