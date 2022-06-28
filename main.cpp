#include <iostream>
#include <math.h>

using namespace std;

class Poly{
private:
int coef;
int exp;
double res;


public:
Poly(){
  
}
void at(int x){
 res = pow((getcoef() * x),getexp());
}
int getres(){
  return res;
}
void setcoef(int cof){
  coef = cof;
}
void setexp(int expo){
  exp = expo;
}
int getcoef(){
  return coef;
}
int getexp(){
  return exp;
}
};



int main() {
Poly  res, p1, p2, p3, p4;
  double res1, res2, res3, res4;
  int x;
 int a = 3, b = 4, c = 2, d = 3, e = 3, f = 2, g = 8, h = 1;
  cout<<"Enter X = "<<endl;
  cin>> x;
  p1.setcoef(a);
  p1.setexp(b);
  p1.at(x);
  res1 = p1.getres();

  
   p2.setcoef(c);
  p2.setexp(d);
    p2.at(x);
  res2 = p2.getres();

  
   p3.setcoef(e);
  p3.setexp(f);
    p3.at(x);
  res3 = p3.getres();

  
   p4.setcoef(g);
  p4.setexp(h);  
  p4.at(x);
  res4 = p4.getres();
int res5= res1 + res2 + res3 + res4;
  cout<<a<<"*"<<x<<"^"<<b<<" + "<<c<<"*"<<x<<"^"<<d<<" + "<<e<<"*"<<x<<"^"<<f<<" + "<<g<<"*"<<x<<"^"<<h<<" = "<<res5;
  
 
}