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
    freopen("input/1084.txt", "r", stdin);
#endif
    // write your code here
    string s;
    int n, j;
    cin >> s >> n;
    for (int cnt = 1; cnt < n; cnt++) {
        string t;
        for (int i = 0; i < s.length(); i = j) {
            for (j = i; j < s.length() && s[j] == s[i]; j++);
            t += s[i] + to_string(j - i);
        }
        s = t;
    }
    cout << s;
    return 0;
}
