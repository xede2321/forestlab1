#ifndef _El_h_
#define _El_h_
#include "hvoya.h"
#include <string>
class TEl :public THvoya
{
  private:
  int kolkost;
  public:
    TEl();
    int GetKolkost();
    virtual char* plodi();

};
#endif