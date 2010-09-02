#include "plan.h"

using namespace dropsend::data;

Plan::Plan() : name_(QString()), cost_(0), is_group_(false)
{
}

QString Plan::getName() const {
    return name_;
}

double Plan::getCost() const {
    return cost_;
}

bool Plan::isGroup() const {
    return is_group_;
}
