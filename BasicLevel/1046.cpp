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
    freopen("input/1046.txt", "r", stdin);
#endif
    // write your code here
    int n, jia = 0, yi = 0, jiahan, jiahua, yihan, yihua, sum;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> jiahan >> jiahua >> yihan >> yihua;
        sum = jiahan + yihan;
        if (sum == jiahua && sum != yihua)
            yi++;
        if (sum != jiahua && sum == yihua)
            jia++;
    }
    cout << jia << " " << yi;
    return 0;
}

