#ifndef IENTITYDAO_H
#define IENTITYDAO_H

#include "entitywithid.h"

namespace dropsend {
    namespace data {

        // abstract entity dao interface
        template<class T>
        class IEntityDAO
        {
        public:
            virtual T* getById(int id) const = 0;
        };
    }
}

#endif // IENTITYDAO_H
