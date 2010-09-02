#ifndef USER_H
#define USER_H

#include <QString>

#include "entitywithid.h"

namespace dropsend {
    namespace data {
        class RemoteServerUserDAO;
        class User : public EntityWithId
        {            
            friend class RemoteServerUserDAO;
        public:
            User();
            int getAccountId() const;

            QString getFirstName() const;
            QString getLastName() const;

            bool isOwner() const;
            bool isInternal() const;
        private:
            int account_id_;

            QString first_name_;
            QString last_name_;

            bool is_owner_;
            bool is_internal_;
        };
    }
}

#endif // USER_H
