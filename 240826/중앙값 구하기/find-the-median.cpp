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
    else if (b > a) {
        if (c > b) {
            cout << b;
        }
    }
    else if (c > a) {
        if (b > c) {
            cout << c;
        }
    }
    return 0;
}