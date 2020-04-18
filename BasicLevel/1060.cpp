//
// Created by jun on 2020/4/18.
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

/*
 * 分析: 从下标1开始存储n天的公里数在数组a中，对n个数据从大到小排序，
 * i表示了骑车的天数，那么满足a[i] > i的最大值即为所求~
 */
// define global variable here
int a[1000000];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1060.txt", "r", stdin);
#endif
    // write your code here
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a + 1, a + n + 1, cmp);
    int ans = 0, p = 1;
    while (ans <= n && a[p] > p) {
        ans++;
        p++;
    }
    printf("%d", ans);
    return 0;
}

