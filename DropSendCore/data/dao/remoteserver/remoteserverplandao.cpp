#include "remoteserverplandao.h"

using namespace dropsend::data::entities;
using namespace dropsend::data::dao::remoteserver;

RemoteServerPlanDAO::RemoteServerPlanDAO()
{
}

Plan* RemoteServerPlanDAO::getById(int id) const {
    Plan* plan = new Plan();
    plan->cost_ = 150;
    plan->name_ = "advanced";
    return plan;
}
