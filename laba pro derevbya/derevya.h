#ifndef _Derevya_h_
#define _Derevya_h_

class TDerevya
{
protected:
  int rings;
  int typeleaf;
public:
  TDerevya();
  int GetRings();
  int GetTypeleaf();

  void SetRings(int r);
  void SetTypeleaf(int t);

  virtual char* plodi();

};
#endif