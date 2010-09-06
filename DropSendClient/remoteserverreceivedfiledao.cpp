#include "remoteserverreceivedfiledao.h"

using namespace dropsend::data;

RemoteServerReceivedFileDAO::RemoteServerReceivedFileDAO()
{
}

QList<ReceivedFile*> RemoteServerReceivedFileDAO::getByUserId(int id) const {
    QList<ReceivedFile*> files;    
    ReceivedFile* file = new ReceivedFile();
    file->name = "cookbook";
    file->extension = "pdf";
    file->sender_id = 23;
    files.append(file);
    return files;
}

ReceivedFile* RemoteServerReceivedFileDAO::getById(int id) const {
    return new ReceivedFile();
}
