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
    freopen("input/1051.txt", "r", stdin);
#endif
    // write your code here
    double r1, p1, r2, p2, A, B;
    cin >> r1 >> p1 >> r2 >> p2;
    A = r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2));
    B = r1 * r2 * (cos(p1) * sin(p2) + sin(p1) * cos(p2));
    if (A + 0.005 >= 0 && A < 0)
        printf("0.00");
    else
        printf("%.2f", A);
    if (B >= 0)
        printf("+%.2fi", B);
    else if (B + 0.005 >= 0 && B < 0)
        printf("+0.00i");
    else
        printf("%.2fi", B);
    return 0;
}

