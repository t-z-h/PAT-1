//
// Created by jun on 2020/4/14.
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
 *      模拟手动除法的过程，每次用第一位去除以B，如果得到的商不是0
 *   就输出，否则就*10+下一位，直到最后的数为余数
 */

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1017.txt", "r", stdin);
#endif
    // write your code here
    string s;
    int a, t = 0, temp = 0;
    cin >> s >> a;
    int len = s.length();
    t = (s[0] - '0') / a;
    if ((t != 0 && len > 1) || len == 1)
        cout << t;
    temp = (s[0] - '0') % a;
    for (int i = 1; i < len; i++) {
        t = (temp * 10 + s[i] - '0') / a;  /* 商 */
        cout << t;
        temp = (temp * 10 + s[i] - '0') % a;  /* 余数 */
    }
    cout << " " << temp;
    return 0;
}

