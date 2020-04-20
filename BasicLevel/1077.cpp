//
// Created by jun on 2020/4/20.
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
    freopen("input/1077.txt", "r", stdin);
#endif
    // write your code here
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int g2, g1 = 0, cnt = -2, temp, maxn = -1, minn = m + 1;
        cin >> g2;
        for (int j = 0; j < n - 1; j++) {
            cin >> temp;
            if (temp >= 0 && temp <= m) {
                if (temp > maxn) maxn = temp;
                if (temp < minn) minn = temp;
                g1 += temp;
                cnt++;
            }
        }
        cout << int((((g1 - minn - maxn) * 1.0 / cnt) + g2) / 2 + 0.5) << endl;
    }
    return 0;
}

