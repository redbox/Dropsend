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
        // full data model
        // TODO: lazy loading
        class Client
        {
        public:
            Client();
            ~Client();

            User* getUser() const;
            Account* getAccount() const;
            Plan* getPlan() const;

            QList<SentFile*> getSentFiles() const;
            QList<ReceivedFile*> getReceivedFiles() const;

            void update(User* user, Account* account, Plan* plan,
                   QList<SentFile*> sent_files,
                   QList<ReceivedFile*> received_files);
        private:
            User* user_;
            Account* account_;
            Plan* plan_;

            QList<SentFile*> sent_files_;
            QList<ReceivedFile*> received_files_;
        };
    }
}

#endif // CLIENT_H
