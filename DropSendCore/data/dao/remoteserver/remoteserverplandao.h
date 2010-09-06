#ifndef REMOTESERVERPLANDAO_H
#define REMOTESERVERPLANDAO_H

#include "./../iplandao.h"
#include "./../../entities/plan.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /**
                 * @class RemoteServerPlanDAO
                 * @brief DAO which is used to obtain information from remote service.
                 * Contains API requests. Implements IPlanDAO.
                 * @see dropsend::data::dao::IPlanDAO
                 **/
                class RemoteServerPlanDAO : public IPlanDAO
                {
                public:
                    /**
                     * @brief Initializes a new instance of the dropsend::data::dao::remoteserver::RemoteServerPlanDAO class.
                     **/
                    RemoteServerPlanDAO();

                    //Implements dropsend::data::dao::IEntityDAO<Plan>.
                    Plan* getById(int id) const;
                };
            }
        }
    }
}

#endif // REMOTESERVERPLANDAO_H
