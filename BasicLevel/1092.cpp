//
// Created by jun on 2020/4/21.
//
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1092.txt", "r", stdin);
#endif
    int colSum[1005] = {0};   // 保存列和
    int m, n, maxNum = 0, inputNum;
    vector<int> ans;
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> inputNum;
            colSum[j] += inputNum;
            maxNum = max(maxNum, colSum[j]);
        }
    }
    cout << maxNum << endl;
    for (int i = 1; i <= m; i++)
        if (colSum[i] == maxNum) ans.push_back(i);
    for (int i = 0; i < ans.size(); i++) {
        if (i != 0) cout << " ";
        cout << ans[i];
    }
    return 0;
}

