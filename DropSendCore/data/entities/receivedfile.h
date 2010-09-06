#ifndef RECEIVEDFILE_H
#define RECEIVEDFILE_H

#include "./../filewithsender.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /// Used for implementing "Abstract factory" design pattern.
                class RemoteServerReceivedFileDAO;
            }
        }
    }
}

namespace dropsend {
    namespace data {
        namespace entities {            
            /**
             * @class ReceivedFile
             * @brief Contains info about user's received files. Data model class. Inherited from FileWithSender.
             * @see dropsend::data::FileWithSender
             **/
            class ReceivedFile : public FileWithSender
            {
                /**
                 * @brief Used for implementing "Abstract factory" design pattern.
                 **/
                friend class dropsend::data::dao::remoteserver::RemoteServerReceivedFileDAO;
            public:
                /**
                 * @brief Initializes a new instance of the dropsend::data::entities::ReceivedFile class.
                 **/
                ReceivedFile();
            private:
            };
        }
    }
}

#endif // RECEIVEDFILE_H
