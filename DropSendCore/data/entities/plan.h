#ifndef PLAN_H
#define PLAN_H

#include <QString>

#include ".\..\entitywithid.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /// Used for implementing "Abstract factory" design pattern.
                class RemoteServerPlanDAO;
            }
        }
    }
}

namespace dropsend {
    namespace data {
        namespace entities {            
            /**
             * @class Plan
             * @brief Contains info about user's payment plan. Data model class.
             * @see dropsend::data::entities::EntityWithId
             **/
            class Plan : public EntityWithId
            {
                /**
                 * @brief Used for implementing "Abstract factory" design pattern.
                 **/
                friend class dropsend::data::dao::remoteserver::RemoteServerPlanDAO;
            public:
                /**
                 * @brief Initializes a new instance of the dropsend::data::entities::Plan class.
                 **/
                Plan();

                /**
                 * @brief Gets plan's name.
                 * @returns Plan's name.
                 **/
                QString getName() const;

                /**
                 * @brief Gets plan's cost.
                 * @returns Plan's cost.
                 **/
                double getCost() const;

                /**
                 * @brief Checks whether plan is group plan.
                 * @returns True if plan is group plan, False otherwise.
                 **/
                bool isGroup() const;
            private:
                /**
                 * @brief Name
                 **/
                QString name_;

                /**
                 * @brief Cost
                 **/
                double cost_;

                /**
                 * @brief Whether plan is group plan or not.
                 **/
                bool is_group_;
            };
        }
    }
}

#endif // PLAN_H
