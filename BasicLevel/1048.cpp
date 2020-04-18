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
    freopen("input/1048.txt", "r", stdin);
#endif
    // write your code here
    string a, b, c;
    cin >> a >> b;
    int lena = a.length(), lenb = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (lena > lenb)
        b.append(lena - lenb, '0');
    else
        a.append(lenb - lena, '0');
    char str[14] = {"0123456789JQK"};
    for (int i = 0; i < a.length(); i++) {
        if (i % 2 == 0) {
            c += str[(a[i] - '0' + b[i] - '0') % 13];
        } else {
            int temp = b[i] - a[i];
            if (temp < 0) temp += 10;
            c += str[temp];
        }
    }
    for (int i = c.length() - 1; i >= 0; i--)
        cout << c[i];
    return 0;
}

