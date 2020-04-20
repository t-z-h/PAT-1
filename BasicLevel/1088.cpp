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
int m, x, y;

void print(double t) {
    if (m == t) printf(" Ping");
    else if (m < t) printf(" Cong");
    else printf(" Gai");
}


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1088.txt", "r", stdin);
#endif
    // write your code here
    scanf("%d %d %d", &m, &x, &y);
    for (int i = 99; i >= 10; i--) {
        int j = i % 10 * 10 + i / 10;
        double k = abs(j - i) * 1.0 / x;
        if (j == k * y) {
            cout << i;
            print(i);
            print(j);
            print(k);
            return 0;
        }
    }
    cout << "No Solution";
    return 0;
}

