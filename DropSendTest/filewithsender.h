#ifndef FILEWITHSENDER_H
#define FILEWITHSENDER_H

#include "file.h"

namespace dropsend {
    namespace data {
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
