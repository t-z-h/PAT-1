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
/*
 * 分析：输入样例正确连接顺序应该是:
 *     00100 1 12309
 *     12309 2 33218
 *     33218 3 00000
 *     00000 4 99999
 *     99999 5 68237
 *     68237 6 -1
 */


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1025.txt", "r", stdin);
#endif
    // write your code here
    int first, k, n, temp;
    cin >> first >> n >> k;
    int data[100005], next[100005], list[100005];
    for (int i = 0; i < n; i++) {
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }
    int sum = 0; // 不一定所有的输入的结点都是有用的，加个计数器
    while (first != -1) {
        list[sum++] = first;
        first = next[first];
    }
    for (int i = 0; i < (sum - sum % k); i += k)
        reverse(begin(list) + i, begin(list) + i + k);
    for (int i = 0; i < sum - 1; i++)
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    printf("%05d %d -1\n", list[sum - 1], data[list[sum - 1]]);
    return 0;
}

