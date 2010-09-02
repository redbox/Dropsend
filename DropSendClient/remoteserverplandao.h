#ifndef REMOTESERVERPLANDAO_H
#define REMOTESERVERPLANDAO_H

#include "iplandao.h"
#include "plan.h"

namespace dropsend {
    namespace data {
        // remote server's DAO implementation for retrieving plan information
        class RemoteServerPlanDAO : public IPlanDAO
        {
        public:
            RemoteServerPlanDAO();
            Plan* getById(int id) const;
        };
    }
}

#endif // REMOTESERVERPLANDAO_H
