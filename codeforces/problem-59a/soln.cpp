#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    unsigned int i = 0, lower = 0, upper = 0;
    cin >> s;
    unsigned int strLength = s.length();
    unsigned int halfStr = strLength / 2;
    cout << halfStr << endl;
    for(i = 0; i < strLength; i++){
        isupper(s[i]) ? upper++ : lower++;
        if (upper > halfStr || lower > halfStr) {
            cout << "break" << endl;
            cout << "Lower" << lower << endl;
            cout << "Upper" << upper << endl;
            break;
        }
    }
    if(upper == lower || upper < lower){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s << endl;
    return 0;
}
