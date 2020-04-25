//
// Created by jun on 2020/4/24.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1001.txt", "r", stdin);
#endif
    int n, step = 0;
    scanf("%d", &n);
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = (3 * n + 1) / 2;
        step++;
    }
    printf("%d", step);
    return 0;
}


