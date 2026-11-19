/**
 * 枚举发现这是一个标准的斐波那契数列
 * 可以直接 "骗"
 */

#include <iostream>
using namespace std;
#define int long long

int32_t main() {
    int n; cin >> n;

    if (n == 1) {
        cout << "1.00" << endl;
        return 0;
    }

    if (n == 2) {
        cout << "1.00" << endl;
        return 0;
    }

    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b, b = c;
    }

    cout << c << ".00" << endl;

    return 0;
}