//
// Created by jun on 2020/4/20.
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
    freopen("input/1091.txt", "r", stdin);
#endif
    // write your code here
    int m;
    cin >> m;
    while (m--) {
        int k, existSolution = 0;
        cin >> k;
        for (int n = 1; n < 10; n++) {
            int nSquare = n * k * k;
            string nSquareStr = to_string(nSquare), kStr = to_string(k);
            string tailStr =nSquareStr.substr(nSquareStr.length() - kStr.length());
            if (tailStr == kStr) {
                printf("%d %d\n", n, nSquare);
                existSolution = 1;
                break;
            }
        }
        if (!existSolution) printf("No\n");
    }
    return 0;
}

