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


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1071.txt", "r", stdin);
#endif
    // write your code here
    int T, K, n1, b, t, n2;
    scanf("%d %d", &T, &K);
    for (int i = 0; i < K; i++) {
        scanf("%d %d %d %d", &n1, &b, &t, &n2);
        int ans = n1 > n2 ? 0 : 1;
        if (T == 0) {
            printf("Game Over.\n");
            return 0;
        } else if (t > T) {
            printf("Not enough tokens.  Total = %d.\n", T);
        } else if (ans == b) {
            /* win */
            T += t;
            printf("Win %d!  Total = %d.\n", t, T);
        } else if (ans != b) {
            T -= t;
            printf("Lose %d.  Total = %d.\n", t, T);
        }
    }

    return 0;
}

