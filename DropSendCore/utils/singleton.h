#ifndef SINGLETON_H
#define SINGLETON_H

namespace dropsend {
    namespace utils {
        /**
         * @class Singleton.
         * @brief Implementation of singleton design pattern.
         **/
        template <class T>                
        class Singleton
        {
        public:
            /**
             * @brief Gets class instance.
             **/
            static T* getInstance() {
                if (!instance_) {
                    instance_ = new T;
                }
                return instance_;
            }
        protected:
            Singleton();
            ~Singleton();
        private:
            Singleton(Singleton const&);
            Singleton& operator=(Singleton const&);
            static T* instance_;
        };

        /**
         * @brief By default, sets instance's value to 0.
         **/
        template <class T> T* Singleton<T>::instance_ = 0;
    }
}
#endif // SINGLETON_H
