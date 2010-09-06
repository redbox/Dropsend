#ifndef RECEIVEDFILE_H
#define RECEIVEDFILE_H

#include "filewithsender.h"

namespace dropsend {
    namespace data {
        class RemoteServerReceivedFileDAO;

        // received file model
        class ReceivedFile : public FileWithSender
        {
            friend class RemoteServerReceivedFileDAO;
        public:
            ReceivedFile();
        private:            
        };
    }
}

#endif // RECEIVEDFILE_H
