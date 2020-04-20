//
// Created by jun on 2020/4/21.
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
int a[1005][105], sum[1005];

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1092.txt", "r", stdin);
#endif
    // write your code here
    int m, n, maxn = 0, total = 0;
    vector<int> ans;
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            sum[j] += a[i][j];
            maxn = max(maxn, sum[j]);
        }
    }
    cout << maxn << endl;
    for (int i = 1; i <= m; i++)
        if (sum[i] == maxn) ans.push_back(i);
    for (int i = 0; i < ans.size(); i++) {
        if (i != 0) cout << " ";
        cout << ans[i];
    }
    return 0;
}

