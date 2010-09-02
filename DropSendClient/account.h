#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "entitywithid.h"

namespace dropsend {
    namespace data {
        class RemoteServerAccountDAO;

        // dropsend account info model
        class Account : public EntityWithId
        {
            friend class RemoteServerAccountDAO;
        public:
            Account();
            int getPlanId() const;
        private:
            int plan_id_;
        };
    }
}

#endif // ACCOUNT_H
