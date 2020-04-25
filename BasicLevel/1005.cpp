//
// Created by jun on 2020/4/25.
//


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

/*
 * 分析:
 *     对每一个输入的数字n进行验证，把验证过的数字对应的arr标记为1，然后对这些输入的数字从小到大排序，
 * 输出所有arr=0的数字即为关键数字
 */
using namespace std;

bool cmp(int a, int b) { return a > b; }

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1005.txt", "r", stdin);
#endif
    int n, m, notFirstPrint = 0;
    int arr[101] = {0};
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> m;
        v[i] = m;
        while (m != 1) {
            if (m % 2 != 0) m = 3 * m + 1;
            m /= 2;
            if (arr[m] == 1) break;
            arr[m] = 1;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int num: v) {
        if (arr[num] == 0) {
            if (notFirstPrint == 1) cout << " ";
            cout << num;
            notFirstPrint = 1;
        }
    }
    return 0;
}

