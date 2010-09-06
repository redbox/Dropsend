#ifndef ACCOUNT_H
#define ACCOUNT_H

#include ".\..\entitywithid.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /// Used for implementing "Abstract factory" design pattern.
                class RemoteServerAccountDAO;
            }
        }
    }
}

namespace dropsend {
    namespace data {
        namespace entities {
            /**
             * @class Account
             * @brief Contains information about user's account. Data model class. Inherited from EntityWithId.
             * @see dropsend::data::entities::EntityWithId
             **/
            class Account : public EntityWithId
            {
                /**
                 * @brief Used for implementing "Abstract factory" design pattern.
                 **/
                friend class RemoteServerAccountDAO;
            public:
                /**
                 * @brief Initializes a new instance of the dropsend::data::entities::Account class.
                 **/
                Account();

                /**
                 * @brief Gets plan's ID.
                 **/
                int getPlanId() const;
            private:
                /**
                 * @brief Plan's ID.
                 **/
                int plan_id_;
            };
        }
    }
}

#endif // ACCOUNT_H
