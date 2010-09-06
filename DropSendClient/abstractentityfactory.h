#ifndef ABSTRACTENTITYFACTORY_H
#define ABSTRACTENTITYFACTORY_H

#include "iuserdao.h"
#include "ireceivedfiledao.h"
#include "isentfiledao.h"
#include "iaccountdao.h"
#include "iplandao.h"

namespace dropsend {
    namespace data {
        //implementing "Abstract factory" design pattern for use it with server services and local cache
        class AbstractEntityFactory
        {
        public:
            static const int REMOTE_SERVER_FACTORY = 1;
            static const int LOCAL_CAHCE_FACTORY = 2;
            //static const int SOMETHING_ELSE_FACTORY = 3;

            virtual IUserDAO* getUserDAO() = 0;
            virtual IReceivedFileDAO* getReceivedFileDAO() = 0;
            virtual ISentFileDAO* getSentFileDAO() = 0;
            virtual IAccountDAO* getAccountDAO() = 0;
            virtual IPlanDAO* getPlanDAO() = 0;

            // getting necessary factories
            static AbstractEntityFactory* getDAOFactory(int factoryType);
        };
    }
}
#endif // ABSTRACTENTITYFACTORY_H
