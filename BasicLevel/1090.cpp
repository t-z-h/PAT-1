//
// Created by jun on 2020/6/8.
//
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1090.txt", "r", stdin);
#endif
    int n, m, input1, input2;
    map<int, vector<int>> incompatibilityMap;  // 不相容映射关系
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &input1, &input2);
        incompatibilityMap[input1].push_back(input2);
        incompatibilityMap[input2].push_back(input1);
    }
    while (m--) {
        int cnt, flag = 0, goods[100000] = {0};
        scanf("%d", &cnt);
        vector<int> inventory(cnt);
        for (int i = 0; i < cnt; i++) {
            scanf("%d", &inventory[i]);
            goods[inventory[i]] = 1;  // 标记物品inventory[i] 已出现
        }
        for (int & i : inventory)
            for (int j : incompatibilityMap[i])
                if (goods[j] == 1) flag = 1;
        printf("%s\n", flag ? "No" : "Yes");
    }
    return 0;
}

