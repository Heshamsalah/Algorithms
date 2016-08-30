#include <iostream>
#include <vector>

using namespace std;

int fib(int n){
  vector<double> v(n);
  v[0] = 1;
  v[1] = 1;
  for(int i = 2; i < n; i++){
    v[i] = v[i-1] + v[i-2];
    cout << "v[" << i << "] = " << v[i] << endl;
  }
  return v[n-1];
}

int main(){
  int n = 0;
  cout << "Enter Some Number: " << endl;
  cin >> n;
  cout << "FIB = " << fib(n) << endl;
  return 0;
}
