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
    freopen("input/1063.txt", "r", stdin);
#endif
    // write your code here
    int n, a, b;
    double res = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        res = max(res, sqrt(a * a + b * b));
    }
    printf("%.2f", res);
    return 0;
}

