//
// Created by jun on 2020/4/25.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
    注意，整数范围-> long long
*/

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1011.txt", "r", stdin);
#endif
    int N;
    scanf("%d", &N);
    long long a, b, c;
    for (int i = 0; i < N; i++) {
        scanf("%lld%lld%lld", &a, &b, &c);
        printf("Case #%d: %s\n", i + 1, a + b > c ? "true" : "false");
    }
    return 0;
}

