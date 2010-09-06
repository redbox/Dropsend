#include "remoteserveruserdao.h"

using namespace dropsend::data;

RemoteServerUserDAO::RemoteServerUserDAO()
{
}

User* RemoteServerUserDAO::getByLoginAndPassword(const QString& login, const QString& password) const {
    if ((login == "user") && (password == "password")) {
        User* user = new User();
        user->first_name_ = "first_name";
        user->last_name_ = "last_name";
        user->is_owner_ = false;
        user->is_internal_ = true;
        return user;
    } else {
        return NULL;
    }
}

User* RemoteServerUserDAO::getById(int id) const {
    return new User();
}
