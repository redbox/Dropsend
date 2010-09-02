#ifndef SENTFILE_H
#define SENTFILE_H

#include <QString>

#include "filewithsender.h"

namespace dropsend {
    namespace data {
        class RemoteServerSentFileDAO;
        class SentFile : public FileWithSender
        {
            friend class RemoteServerSentFileDAO;
        public:
            SentFile();
            int getRecipientId() const;
        private:
            int recipient_id_;
        };
   }
}
#endif // SENTFILE_H
