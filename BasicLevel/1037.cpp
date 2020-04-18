//
// Created by jun on 2020/4/16.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <set>

using namespace std;

// define global variable here


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1037.txt", "r", stdin);
#endif
    // write your code here
    int a, b, c, m, n, t, x, y, z;
    scanf("%d.%d.%d %d.%d.%d", &a, &b, &c, &m, &n, &t);
    if (a > m || (a == m && b > n) || (a == m && b == n && c > t)) {
        swap(a, m);
        swap(b, n);
        swap(c, t);
        printf("-");
    }
    z = t < c ? t - c + 29 : t - c;
    n = t < c ? n - 1 : n;
    y = n < b ? n - b + 17 : n - b;
    x = n < b ? m - a - 1 : m - a;
    printf("%d.%d.%d", x, y, z);
    return 0;
}

