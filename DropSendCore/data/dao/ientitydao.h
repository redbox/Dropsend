#ifndef IENTITYDAO_H
#define IENTITYDAO_H

#include ".\..\entitywithid.h"

namespace dropsend {
    namespace data {
        namespace dao {            
            /**
             * @interface IEntityDAO
             * @brief Contains methods to obtain objects, which are iherited from EntityWithId.
             * @see dropsend::data::EntityWithId
             **/
            template<class T>
            class IEntityDAO
            {
            public:
                /**
                 * @brief Gets entity by ID.
                 * @param id Model's ID.
                 * @returns Entity instance, or NULL, if no entity with specified id is available.
                 **/
                virtual T* getById(int id) const = 0;
            };
        }
    }
}

#endif // IENTITYDAO_H
