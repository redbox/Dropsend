#ifndef USER_H
#define USER_H

#include <QString>

#include "./../entitywithid.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /// Used for implementing "Abstract factory" design pattern.
                class RemoteServerUserDAO;
            }
        }
    }
}

namespace dropsend {
    namespace data {        
        namespace entities {
            /**
             * @class User
             * @brief Contains information about user. Service default user's model. Data model class.
             * @see dropsend::data::entities::EntityWithId
             **/
            class User : public EntityWithId
            {
                /**
                 * @brief Used for implementing "Abstract factory" design pattern.
                 **/
                friend class dao::remoteserver::RemoteServerUserDAO;
            public:
                /**
                 * @brief Initializes a new instance of the dropsend::data::entities::User class.
                 **/
                User();

                /**
                 * @brief Gets account's ID.
                 * @returns Account's ID.
                 **/
                int getAccountId() const;

                /**
                 * @brief Gets user's first name.
                 * @returns User's first name.
                 **/
                QString getFirstName() const;

                /**
                 * @brief Gets user's last name.
                 * @returns User's last name.
                 **/
                QString getLastName() const;

                /**
                 * @brief Checks whether user is owner of account.
                 * @returns True if user is owner of account, False otherwise.
                 **/
                bool isOwner() const;

                /**
                 * @brief Checks whether user has internal account.
                 * @returns True if user has internal account, False otherwise.
                 **/
                bool isInternal() const;
            private:
                /**
                 * @brief Account's ID
                 **/
                int account_id_;

                /**
                 * @brief User's first name.
                 **/
                QString first_name_;

                /**
                 * @brief User's last name.
                 **/
                QString last_name_;

                /**
                 * @brief Whether user is owner of account.
                 **/
                bool is_owner_;

                /**
                 * @brief Whether user has internal account.
                 **/
                bool is_internal_;
            };
        }
    }
}

#endif // USER_H
