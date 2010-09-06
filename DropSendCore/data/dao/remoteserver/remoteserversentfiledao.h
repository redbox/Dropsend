#ifndef REMOTESERVERSENTFILEDAO_H
#define REMOTESERVERSENTFILEDAO_H

#include ".\..\isentfiledao.h"
#include ".\..\..\entities\sentfile.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /**
                 * @class RemoteServerSentFileDAO
                 * @brief DAO which is used to obtain information from remote service.
                 * Contains API requests. Implements ISentFileDAO.
                 * @see dropsend::data::dao::ISentFileDAO
                 **/
                class RemoteServerSentFileDAO : public ISentFileDAO
                {
                public:
                    /**
                     * @brief Initializes a new instance of the dropsend::data::dao::remoteserver::RemoteServerSentFileDAO class.
                     **/
                    RemoteServerSentFileDAO();

                    //Implements dropsend::data::dao::IUserRelatedDAO<SentFile>.
                    QList<SentFile*> getByUserId(int id) const;

                    //Implements dropsend::data::dao::IEntityDAO<SentFile>.
                    SentFile* getById(int id) const;
                };
            }
        }
    }
}

#endif // REMOTESERVERSENTFILEDAO_H
