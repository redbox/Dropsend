#ifndef DEBUGHELPER_H
#define DEBUGHELPER_H

#include <QPlainTextEdit>

namespace dropsend {
    namespace debug {
        // class for render API request in debug mode
        class DebugHelper
        {
        public:
            static void fetchDebugUserInfo(QPlainTextEdit* debugPlainTextEdit);
            static void fetchDebugAccountInfo(QPlainTextEdit* debugPlainTextEdit);
            static void fetchDebugSentFilesInfo(QPlainTextEdit* debugPlainTextEdit);
            static void fetchDebugReceivedFilesInfo(QPlainTextEdit* debugPlainTextEdit);
        private:
            DebugHelper();
        };
    }
}

#endif // DEBUGHELPER_H
