#include "account.h"

using namespace dropsend::data::entities;

Account::Account() : plan_id_(0)
{
}

int Account::getPlanId() const {
    return plan_id_;
}
