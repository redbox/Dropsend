#include "file.h"

using namespace dropsend::data;

File::File()
{
}

QString File::getName() const {
    return name;
}

QString File::getPath() const {
    return path;
}

QString File::getExtension() const {
    return extension;
}
