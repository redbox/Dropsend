#ifndef IACCOUNTDAO_H
#define IACCOUNTDAO_H

#include "iuserrelateddao.h"
#include "account.h"

namespace dropsend {
    namespace data {

        // account dao interface
        class IAccountDAO : public IEntityDAO<Account>
        {
        };
    }
}

#endif // IACCOUNTDAO_H
