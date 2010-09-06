#ifndef FILE_H
#define FILE_H

#include <QString>

#include "entitywithid.h"

namespace dropsend {
    namespace data {

        /**
         * @class File
         * @brief Base class which contains information about user's files. By default,
         * all user's files has filename, extension and path.
         **/
        class File : public EntityWithId
        {
        public:
            /**
             * @brief Initializes a new instance of the dropsend::data::File class.
             **/
            File();

            /**
             * @brief Gets file's name only. Without extension or path.
             * @returns File's name.
             **/
            QString getName() const;

            /**
             * @brief Gets file's path.
             * @returns File's path.
             **/
            QString getPath() const;

            /**
             * @brief Gets file's extension.
             * @returns File's extension.
             **/
            QString getExtension() const;

        protected:
            /**
             * @brief File's name only. Without extension or path.
             **/
            QString name;

            /**
             * @brief File's path.
             **/
            QString path;

            /**
             * @brief File's extension.
             **/
            QString extension;
        };
   }
}
#endif // FILE_H
