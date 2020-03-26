#ifndef _Leaf_h_
#define _Leaf_h_

#include "derevya.h"

class TLeaf : public TDerevya
{
  protected :
  int kronasize;
  public:
    TLeaf();
    int GetKronasize();
    bool liveinside();
    virtual char* plodi();
};
#endif