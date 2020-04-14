//
// Created by jun on 2020/4/14.
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
    freopen("input/1016.txt", "r", stdin);
#endif
    // write your code here
    string a, b;
    int da, db, pa = 0, pb = 0;
    cin >> a >> da >> b >> db;
    for (char i : a)
        if (da == (i - '0')) pa = pa * 10 + da;
    for (char i: b)
        if (db == (i - '0')) pb = pb * 10 + db;

    cout << pa + pb;
    return 0;
}
