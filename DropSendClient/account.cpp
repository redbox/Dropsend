#include "account.h"

using namespace dropsend::data;

Account::Account() : plan_id_(0)
{
}

int Account::getPlanId() const {
    return plan_id_;
}
