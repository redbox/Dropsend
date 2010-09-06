#ifndef ABSTRACTENTITYFACTORY_H
#define ABSTRACTENTITYFACTORY_H

#include "./dao/iuserdao.h"
#include "./dao/ireceivedfiledao.h"
#include "./dao/isentfiledao.h"
#include "./dao/iaccountdao.h"
#include "./dao/iplandao.h"

namespace dropsend {
    namespace data {

        /// Namespace is included for DAO interfaces.
        using namespace dao;

        /**
         * @class AbstractEntityFactory
         * @brief "Abstract Factory" design pattern implementatin for using with server services and local cache.
         * Or 2 versions of API at simultaneously. To get factory's instance you should use getDAOFactory method.
         * Type of factory's realization is specified by integer constant:
         * @li AbstractEntityFactory::REMOTE_SERVER_FACTORY creates RemoteServerEntityFactory. Target factory provides DAO which
         * fetch data from remote server.
         * @li AbstractEntityFactory::LOCAL_CAHCE_FACTORY creates LocalCacheEntityFactory. Not implemented yet.
         *
         * @see dropsend::data::dao::remoteserver::RemoteServerEntityFactory
         *
         * AbstractEntityFactory is base class for all factories. Any factory must derive this interface.
         * To obtain data model, use DAO classes. One for each kind of data model.
         * @see dropsend::data::dao::IAccountDAO
         * @see dropsend::data::dao::IUserDAO
         * @see dropsend::data::dao::IPlanDAO
         * @see dropsend::data::dao::IReceivedFileDAO
         * @see dropsend::data::dao::ISentFileDAO
         **/
        class AbstractEntityFactory
        {
        public:

            /**
             * @brief Defining that RemoteServerEntityFactory will be created.
             **/
            static const int REMOTE_SERVER_FACTORY = 1;

            /**
             * @brief Defining that LocalCacheEntityFactory will be created. Not implemented yet.
             **/
            static const int LOCAL_CAHCE_FACTORY = 2;

            //static const int SOMETHING_ELSE_FACTORY = 3;

            /**
             * @brief Gets IUserDAO instance. Abstract. All derived classes must implement this.
             * @returns IUserDAO instance.
             * @see dropsend::data::dao::IUserDAO
             **/
            virtual IUserDAO* getUserDAO() = 0;

            /**
             * @brief Gets IReceivedFileDAO instance. Abstract. All derived classes must implement this.
             * @returns IReceivedFileDAO instance.
             * @see dropsend::data::dao::IReceivedFileDAO
             **/
            virtual IReceivedFileDAO* getReceivedFileDAO() = 0;

            /**
             * @brief Gets ISentFileDAO instance. Abstract. All derived classes must implement this.
             * @returns ISentFileDAO instance.
             * @see dropsend::data::dao::ISentFileDAO
             **/
            virtual ISentFileDAO* getSentFileDAO() = 0;

            /**
             * @brief Gets IAccountDAO instance. Abstract. All derived classes must implement this.
             * @returns IAccountDAO instance.
             * @see dropsend::data::dao::IAccountDAO
             **/
            virtual IAccountDAO* getAccountDAO() = 0;

            /**
             * @brief Gets IPlanDAO instance. Abstract. All derived classes must implement this.
             * @returns IPlanDAO instance.
             * @see dropsend::data::dao::IPlanDAO
             **/
            virtual IPlanDAO* getPlanDAO() = 0;

            /**
             * @brief Gets necessary factory. Type of factory's realization is specified by factoryType:
             * @li AbstractEntityFactory::REMOTE_SERVER_FACTORY creates RemoteServerEntityFactory. Target factory provides DAO which
             * fetch data from remote server.
             * @li asdasd AbstractEntityFactory::LOCAL_CAHCE_FACTORY creates LocalCacheEntityFactory. Not implemented yet.
             * @see dropsend::data::dao::remoteserver::RemoteServerEntityFactory
             * @param factoryType Factory's type.
             * @returns Instance of target factory. Or NULL, if there is no factory for set constant.
             **/
            static AbstractEntityFactory* getDAOFactory(int factoryType);
        };
    }
}
#endif // ABSTRACTENTITYFACTORY_H
