#include "sentfile.h"

using namespace dropsend::data;

SentFile::SentFile()
{
}

int SentFile::getRecipientId() const {
    return recipient_id_;
}
