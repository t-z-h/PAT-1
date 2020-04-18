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
    freopen("input/1057.txt", "r", stdin);
#endif
    // write your code here
    string s;
    getline(cin, s);
    int n = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            s[i] = toupper(s[i]);
            n += (s[i] - 'A' + 1);
        }
    }
    int cnt0 = 0, cnt1 = 0;
    while (n != 0) {
        if (n % 2 == 0) {
            cnt0++;
        } else {
            cnt1++;
        }
        n /= 2;
    }
    printf("%d %d", cnt0, cnt1);
    return 0;
}

