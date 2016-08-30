#include <iostream>
#include <vector>

using namespace std;

int get_fibonacci_last_digit_naive(int n) {
    if(n == 0) return 0;
    vector<int> fibArray(n);
    fibArray[0] = 1;
    fibArray[1] = 1;
    for(int i = 2; i < n; i++){
      fibArray[i] = (fibArray[i-1] + fibArray[i-2]) % 10;
    }
    return fibArray[n-1];
}

int main() {
    int n;
    cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    cout << c << '\n';
    }
