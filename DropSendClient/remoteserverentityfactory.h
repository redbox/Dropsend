#ifndef REMOTESERVERENTITYFACTORY_H
#define REMOTESERVERENTITYFACTORY_H

#include "abstractentityfactory.h"

namespace dropsend {
    namespace data {

        // remote server's DAO implementation for retrieving all information
        class RemoteServerEntityFactory : public AbstractEntityFactory
        {
        public:
            RemoteServerEntityFactory();

            IUserDAO* getUserDAO();
            IReceivedFileDAO* getReceivedFileDAO();
            ISentFileDAO* getSentFileDAO();
            IAccountDAO* getAccountDAO();
            IPlanDAO* getPlanDAO();

        private:
            IUserDAO* user_DAO_;
            IReceivedFileDAO* received_file_DAO_;
            ISentFileDAO* sent_file_DAO_;
            IAccountDAO* account_DAO_;
            IPlanDAO* plan_DAO_;
        };
    }
}

#endif // REMOTESERVERENTITYFACTORY_H
