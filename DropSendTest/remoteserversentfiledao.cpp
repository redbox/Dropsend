#include "remoteserversentfiledao.h"

using namespace dropsend::data;

RemoteServerSentFileDAO::RemoteServerSentFileDAO()
{
}

QList<SentFile*> RemoteServerSentFileDAO::getByUserId(int id) const {
    // test
    QList<SentFile*> files;    
    SentFile* sentfile1 = new SentFile();
    sentfile1->name = "jazz";
    sentfile1->extension = "mp3";
    sentfile1->recipient_id_ = 12;
    sentfile1->sender_id = 1;
    files.append(sentfile1);

    SentFile* sentfile2 = new SentFile();
    sentfile2->name = "rock";
    sentfile2->extension = "flv";
    sentfile2->recipient_id_ = 3;
    sentfile2->sender_id = 5;
    files.append(sentfile2);
    return files;
}

SentFile* RemoteServerSentFileDAO::getById(int id) const{
    SentFile* sentFile = new SentFile();
    sentFile->name = "thinking in c++";
    sentFile->extension = "djvu";
    sentFile->recipient_id_ = 2;
    sentFile->sender_id = 7;
    return sentFile;
}

