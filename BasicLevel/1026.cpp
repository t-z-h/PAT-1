//
// Created by jun on 2020/4/15.
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
    freopen("input/1026.txt", "r", stdin);
#endif
    // write your code here
    int a, b;
    cin >> a >> b;
    int n = ((b - a) + 50) / 100;
    int hour = n / 3600;
    n = n % 3600;
    int minute = n / 60, second = n % 60;
    printf("%02d:%02d:%02d\n", hour, minute, second);

    return 0;
}


