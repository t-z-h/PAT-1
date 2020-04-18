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

// define global variable here
/*
 * 分析:
 *      设输入为n x_1 x_2 ... x_n
 *  对于x_i:
 *      x_i 做十位: 个位p 有(n-1)种可能
 *      x_i 做个位: 十位q 有(n-1)种可能
 *   ==> x_i贡献的和为: x_i * 10 * (n - 1) + x_i * (n - 1) = 11 * x_i *(n - 1)
 *
 */

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1056.txt", "r", stdin);
#endif
    // write your code here
    int n, temp, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum += temp * 11 * (n - 1);
    }
    cout << sum;
    return 0;
}

