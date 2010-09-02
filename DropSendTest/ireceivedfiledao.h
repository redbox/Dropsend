#ifndef IRECEIVEDFILEDAO_H
#define IRECEIVEDFILEDAO_H

#include "iuserrelateddao.h"
#include "receivedfile.h"

namespace dropsend {
    namespace data {
        class IReceivedFileDAO : public IUserRelatedDAO<ReceivedFile>
        {
        };
    }
}

#endif // IRECEIVEDFILEDAO_H
