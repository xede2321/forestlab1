#ifndef _KEDR_h_
#define _KEDR_h_
#include "hvoya.h"
#include <string>
class TKedr :public THvoya
{
private:
  int prochnost;
public:
  TKedr();
  int GetProchnost();
  virtual char* plodi();

};
#endif