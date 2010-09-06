#ifndef ISENTFILEDAO_H
#define ISENTFILEDAO_H

#include "iuserrelateddao.h"
#include "sentfile.h"

namespace dropsend {
    namespace data {
        class ISentFileDAO : public IUserRelatedDAO<SentFile>
        {
        };
    }
}

#endif // ISENTFILEDAO_H
