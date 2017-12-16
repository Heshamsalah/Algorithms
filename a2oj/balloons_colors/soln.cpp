#include <iostream>
#include <string>

using namespace std;

int main() {
    int t = 0, i = 0, j = 0;
    int n = 0, x = 0, y = 0;
    int easy = 0, hard = 0;
    cin >> t;
    string problems_colors;
    for (i = 0; i < t; i++) {
        cin >> n >> x >> y;
        cin.ignore();
        getline(cin,problems_colors);
        easy = problems_colors[0] - '0';
        hard = problems_colors[problems_colors.length() - 1] - '0';
        if(easy == x && hard == y) {
            cout << "BOTH" << endl;
        } else if(easy == x && hard != y) {
            cout << "EASY" << endl;
        } else if(easy != x && hard == y) {
            cout << "HARD" << endl;
        } else {
            cout << "OKAY" << endl;
        }
    }
    return 0;
}
