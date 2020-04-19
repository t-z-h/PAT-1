//
// Created by jun on 2020/4/19.
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
bool forbid[10000];

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1072.txt", "r", stdin);
#endif
    // write your code here
    int n, m, temp, k, snum = 0, fnum = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &temp);
        forbid[temp] = true;
    }
    for (int i = 0; i < n; i++) {
        char name[10];
        bool flag = false;
        scanf("%s %d", name, &k);
        for (int j = 0; j < k; j++) {
            scanf("%d", &temp);
            if (forbid[temp]) {
                if (!flag) {
                    printf("%s:", name);
                    flag = true;
                }
                printf(" %04d", temp);
                fnum++;
            }
        } /* end j loop */
        if (flag) {
            printf("\n");
            snum++;
        }
    } /* end i loop */
    printf("%d %d\n", snum, fnum);

    return 0;
}


