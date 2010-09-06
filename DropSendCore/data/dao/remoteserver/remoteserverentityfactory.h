#ifndef REMOTESERVERENTITYFACTORY_H
#define REMOTESERVERENTITYFACTORY_H

#include ".\..\..\abstractentityfactory.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /**
                 * @class RemoteServerEntityFactory
                 * @brief Factory which is used to obtain information from remote service.
                 * Inherited from AbstractEntityFactory.
                 * @see dropsend::data::dao::AbstractEntityFactory
                 **/
                class RemoteServerEntityFactory : public AbstractEntityFactory
                {
                public:
                    /**
                     * @brief Initializes a new instance of the dropsend::data::dao::remoteserver::RemoteServerEntityFactory class.
                     **/
                    RemoteServerEntityFactory();

                    // Implements dropsend::data::AbstractEntityFactory.
                    IUserDAO* getUserDAO();

                    // Implements dropsend::data::AbstractEntityFactory.
                    IReceivedFileDAO* getReceivedFileDAO();

                    // Implements dropsend::data::AbstractEntityFactory.
                    ISentFileDAO* getSentFileDAO();

                    // Implements dropsend::data::AbstractEntityFactory.
                    IAccountDAO* getAccountDAO();

                    // Implements dropsend::data::AbstractEntityFactory.
                    IPlanDAO* getPlanDAO();

                private:
                    /**
                     * @brief DAO to obtain user information's model.
                     **/
                    IUserDAO* user_DAO_;

                    /**
                     * @brief DAO to obtain user's received files.
                     **/
                    IReceivedFileDAO* received_file_DAO_;

                    /**
                     * @brief DAO to obtain user's sent files.
                     **/
                    ISentFileDAO* sent_file_DAO_;

                    /**
                     * @brief DAO to obtain account information's model.
                     **/
                    IAccountDAO* account_DAO_;

                    /**
                     * @brief DAO to obtain plan information's model.
                     **/
                    IPlanDAO* plan_DAO_;
                };
            }
        }
    }
}

#endif // REMOTESERVERENTITYFACTORY_H
