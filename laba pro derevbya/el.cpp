#include "el.h"
#include <stdlib.h>
TEl::TEl() :THvoya()
{
  rings = 3;
  typeleaf = 3;
  elka = true;
}
int TEl::GetKolkost()
{
  return rand() % 10;
}
char* TEl::plodi()
{
  return "orehi";
}
