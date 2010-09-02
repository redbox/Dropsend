#include "filewithsender.h"

using namespace dropsend::data;

FileWithSender::FileWithSender()
{
}

int FileWithSender::getSender() const {
    return sender_id;
}
