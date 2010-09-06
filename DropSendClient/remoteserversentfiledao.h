#ifndef REMOTESERVERSENTFILEDAO_H
#define REMOTESERVERSENTFILEDAO_H

#include "isentfiledao.h"
#include "sentfile.h"

namespace dropsend {
    namespace data {
        // remote server's DAO implementation for retrieving information
        class RemoteServerSentFileDAO : public ISentFileDAO
        {
        public:
            RemoteServerSentFileDAO();
            QList<SentFile*> getByUserId(int id) const;
            SentFile* getById(int id) const;
        };
    }
}

#endif // REMOTESERVERSENTFILEDAO_H
