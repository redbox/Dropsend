#ifndef REMOTESERVERRECEIVEDFILEDAO_H
#define REMOTESERVERRECEIVEDFILEDAO_H

#include <QList>

#include ".\..\ireceivedfiledao.h"
#include ".\..\..\entities\receivedfile.h"

namespace dropsend {
    namespace data {
        namespace dao {
            namespace remoteserver {
                /**
                 * @class RemoteServerReceivedFileDAO
                 * @brief DAO which is used to obtain information from remote service.
                 * Contains API requests. Implements IReceivedFileDAO.
                 * @see dropsend::data::dao::IReceivedFileDAO
                 **/
                class RemoteServerReceivedFileDAO : public IReceivedFileDAO
                {
                public:
                    /**
                     * @brief Initializes a new instance of the dropsend::data::dao::remoteserver::RemoteServerReceivedFileDAO class.
                     **/
                    RemoteServerReceivedFileDAO();

                    //Implements dropsend::data::dao::IUserRelatedDAO<ReceivedFile>
                    QList<ReceivedFile*> getByUserId(int id) const;

                    //Implements dropsend::data::dao::IEntityDAO<ReceivedFile>
                    ReceivedFile* getById(int id) const;
                };
            }
        }
    }
}

#endif // REMOTESERVERRECEIVEDFILEDAO_H
