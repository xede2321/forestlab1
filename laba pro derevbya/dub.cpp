#include "dub.h"

TDub::TDub() : TLeaf()
{
  rings = 250;
  typeleaf = 1;
  kronasize = 60;
}
int TDub::kolvodrov()
{
  return kronasize * 5;
}
char* TDub::plodi()
{
  return "jeludi";
}