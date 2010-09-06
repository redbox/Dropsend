#include "user.h"

using namespace dropsend::data;

User::User() : account_id_(0), first_name_(QString()), last_name_(QString()),
    is_owner_(false), is_internal_(false)
{
}

int User::getAccountId() const {
    return account_id_;
}

QString User::getFirstName() const {
    return first_name_;
}

QString User::getLastName() const {
    return last_name_;
}

bool User::isOwner() const {
    return is_owner_;
}

bool User::isInternal() const {
    return is_internal_;
}
