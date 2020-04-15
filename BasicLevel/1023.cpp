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


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1023.txt", "r", stdin);
#endif
    // write your code here
    int a[10], t;
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 1; i < 10; i++) {
        if (a[i] != 0) {  // 找到第1个不为0的数
            cout << i;
            t = i;
            break;
        }
    }
    // 按顺序输出
    for (int i = 0; i < a[0]; i++) cout << 0;  // 先输出0
    for (int i = 0; i < a[t] - 1; i++) cout << t;
    for (int i = t + 1; i < 10; i++)
        for (int k = 0; k < a[i]; k++)  // 若a[i]为0，不会进入循环
            cout << i;

    return 0;
}

