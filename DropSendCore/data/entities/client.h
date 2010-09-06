#ifndef CLIENT_H
#define CLIENT_H

#include <QList>

#include "user.h"
#include "account.h"
#include "plan.h"
#include "sentfile.h"
#include "receivedfile.h"

namespace dropsend {
    namespace data {
        namespace entities {
            /**
             * @class Client
             * @brief Contains all inforamtion about user: users info, account, plan, user's files etc.
             * Use like facade which provides user's data.
             * !TODO: lazy loading.
             */
            class Client
            {
            public:
                /**
                 * @brief Initializes a new instance of the dropsend::data::entities::Client class.
                 **/
                Client();

                /**
                 * @brief Class destructor.
                 **/
                ~Client();

                /**
                 * @brief Gets user's info.
                 * @returns User's info or NULL, if no user's info is specified.
                 * @see dropsend::data::entities::User
                 **/
                User* getUser() const;

                /**
                 * @brief Gets user's account info.
                 * @returns User's account info or NULL, if no user's account is specified.
                 * @see dropsend::data::entities::Account
                 **/
                Account* getAccount() const;

                /**
                 * @brief Gets user's plan info
                 * @returns User's plan or NULL, if no user's plan is specified.
                 * @see dropsend::data::entities::Plan
                 **/
                Plan* getPlan() const;


                QList<SentFile*> getSentFiles() const;

                /**
                 * @brief Gets the list of user's received files.
                 * @return QList containing user's received files.
                 * @see dropsend::data::entities::ReceivedFile
                 **/
                QList<ReceivedFile*> getReceivedFiles() const;

                /**
                 * @brief Gets the list of user's sent files.
                 * @return QList containing user's sent files.
                 * @see dropsend::data::entities::SentFile
                 **/
                void update(User* user, Account* account, Plan* plan,
                       QList<SentFile*> sent_files,
                       QList<ReceivedFile*> received_files);
            private:
                /**
                 * @brief User's info.
                 **/
                User* user_;

                /**
                 * @brief Account's info.
                 **/
                Account* account_;

                /**
                 * @brief Plan's info.
                 **/
                Plan* plan_;

                /**
                 * @brief list of user's sent files.
                 **/
                QList<SentFile*> sent_files_;

                /**
                 * @brief list of user's received files.
                 **/
                QList<ReceivedFile*> received_files_;
            };
        }
    }
}
#endif // CLIENT_H
