//
// Created by jun on 2020/4/15.
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
#include <cctype>

using namespace std;

// define global variable here


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1029.txt", "r", stdin);
#endif
    // write your code here
    string s1, s2, ans;
    cin >> s1 >> s2;
    for (char i : s1)
        if (s2.find(i) == string::npos && ans.find(toupper(i)) == string::npos)
            ans += toupper(i);
    cout << ans;
    return 0;
}

