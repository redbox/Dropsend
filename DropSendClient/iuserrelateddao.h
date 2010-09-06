#ifndef IUSERRELATEDDAO_H
#define IUSERRELATEDDAO_H

#include <QList>

#include "entitywithid.h"
#include "ientitydao.h"
#include "user.h"

namespace dropsend {
    namespace data {

        // interface for objects which related to user
        template <class T>
        class IUserRelatedDAO : public IEntityDAO<T>
        {
        public:
            virtual QList<T*> getByUserId(int id) const = 0;
        };
    }
}

#endif // IUSERRELATEDDAO_H
