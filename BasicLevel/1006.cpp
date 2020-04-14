//
// Created by jun on 2020/4/13.
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
    freopen("input/1006.txt", "r", stdin);
#endif
    // write your code here
    int n, i = 0;
    cin >> n;
    int b[3] = {0};
    while (n != 0) {
        b[i++] = n % 10;
        n /= 10;
    }
    for (i = 0; i < b[2]; i++)
        cout << "B";
    for (i = 0; i < b[1]; i++)
        cout << "S";
    for (i = 1; i <= b[0]; i++)
        cout << i;
    return 0;
}

