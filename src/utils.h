#ifndef __utils_h___
#define __utils_h___

#include <sys/time.h>

#define debug(x) \
  std::cout<<"DBG("<<__FILE__<<":"<<__LINE__<<") "<<x<<std::endl

typedef struct tt{
  struct timeval _time;
  void tic()
  {
    gettimeofday(&_time, NULL);
  }
  double toc() const
  {
    struct timeval t1;
    gettimeofday(&t1, NULL);
    float sec = t1.tv_sec - _time.tv_sec;
    float usec = t1.tv_usec - _time.tv_usec;
     
    return (sec*1000.0 + usec/1000.0);
  }
}tt;

#endif