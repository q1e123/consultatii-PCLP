#include <iostream>
using namespace std;
class A{
public:
  A(int _m, double _n){
    cout << "constructorul A(int,double)" << endl;
    m = _m;
    n = _n;
  }
  int getM(){return m;}
  void setM(int _m){m = _m;}
private:
  int m;
  double n;
};

int main(){
  cout << "inaintea declararii lui obj" << endl;
  A obj(2, 4.5);
  cout << "dupa declararea lui obj" << endl;
  cout << obj.getM() << endl;
  obj.setM(-11);
}
