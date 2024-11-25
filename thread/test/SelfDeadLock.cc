#include "../Mutex.h"
#include <muduo/base/CurrentThread.h>
#include <iostream>

class Request
{
 public:
  void process()  __attribute__ ((noinline))
  {
    muduo::MutexLockGuard lock(mutex_);
    print();
  }

  void print() const  __attribute__ ((noinline))
  {
    // muduo::MutexLockGuard lock(mutex_);
    std::cout << "test gdb kkk" << std::endl;
  }

 private:
  mutable muduo::MutexLock mutex_;
};

int main()
{
  Request req;
  req.process();
  std::cout << "kkk main" << std::endl;
  return -1;
}
