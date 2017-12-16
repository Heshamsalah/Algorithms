#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int t = 0, n = 0, i = 0, j = 0;
    string word = "";
    map<char, int> m;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n;
        for (j = 0; j < n; j++) {
            cin >> word;
            m[word[0]] += 1;
        }
        for (map<char,int>::iterator it=m.begin(); it!=m.end(); ++it){
            cout << it->first;
            if (it->second > 1)
                cout << it->second;
        }
    }
    return 0;
}
