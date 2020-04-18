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
    freopen("input/1043.txt", "r", stdin);
#endif
    // write your code here
    int map[128] = {0}, c;
    while ((c = cin.get()) != EOF) map[c]++;
    while (0 < map['P'] || 0 < map['A'] || map['T'] > 0 || map['e'] > 0 || map['s'] > 0 || map['t'] > 0) {
        if (map['P']-- > 0) cout << 'P';
        if (map['A']-- > 0) cout << 'A';
        if (map['T']-- > 0) cout << 'T';
        if (map['e']-- > 0) cout << 'e';
        if (map['s']-- > 0) cout << 's';
        if (map['t']-- > 0) cout << 't';
    }

    return 0;
}

