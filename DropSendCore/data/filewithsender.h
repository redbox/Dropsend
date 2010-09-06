#ifndef FILEWITHSENDER_H
#define FILEWITHSENDER_H

#include "file.h"

namespace dropsend {
    namespace data {

        /**
         * @class FileWithSender
         * @brief Base class for file entities used by server.
         * It is inherited by SentFile and ReceivedFile.
         * @see dropsend::data::entities::SentFile
         * @see dropsend::data::entities::ReceivedFile
         **/
        class FileWithSender : public File
        {
        public:
            /**
             * @brief Initializes a new instance of the dropsend::data::FileWithSender class.
             **/
            FileWithSender();

            /**
             * @brief Gets file's sender ID.
             * @returns File's sender ID.
             **/
            int getSender() const;
        protected:
            /**
             * @brief File's sender ID.
             **/
            int sender_id;
        };
   }
}
#endif // FILEWITHSENDER_H
