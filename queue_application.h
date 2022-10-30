// queue_application.h
#ifndef QUEUE_APPLICATION
#define QUEUE_APPLICATION
#include <queue>

class queue_application
{
private:
    /* data */
    int k_;
    int sum_k_;
    std::queue<int> q_;
public:
  queue_application(int k);
  std::string next(int new_member);
};


#endif