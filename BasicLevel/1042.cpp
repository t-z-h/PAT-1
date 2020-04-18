//
// Created by jun on 2020/4/17.
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
    freopen("input/1042.txt", "r", stdin);
#endif
    // write your code here
    string s;
    getline(cin, s);
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    for (int i = 0; i < s.length(); i++)
        if (islower(s[i])) a[s[i] - 'a']++;
    int max = a[0], t = 0;
    for (int i = 1; i < 26; i++) {
        if (a[i] > max) {
            max = a[i];
            t = i;
        }
    }
    printf("%c %d", t + 'a', max);
    return 0;
}

