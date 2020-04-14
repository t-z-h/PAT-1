//
// Created by jun on 2020/4/13.
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
bool isprime(int n) {
    /* 判断n是否为素数 */
    int i;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1007.txt", "r", stdin);
#endif
    // write your code here
    int n, i, cnt = 0;
    cin >> n;
    for (i = 5; i <= n; i++)
        if (isprime(i - 2) && isprime(i)) cnt++;
    cout << cnt;
    return 0;
}

