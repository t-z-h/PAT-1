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
    freopen("input/1061.txt", "r", stdin);
#endif
    // write your code here
    int n, m, temp;
    scanf("%d%d", &n, &m);
    vector<int> score(m), ans(m);
    for (int i = 0; i < m; i++)
        scanf("%d", &score[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &ans[i]);
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < m; j++) {
            scanf("%d", &temp);
            if (temp == ans[j])
                total += score[j];
        }
        printf("%d\n", total);
    }
    return 0;
}

