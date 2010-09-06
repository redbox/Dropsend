#ifndef FILEWITHSENDER_H
#define FILEWITHSENDER_H

#include "file.h"

namespace dropsend {
    namespace data {

        // base class for file entities used by server
        class FileWithSender : public File
        {
        public:
            FileWithSender();
            int getSender() const;
        protected:
            int sender_id;
        };
   }
}
#endif // FILEWITHSENDER_H
