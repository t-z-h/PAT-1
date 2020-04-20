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
    freopen("input/1076.txt", "r", stdin);
#endif
    // write your code here
    string s;
    while (cin >> s)
        if (s.size() == 3 && s[2] == 'T') cout << s[0] - 'A' + 1;
    return 0;
}

