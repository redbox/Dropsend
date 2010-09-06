#ifndef DROPSENDSERVICE_H
#define DROPSENDSERVICE_H

#include <QString>
#include <QList>

#include "singleton.h"
#include "remoteserverentityfactory.h"

#include "client.h"

namespace dropsend {
    using namespace data;

    // dropsend server's API facade
    class DropSendService
    {
    public:
        DropSendService();

        // try to login here
        bool login(const QString& login, const QString& password);
        Client* getCurrentClientModel() const;

        Account* getAccountByUser(int user_id) const;
        Plan* getPlanByUser(int user_id) const;
        QList<ReceivedFile*> getReceivedFilesByUser(int user_id) const;
        QList<SentFile*> getSentFilesByUser(int user_id) const;

    private:
        AbstractEntityFactory* entity_factory_;
        Client* client_model_;
    };

    typedef Singleton<DropSendService> DropSendServiceSingleton;
}

#endif // DROPSENDSERVICE_H
