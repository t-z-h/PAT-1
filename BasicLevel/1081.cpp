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
    freopen("input/1081.txt", "r", stdin);
#endif
    // write your code here
    int N;
    cin >> N;
    getchar();
    for (int i = 0; i < N; i++) {
        string s;
        getline(cin, s);
        if (s.length() >= 6) {
            int invalid = 0, hasAlpha = 0, hasNum = 0;
            for (int j = 0; j < s.length(); j++) {
                if (s[j] != '.' && !isalnum(s[j])) invalid = 1;
                else if (isalpha(s[j])) hasAlpha = 1;
                else if (isdigit(s[j])) hasNum = 1;
            }
            if (invalid == 1) cout << "Your password is tai luan le.\n";
            else if (hasNum == 0) cout << "Your password needs shu zi.\n";
            else if (hasAlpha == 0) cout << "Your password needs zi mu.\n";
            else cout << "Your password is wan mei.\n";
        } else
            cout << "Your password is tai duan le.\n";
    }
    return 0;
}

