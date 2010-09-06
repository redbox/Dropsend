#ifndef REMOTESERVERACCOUNTDAO_H
#define REMOTESERVERACCOUNTDAO_H

#include <QList>

#include "./../iaccountdao.h"
#include "./../../entities/account.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /**
                 * @class RemoteServerAccountDAO
                 * @brief DAO which is used to obtain information from remote service.
                 * Contains API requests. Implements IAccountDAO.
                 * @see dropsend::data::dao::IAccountDAO
                 **/
                class RemoteServerAccountDAO : public IAccountDAO
                {
                public:
                    /**
                     * @brief Initializes a new instance of the dropsend::data::dao::remoteserver::RemoteServerAccountDAO class.
                     **/
                    RemoteServerAccountDAO();

                    //Implements dropsend::data::dao::IEntityDAO<Account>.
                    Account* getById(int id) const;
                };
            }
        }
    }
}

#endif // REMOTESERVERACCOUNTDAO_H
