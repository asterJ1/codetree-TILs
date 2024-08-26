#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        if (c > a) {
            cout << a;
        }
    }
    else if (b > c) {
        if (a > b) {
            cout << b;
        }
    }
    else if (c > b) {
        if (a > c) {
            cout << c;
        }
    }
    return 0;
}