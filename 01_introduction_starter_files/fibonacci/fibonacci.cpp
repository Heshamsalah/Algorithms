#include <iostream>
#include <vector>

using namespace std;

int calc_fib(int n) {
    if(n == 0) return 0;
    vector<int> fibArray(n);
    fibArray[0] = 1;
    fibArray[1] = 1;
    for (int i = 2; i < n; i++){
      fibArray[i] = fibArray[i-1] + fibArray[i-2];
    }
    return fibArray[n-1];
}

int main() {
    int n = 0;
    cin >> n;

    cout << calc_fib(n) << '\n';
    return 0;
}
