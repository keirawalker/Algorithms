// f(n) = 2*f(n-1) + 2*f(n-2)
// Base cases: f(0) = 1, f(1) = 3

#include <iostream>
using namespace std;

int f(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 3;
    }
    return 2 * f(n - 1) + 2 * f(n - 2);
}

int main() {
    cout << f(10) << endl;

    return 0;
}


