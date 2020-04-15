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
int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}; // 权重
int b[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2}; // M值

string s;

bool isTrue() {
    int sum = 0;
    for (int i = 0; i < 17; i++) {
        if (s[i] < '0' || s[i] > '9') return false;
        sum += (s[i] - '0') * a[i];
    }
    int temp = (s[17] == 'X') ? 10 : (s[17] - '0'); // 校验码
    return b[sum % 11] == temp;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1031.txt", "r", stdin);
#endif
    // write your code here
    int n, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (!isTrue()) {
            cout << s << endl;
            flag = 1;
        }
    }
    if (flag == 0) cout << "All passed";

    return 0;
}

