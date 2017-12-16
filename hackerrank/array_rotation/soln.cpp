#include <iostream>

using namespace std;

int main() {
    int *p1, *p2, temp = 0, i = 0, n = 5, d = 4;
    int a[n] = {1, 2, 3, 4, 5};
    for(i = 0; i < n-1; i++) {
        p1 = &a[i];
        if((i+d-1) > (n-1)) {
            p2 = &a[n-1];
        } else {
            p2 = &a[i+d-1];
        }
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }

    for(i = 0; i < n-1; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;
    return 0;
}
