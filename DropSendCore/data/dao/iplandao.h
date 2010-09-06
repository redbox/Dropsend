#ifndef IPLANDAO_H
#define IPLANDAO_H

#include "ientitydao.h"
#include ".\..\entities\plan.h"

namespace dropsend {
    namespace data {
        namespace dao {
            using namespace entities;
            /**
             * @interface IPlanDAO
             * @brief Contains methods to obtain information about user's plan. Inherited from IEntityDAO.
             * @see dropsend::data::dao::IEntityDAO
             * @see dropsend::data::entities::Plan
             **/
            class IPlanDAO : public IEntityDAO<Plan>
            {
            };
        }
    }
}

#endif // IPLANDAO_H
