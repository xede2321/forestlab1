#include "leaf.h"
#include <stdlib.h>

TLeaf::TLeaf() : TDerevya()
{
  rings=4;
  typeleaf=2;
  kronasize=40;
}
int TLeaf::GetKronasize()
{
  return kronasize;
}
bool TLeaf::liveinside()
{
  return liveinside;
}
char* TLeaf::plodi()
{
  return "plodi";
}