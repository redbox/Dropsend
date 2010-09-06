#include "abstractentityfactory.h"

#include "./dao/remoteserver/remoteserverentityfactory.h"

using namespace dropsend::data;
using namespace dropsend::data::dao;
using namespace dropsend::data::dao::remoteserver;

AbstractEntityFactory* AbstractEntityFactory::getDAOFactory(int factoryType) {
    switch (factoryType) {
    case AbstractEntityFactory::REMOTE_SERVER_FACTORY:
        return new RemoteServerEntityFactory();
    case AbstractEntityFactory::LOCAL_CAHCE_FACTORY:
        return NULL;
    default:
        return NULL;
    }
}
