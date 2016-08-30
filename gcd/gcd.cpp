#include <iostream>

using namespace std;

int gcd(int a,int b){
  cout << "= gcd(" << a << ", " << b << ")" << endl;
  if(b == 0) return a; //base case
  return gcd(b, (a % b) );
}

int main(){
  cout << "GCD = " << gcd(3918848, 1653264) << endl;
  return 0;
}
