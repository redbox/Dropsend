#ifndef IACCOUNTDAO_H
#define IACCOUNTDAO_H

#include "iuserrelateddao.h"
#include "./../entities/account.h"

namespace dropsend {
    namespace data {
        namespace dao {
            using namespace entities;
            /**
             * @interface IEntityDAO
             * @brief Contains methods to obtain information about user's account. Inherited from IEntityDAO.
             * @see dropsend::data::dao::IEntityDAO
             * @see dropsend::data::entities::Account
             **/
            class IAccountDAO : public IEntityDAO<Account>
            {
            };
        }
    }
}

#endif // IACCOUNTDAO_H
