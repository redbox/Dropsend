#ifndef DROPSENDSERVICE_H
#define DROPSENDSERVICE_H

#include <QString>
#include <QList>

#include "./utils/singleton.h"
#include "./data/dao/remoteserver/remoteserverentityfactory.h"
#include "./data/entities/client.h"

namespace dropsend {    
    using namespace data;
    using namespace utils;

    /**
     * @class DropSendService.
     * @brief Dropsend server's API facade, which is used to get or set client's info.
     **/
    class DropSendService
    {
    public:
        /**
         * @brief Initializes a new instance of the dropsend::DropSendService class.
         **/
        DropSendService();

        /**
         * @brief Attempt to get authentication on server with specified login and password.
         * Gets all information related to the current user and keeps it. Makes user's info
         * available for other operations.
         * @param login Client's login.
         * @param password Client's password.
         * @returns True on success, False otherwise.
         **/
        bool login(const QString& login, const QString& password);

        /**
         * @brief Gets client's model that contains all client data such as account information,
         * plan's cost etc. If user's info is not available, then returns NULL.
         * @returns Client's model, or NULL.
         * @see dropsend::data::entities::Client
         * @see login
         **/
        Client* getCurrentClientModel() const;

        /**
         * @brief Gets client's account information by specified user_id. If user's info is not available,
         * then returns NULL.
         * @param user_id ID defining client.
         * @returns Instance of dropsend::data::entities::Account containing account info, or NULL.
         * @see dropsend::data::entities::Account
         **/
        Account* getAccountByUser(int user_id) const;

        /**
         * @brief Gets client's plan info by specified user_id. If user's info is not available,
         * then returns NULL.
         * @param user_id ID defining client.
         * @return Instance of dropsend::data::entities::Plan containing plan info, or NULL.
         * @see dropsend::data::entities::Plan
         **/
        Plan* getPlanByUser(int user_id) const;

        /**
         * @brief Gets the list of user's received files. If user's info is not available,
         * then returns NULL.
         * @param user_id ID defining client.
         * @return QList containing user's received files, or NULL.
         * @see dropsend::data::entities::ReceivedFile
         **/
        QList<ReceivedFile*> getReceivedFilesByUser(int user_id) const;

        /**
         * @brief Gets the list of user's sent files. If user's info is not available,
         * then returns NULL.
         * @param user_id ID defining client.
         * @return QList containing user's sent files, or NULL.
         * @see dropsend::data::entities::SentFile
         **/
        QList<SentFile*> getSentFilesByUser(int user_id) const;

    private:
        /**
         * @brief DAOFactory which is used to get or set client's information.
         **/
        AbstractEntityFactory* entity_factory_;

        /**
         * @brief Contains information about client.
         **/
        Client* client_model_;
    };

    /**
     * @brief Singleton wrapper for DropSendService class.
     */
    typedef Singleton<DropSendService> DropSendServiceSingleton;
}

#endif // DROPSENDSERVICE_H
