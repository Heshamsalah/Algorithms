#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t = 0, n = 0, top = 0, i = 0, j = 0, m = 0, qualified = 0;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n >> top;
        top = top - 1;
        qualified = 0;
        vector<int> contestnats(n);
        for(j = 0; j < n; j++) {
            cin >> contestnats[j];
        }
        sort(contestnats.begin(), contestnats.end());
        reverse(contestnats.begin(),contestnats.end());
        while(contestnats[top] == 0){
            top--;
        }
        for (m = 0; m < contestnats.size(); m++) {
            if(contestnats[m] >= contestnats[top]){
                qualified++;
            }
        }
        cout << qualified << endl;
    }
    return 0;
}
