#ifndef PLAN_H
#define PLAN_H

#include <QString>

#include "entitywithid.h"

namespace dropsend {
    namespace data {
        class RemoteServerPlanDAO;

        // dropsend's plan model
        class Plan : public EntityWithId
        {
            friend class RemoteServerPlanDAO;
        public:
            Plan();
            QString getName() const;
            double getCost() const;
            bool isGroup() const;
        private:
            QString name_;
            double cost_;
            bool is_group_;
        };
    }
}

#endif // PLAN_H
