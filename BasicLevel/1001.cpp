//
// Created by jun on 2020/7/12.
//

#include <iostream>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1001.txt", "r", stdin);
#endif
    int n, step = 0;
    cin >> n;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (3 * n + 1) / 2;
        }
        step++;
    }
    cout << step;
    return 0;
}
