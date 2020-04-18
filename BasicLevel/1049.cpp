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
 *      设输入的第i个数为temp，设temp的片段的首、尾指针分别为p, q.
 * ==> p有i种选择(1, 2, ..., i); q有(n - i + 1)种选择(i, i+1, i+2, ..., n)
 * ==> 含temp的片段共有 i * (n-i+1) 个，即temp共出现 i * (n - i + 1)次
 * ==> temp贡献和: temp*i*(n-i+1)
 */

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1049.txt", "r", stdin);
#endif
    // write your code here
    int n;
    cin >> n;
    double sum = 0.0, temp;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        sum += temp * i * (n - i + 1);
    }
    printf("%.2f\n", sum);
    return 0;
}

