#ifndef SINGLETON_H
#define SINGLETON_H

// singleton pattern implementation
template <class T>
class Singleton
{
public:
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

template <class T> T* Singleton<T>::instance_ = 0;
#endif // SINGLETON_H
