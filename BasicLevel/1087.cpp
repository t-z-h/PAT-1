//
// Created by jun on 2020/4/20.
//
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1087.txt", "r", stdin);
#endif
    int n;
    scanf("%d", &n);
    set<int> s;
    for (int i = 1; i <= n; i++)
        s.insert(i / 2 + i / 3 + i / 5);
    printf("%d", s.size());
    return 0;
}

