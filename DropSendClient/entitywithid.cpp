#include "entitywithid.h"

using namespace dropsend::data;

EntityWithId::EntityWithId() : id_(0)
{
}

int EntityWithId::getId() const {
    return id_;
}
