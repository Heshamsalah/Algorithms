#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
long long fibo(long long n, long long m) {
    if(n == 0) return 0;
    vector<long long> fibArray(n);
    fibArray[0] = 1;
    fibArray[1] = 1;
    for(int i = 2; i < n; i++){
      fibArray[i] = (fibArray[i-1] + fibArray[i-2]) % m;
    }
    return fibArray[n-1];
}

long long fib(long long n, long long m) {

  int period = 0;
  if(n == 0) return 0;
  vector<long long> fibArray(n);
  fibArray[0] = 0;
  fibArray[1] = 1;

  int cntr = 2;
  for(long long i = 2; i < n; i++){
    fibArray[i] = (fibArray[i-1] + fibArray[i-2]) % m;

      if((fibArray[i-1] == 0) && (fibArray[i] == 1)) break;
      cntr++;
  }
  period = cntr - 1;
  return fibo(n%period, m);
}

int main() {
    long long n, m;
    cin >> n >> m;
    cout << fib(n, m) << '\n';
}
