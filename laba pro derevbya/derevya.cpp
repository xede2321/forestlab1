#include "derevya.h"
#include <iostream>

TDerevya::TDerevya()
{
  rings = 0;
  typeleaf = 0;
}
int TDerevya::GetRings()
{
  return rings;
}
int TDerevya::GetTypeleaf()
{
  return typeleaf;
}
void TDerevya::SetRings(int r)
{
  if (r>=0)
  rings=r;
}
void TDerevya::SetTypeleaf(int t)
{
  if (t>0 && t<4)
  typeleaf=t;
}
char* TDerevya::plodi()
{
  return "";
}

