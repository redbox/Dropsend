#include "abstractentityfactory.h"
#include "remoteserverentityfactory.h"

using namespace dropsend::data;

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
