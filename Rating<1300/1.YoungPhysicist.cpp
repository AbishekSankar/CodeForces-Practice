#include <iostream>
using namespace std;

#define foo(i, k, n) for (int i = k; i < n; i++)

int main() {
    int n, x = 0, y = 0, z = 0;
    cin >> n;
    foo(i, 0, n) {
        int a, b, c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    (x == 0 && y == 0 && z == 0) ? cout << "YES" : cout << "NO";
    return 0;
}