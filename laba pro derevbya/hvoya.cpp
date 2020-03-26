#include "hvoya.h"
#include "stdlib.h"

THvoya::THvoya() : TDerevya()
{
  rings = 1;
  typeleaf=3;
  elka=true;
}
bool THvoya::GetElka()
{
  return elka;
}
void THvoya::SetElka(bool e)
{
  elka = e;
}
int THvoya::polza()
{
  return rand()%100;
}
char* THvoya::plodi()
{
  return "seeds";
}