#ifndef _Hvoya_h_
#define _Hvoya_h_

#include "derevya.h"

class THvoya : public TDerevya
{
  protected:
  bool elka;
  public:
    THvoya();
    bool GetElka();
    void SetElka(bool e);
    int polza();
      virtual char* plodi();

};
#endif