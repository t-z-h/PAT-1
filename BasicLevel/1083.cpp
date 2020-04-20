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
    freopen("input/1083.txt", "r", stdin);
#endif
    // write your code here
    int n, t, a[10000] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        a[abs(t - i)]++;
    }
    for (int i = 9999; i >= 0; i--)
        if (a[i] >= 2) cout << i << " " << a[i] << endl;
    return 0;
}

