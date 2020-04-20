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
    freopen("input/1082.txt", "r", stdin);
#endif
    // write your code here
    int n, id, x, y, maxid, maxdis = -1, minid, mindis = 99999;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id >> x >> y;
        int dis = x * x + y * y;
        if (dis > maxdis) maxid = id;
        if (dis < mindis) minid = id;
        maxdis = max(maxdis, dis);
        mindis = min(mindis, dis);
    }
    printf("%04d %04d", minid, maxid);
    return 0;
}

