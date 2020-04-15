//
// Created by jun on 2020/4/15.
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

long long a, b, c, d;

long long gcd(long long t1, long long t2) {  // 最大公约数
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}

void func(long long m, long long n) {
    if (m * n == 0) {  // m, n 至少有一个为0
        printf("%s", n == 0 ? "Inf" : "0");
        return;
    }
    bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));
    m = abs(m);
    n = abs(n);
    long long x = m / n;
    printf("%s", flag ? "(-" : "");
    if (x != 0) printf("%lld", x);
    if (m % n == 0) {
        if (flag) printf(")");
        return;
    }
    if (x != 0) printf(" ");
    m = m - x * n;
    long long t = gcd(m, n);
    m = m / t;
    n = n / t;
    printf("%lld/%lld%s", m, n, flag ? ")" : "");
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1034.txt", "r", stdin);
#endif
    // write your code here
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
    func(a, b); printf(" + "); func(c, d); printf(" = "); func(a * d + b * c, b * d); printf("\n");
    func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - b * c, b * d); printf("\n");
    func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
    func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d , b * c); printf("\n");
    return 0;
}

