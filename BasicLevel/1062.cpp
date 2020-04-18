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
 * 分析: 设读入数据为 n_1 m_1 n_2 m_2 k
 * 1. 若n_1/m_1 > n_2/m_2,即n_1 * m_2 > m_1 * n_2, 则交换区间端点；
 * 2. 设要求的分数为num/k，k已给出，下面求num
 *      2.1 由n_1/m_1 < num/k 即 n1 * k < m1 * num, 找出第一个满足条件的num即为起点
 *      2.2 在所求区间内，num 与k互素即可
 */
// define global variable here
int gcd(int a, int b) {
    /* greatest common divisor 最大公因数 */
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1062.txt", "r", stdin);
#endif
    // write your code here
    int n1, m1, n2, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if (n1 * m2 > n2 * m1) {  // n1/m1 > n2/m2
        swap(n1, n2);
        swap(m1, m2);
    }
    int num = 1;
    bool flag = false;
    while (n1 * k >= m1 * num) num++;
    while (n1 * k < m1 * num && m2 * num < n2 * k) {
        if (gcd(num, k) == 1) {
            printf("%s%d/%d", flag ? " " : "", num, k);
            flag = true;
        }
        num++;
    }
    return 0;
}

