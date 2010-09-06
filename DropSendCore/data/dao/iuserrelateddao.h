#ifndef IUSERRELATEDDAO_H
#define IUSERRELATEDDAO_H

#include <QList>

#include ".\..\entitywithid.h"
#include "ientitydao.h"
#include ".\..\entities\user.h"

namespace dropsend {
    namespace data {
        namespace dao {
            /**
             * @interface IUserRelatedDAO
             * @brief Interface for objects(data model classes) which related to user.
             * Some data model objects like SentFile, Account etc. are related to User.
             * For their reception it is possible to use a method in which parameter is user ID.
             * Inherited from IEntityDAO.
             * @see dropsend::data::dao::IEntityDAO
             **/
             template <class T>
             class IUserRelatedDAO : public IEntityDAO<T>
             {
             public:
                 /**
                  * @brief Gets model's instance by user's ID.
                  * @returns List containing pointers to user's objects.
                  **/
                 virtual QList<T*> getByUserId(int id) const = 0;
             };
        }
    }
}
#endif // IUSERRELATEDDAO_H
