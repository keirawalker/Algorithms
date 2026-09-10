#include <iostream>
using namespace std;

int main() {
    int n = 10;

    int f0 = 1;
    int f1 = 3;

    for (int i = 2; i <= n; i++) {
        int f2 = 2 * f1 + 2 * f0;
        f0 = f1;
        f1 = f2;
    }

    cout << f1 << endl;

    return 0;
}
