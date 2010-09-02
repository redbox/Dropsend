#ifndef IENTITYDAO_H
#define IENTITYDAO_H

#include "entitywithid.h"

namespace dropsend {
    namespace data {
        template<class T>
        class IEntityDAO
        {
        public:
            virtual T* getById(int id) const = 0;
        };
    }
}

#endif // IENTITYDAO_H
