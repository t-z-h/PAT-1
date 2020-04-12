//
// Created by jun on 2020/4/12.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
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
 * 分析:
 *     对每一个输入的数字n进行验证，把验证过的数字对应的arr标记为1，然后对这些输入的数字从小到大排序，
 * 输出所有arr=0的数字即为关键数字
 */

// define global variable here
int arr[10000];

bool cmp(int a, int b) { return a > b; }

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1005.txt", "r", stdin);
#endif
    // write your code here
    int k, n, not_first_print = 0; /* not_first_print 标记不是第一次输出 */
    cin >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++) {
        cin >> n;
        v[i] = n;
        while (n != 1) {
            if (n % 2 != 0) n = 3 * n + 1;
            n /= 2;
            if (arr[n] == 1) break;
            arr[n] = 1;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int num : v) {
        if (arr[num] == 0) {
            if (not_first_print == 1) cout << " ";
            cout << num;
            not_first_print = 1;
        }
    }
    return 0;
}
