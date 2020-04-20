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
        int k, flag = 0;
        cin >> k;
        for (int n = 1; n < 10; n++) {
            int mul = n * k * k;
            string smul = to_string(mul), sk = to_string(k);
            string smulend = smul.substr(smul.length() - sk.length());
            if (smulend == sk) {
                printf("%d %d\n", n, mul);
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf("No\n");
    }
    return 0;
}

