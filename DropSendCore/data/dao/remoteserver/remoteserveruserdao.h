#ifndef REMOTESERVERUSERDAO_H
#define REMOTESERVERUSERDAO_H

#include ".\..\iuserdao.h"
#include ".\..\..\entities\user.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /**
                 * @class RemoteServerUserDAO
                 * @brief DAO which is used to obtain information from remote service.
                 * Contains API requests. Implements IUserDAO.
                 * @see dropsend::data::dao::IUserDAO
                 **/
                class RemoteServerUserDAO : public IUserDAO
                {
                public:
                    /**
                     * @brief Initializes a new instance of the dropsend::data::dao::remoteserver::RemoteServerUserDAO class.
                     **/
                    RemoteServerUserDAO();

                    // Implements dropsend::data::dao::IEntityDAO<User>.
                    User* getById(int id) const;

                    //Implements dropsend::data::dao::IUserDAO.
                    User* getByLoginAndPassword(const QString& login, const QString& password) const;
                };
            }
        }
    }
}

#endif // REMOTESERVERUSERDAO_H
