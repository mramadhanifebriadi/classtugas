#include <iostream>
using namespace std;
class Persegipanjang {
	int x, y;
	 public:
    void lebar (int x,int y);
    int luas (void) {
    return (x);
      }
};
void Persegipanjang::lebar (int a, int b) {
  x = a;
  y = b;
}
int main () {
  Persegipanjang persegi, panjang;
  int a,b;
  cout<<"Masukkan Panjang  : ";cin>>a;
  cout<<"Masukkan Lebar    : ";cin>>b;
  panjang.lebar(a,b);
    cout<<"Luas Persegi Panjang   : "<<panjang.luas()*b<<endl;
return 0;
}
