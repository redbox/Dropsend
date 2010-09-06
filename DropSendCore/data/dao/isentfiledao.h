#ifndef ISENTFILEDAO_H
#define ISENTFILEDAO_H

#include "iuserrelateddao.h"
#include ".\..\entities\sentfile.h"

namespace dropsend {
    namespace data {
        namespace dao {
            using namespace entities;
            /**
             * @interface ISentFileDAO
             * @brief Contains methods to obtain information about user's sent files. Inherited from IUserRelatedDAO.
             * @see dropsend::data::dao::IUserRelatedDAO
             * @see dropsend::data::entities::SentFile
             **/
            class ISentFileDAO : public IUserRelatedDAO<SentFile>
            {
            };
        }
    }
}

#endif // ISENTFILEDAO_H
