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
    freopen("input/1052.txt", "r", stdin);
#endif
    // write your code here
    vector<vector<string>> v;
    for (int i = 0; i < 3; i++) {
        string s;
        getline(cin, s);
        vector<string> row;
        int j = 0, k = 0;
        while (j < s.length()) {
            if (s[j] == '[') {
                while (k++ < s.length()) {
                    if (s[k] == ']') {
                        row.push_back(s.substr(j + 1, k - j - 1));
                        break;
                    }
                }
            }
            j++;
        }
        v.push_back(row);
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (a > v[0].size() || b > v[1].size() || c > v[2].size() || d > v[1].size() || e > v[0].size() || a < 1 ||
            b < 1 || c < 1 || d < 1 || e < 1) {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }
        cout << v[0][a - 1] << "(" << v[1][b - 1] << v[2][c - 1] << v[1][d - 1] << ")" << v[0][e - 1] << endl;
    }
    return 0;
}

