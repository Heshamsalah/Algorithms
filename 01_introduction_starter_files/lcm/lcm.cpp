#include <iostream>

using namespace std;

long long gcd(int a, int b) {
  if(b == 0) return a;
  return gcd(b, (a % b));
}

long long lcm(int a, int b) {
  return ((a/gcd(a,b))*b);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << lcm(a, b) << endl;
  return 0;
}
