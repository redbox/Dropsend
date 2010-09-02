#ifndef FILE_H
#define FILE_H

#include <QString>

#include "entitywithid.h"

namespace dropsend {
    namespace data {

        // base class for all files entities
        class File : public EntityWithId
        {
        public:
            File();

            QString getName() const;
            QString getPath() const;
            QString getExtension() const;

        protected:
            QString name;
            QString path;
            QString extension;
        };
   }
}
#endif // FILE_H
