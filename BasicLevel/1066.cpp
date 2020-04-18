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
    freopen("input/1066.txt", "r", stdin);
#endif
    // write your code here
    int m, n, a, b, num, temp;
    scanf("%d%d%d%d%d", &m, &n, &a, &b, &num);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &temp);
            if (temp >= a && temp <= b)
                temp = num;
            if (j != 0) printf(" ");
            printf("%03d", temp);
        }
        printf("\n");
    }
    return 0;
}

