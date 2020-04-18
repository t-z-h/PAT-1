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


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1047.txt", "r", stdin);
#endif
    // write your code here
    int n, t, num, score;
    cin >> n;
    int team[1001] = {0};
    for (int i = 1; i <= n; i++) {
        scanf("%d-%d %d", &t, &num, &score);
        team[t] += score;
    }
    int max = 0;
    for (int i = 0; i < 1001; i++) {
        if (team[max] < team[i])
            max = i;
    }
    cout << max << " " << team[max];
    return 0;
}

