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
    freopen("input/1065.txt", "r", stdin);
#endif
    // write your code here
    int n, a, b, m;
    scanf("%d", &n);
    vector<int> couple(100000, -1);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &a, &b);
        couple[a] = b;
        couple[b] = a;
    }
    scanf("%d", &m);
    vector<int> guest(m), isExist(100000);
    for (int i = 0; i < m; i++) {
        scanf("%d", &guest[i]);
        if (couple[guest[i]] != -1)
            isExist[couple[guest[i]]] = 1;
    }
    set<int> s;
    for (int i = 0; i < m; i++) {
        if (!isExist[guest[i]])
            s.insert(guest[i]);
    }
    printf("%d\n", s.size());
    for (auto it = s.begin(); it != s.end(); it++) {
        if (it != s.begin()) printf(" ");
        printf("%05d", *it);
    }
    return 0;
}

