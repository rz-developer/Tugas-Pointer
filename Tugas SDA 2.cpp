#include <iostream>
#include <string>
using namespace std;

int main() {
  int a = 10;
  int b = 15;
  int* p1 = &b;
  cout << "alamat p1 " <<p1 << "\n";
  
  int* p2 = p1;
  cout <<"alamat p2 :" << p2 << "\n";
  
  int c = 27 ;
  p1 = &c ;
  cout <<"alamat p1 : "<< p1 << "\n";
  
  a = *p1;
  cout <<"nilai a : " << a << "\n";
  
  int* p3 = &b ;
  cout <<"alamat p3 : "<< p3 << "\n";
  
  *p2 = 8 ;
  cout << *p2 << "\n";

  return 0;
}
