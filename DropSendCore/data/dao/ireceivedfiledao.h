#ifndef IRECEIVEDFILEDAO_H
#define IRECEIVEDFILEDAO_H

#include "iuserrelateddao.h"
#include ".\..\entities\receivedfile.h"

namespace dropsend {
    namespace data {
        namespace dao {
            using namespace entities;
            /**
             * @interface IReceivedFileDAO
             * @brief Contains methods to obtain information about user's received files. Inherited from IUserRelatedDAO.
             * @see dropsend::data::dao::IUserRelatedDAO
             * @see dropsend::data::entities::ReceivedFile
             **/
            class IReceivedFileDAO : public IUserRelatedDAO<ReceivedFile>
            {
            };
        }
    }
}

#endif // IRECEIVEDFILEDAO_H
