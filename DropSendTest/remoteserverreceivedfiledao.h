#ifndef REMOTESERVERRECEIVEDFILEDAO_H
#define REMOTESERVERRECEIVEDFILEDAO_H

#include <QList>

#include "ireceivedfiledao.h"
#include "receivedfile.h"

namespace dropsend {
    namespace data {
        class RemoteServerReceivedFileDAO : public IReceivedFileDAO
        {
        public:
            RemoteServerReceivedFileDAO();
            QList<ReceivedFile*> getByUserId(int id) const;
            ReceivedFile* getById(int id) const;
        };
    }
}

#endif // REMOTESERVERRECEIVEDFILEDAO_H
