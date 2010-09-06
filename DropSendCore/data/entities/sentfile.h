#ifndef SENTFILE_H
#define SENTFILE_H

#include <QString>

#include ".\..\filewithsender.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /// Used for implementing "Abstract factory" design pattern.
                class RemoteServerSentFileDAO;
            }
        }
    }
}

namespace dropsend {
    namespace data {
        namespace entities {            
            /**
             * @class SentFile
             * @brief Contains info about user's sent files. Has recipient ID. Data model class.
             * Inherited from FileWithSender.
             * @see dropsend::data::FileWithSender
             **/
            class SentFile : public FileWithSender
            {
                /**
                 * @brief Used for implementing "Abstract factory" design pattern.
                 **/
                friend class dao::remoteserver::RemoteServerSentFileDAO;
            public:
                /**
                 * @brief Initializes a new instance of the dropsend::data::entities::SentFile class.
                 **/
                SentFile();

                /**
                 * @brief Gets recipient ID.
                 **/
                int getRecipientId() const;
            private:
                /**
                 * @brief Recipient's ID.
                 **/
                int recipient_id_;
            };
        }
   }
}
#endif // SENTFILE_H
