#include "kedr.h"
#include <stdlib.h>
TKedr::TKedr() :THvoya()
{
  rings = 3;
  typeleaf = 3;
  elka = true;
}
int TKedr::GetProchnost()
{
  return rand() % 100;
}
char* TKedr::plodi()
{
  return "oreshki";
}
