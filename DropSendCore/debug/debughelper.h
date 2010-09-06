#ifndef DEBUGHELPER_H
#define DEBUGHELPER_H

#include <QPlainTextEdit>

namespace dropsend {
    namespace debug {        
        /**
         * @class DebugHelper
         * @brief DebugHelper is used for display of results of test requests to server.
         **/
        class DebugHelper
        {
        public:
            /**
             * @brief Gets test user's info from server's proxy, and shows result.
             * @param debugPlainTextEdit Instance of QPlainTextEdit in which the result will be shown.
             **/
            static void fetchDebugUserInfo(QPlainTextEdit* debugPlainTextEdit);

            /**
             * @brief Gets test account's info from server's proxy, and shows result.
             * @param debugPlainTextEdit Instance of QPlainTextEdit in which the result will be shown.
             **/
            static void fetchDebugAccountInfo(QPlainTextEdit* debugPlainTextEdit);

            /**
             * @brief Gets test list of user's sent files, and shows result.
             * @param debugPlainTextEdit Instance of QPlainTextEdit in which the result will be shown.
             **/
            static void fetchDebugSentFilesInfo(QPlainTextEdit* debugPlainTextEdit);

            /**
             * @brief Gets test list of user's received files, and shows result.
             * @param debugPlainTextEdit Instance of QPlainTextEdit in which the result will be shown.
             **/
            static void fetchDebugReceivedFilesInfo(QPlainTextEdit* debugPlainTextEdit);
        private:
            /**
             * @brief Initializes a new instance of the dropsend::debug::DebugHelper class.
             **/
            DebugHelper();
        };
    }
}

#endif // DEBUGHELPER_H
