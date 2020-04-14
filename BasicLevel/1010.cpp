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
/*
 * 使用2个队列，分别存储系数与指数
 */

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1010.txt", "r", stdin);
#endif
    // write your code here
    /* flag标记输入不是0多项式, 默认为0，代表是0多项式 */
    int a, b, flag = 0;
    while (cin >> a >> b){
        if (b != 0){
            if (flag == 1) cout << " ";
            cout << a * b << " " << b - 1;
            flag = 1;
        }
    }
    if (flag == 0) cout << "0 0";
    return 0;
}

