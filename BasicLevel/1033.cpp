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
    freopen("input/1033.txt", "r", stdin);
#endif
    // write your code here
    string bad, should;
    getline(cin, bad);
    getline(cin, should);
    for (char i : should) {
        if (bad.find(toupper(i)) != string::npos) continue;
        if (isupper(i) && bad.find('+') != string::npos) continue;
        cout << i;
    }
    return 0;
}

