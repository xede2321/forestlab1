#include <iostream>
using namespace std;

#include "derevya.h"
#include "hvoya.h"
#include "leaf.h"

#include "el.h"
#include "dub.h"

void main()
{
  TDerevya d1;
  d1.SetRings(600);
  d1.SetTypeleaf(3);
  cout << "rings d1 = " << d1.GetRings() << "Typeleaf = " << d1.GetTypeleaf()<< endl;

  THvoya h1;
  h1.SetRings(300);
  h1.SetElka(true);
  cout << "rings h1=" << h1.GetRings() << "Typeleaf = " << h1.GetTypeleaf() << endl;
  cout << "h1 give " << h1.plodi() << "polza = " << h1.polza() << endl;

  TLeaf l1;
  l1.SetRings(500);
  cout << "rings l1=" << l1.GetRings() << "Typeleaf = " << l1.GetTypeleaf() << endl;
  cout << "l1 give " << l1.plodi() << "kto to jivet vnutri? " << l1.liveinside() << endl;

  TEl krutaya;
  krutaya.SetRings(54);
  krutaya.SetElka(true);
  cout << "rings krutaya=" << krutaya.GetRings() << "Typeleaf = " << krutaya.GetTypeleaf() << endl;
  cout << "krutaya give " << krutaya.plodi() << "polza = " << krutaya.polza() << "koletsa = " << krutaya.GetKolkost() << endl;

  TDub chetkiy;
  chetkiy.SetRings(100);
  cout << "rings chetkiy=" << chetkiy.GetRings() << "Typeleaf = " << chetkiy.GetTypeleaf() << endl;
  cout << "chetkiy give " << chetkiy.plodi() << "kto to jivet vnutri? " << chetkiy.liveinside() << "daet drov=" << chetkiy.kolvodrov()<< endl;

  TKedr elisei;
  elisei.SetRings(54);
  elisei.SetElka(false);
  cout << "rings elisei=" << elisei.GetRings() << "Typeleaf = " << elisei.GetTypeleaf() << endl;
  cout << "elisei give " << elisei.plodi() << "polza = " << elisei.polza() << "prochnost = " << elisei.GetProchnost() << endl;

  TLipa lipovaya;
  lipovaya.SetRings(100);
  cout << "rings lipovaya=" << lipovaya.GetRings() << "Typeleaf = " << lipovaya.GetTypeleaf() << endl;
  cout << "lipovaya give " << lipovaya.plodi() << "kto to jivet vnutri? " << lipovaya.liveinside()  << endl;

  int kolvoderevev = 0;
  cout << "skolko derevev " << endl;
  cin >> kolvoderevev;
  TDerevya** les=0;
  les = new TDerevya*[kolvoderevev];
  for (int i = 0; i < kolvoderevev; i++)
  {
    int a=0;
    cout << "chto za derevo?" << endl;
    cin >> a;
    if (a==0)
      les[i] = new TEl();
      else
        les[i] = new TDub();

    cout << "derevo" << i << "daet" << les[i]->plodi()<<endl;
  }
}