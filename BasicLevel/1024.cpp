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

using namespace std;

// define global variable here


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1024.txt", "r", stdin);
#endif
    // write your code here
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != 'E') i++;
    string t = s.substr(1, i - 1);  // 提取基数
    int n = stoi(s.substr(i + 1)); // 幂
    if (s[0] == '-') cout << '-';
    if (n < 0) {  // 负幂
        cout << "0.";
        for (int j = 0; j < abs(n) - 1; j++) cout << '0';
        for (char j : t)
            if (j != '.') cout << j;
    } else {  // 正幂
        cout << t[0];
        int cnt, j;
        for (j = 2, cnt = 0; j < t.length() && cnt < n; j++, cnt++) cout << t[j];
        if (j == t.length()) {
            for (int k = 0; k < n - cnt; k++) cout << '0';
        } else {
            cout << '.';
            for (int k = j; k < t.length(); k++) cout << t[k];
        }
    }
    return 0;
}

