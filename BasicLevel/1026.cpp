//
// Created by jun on 2020/4/15.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1026.txt", "r", stdin);
#endif
    int a, b;
    cin >> a >> b;
    int n = ((b - a) + 50) / 100;
    int hour = n / 3600;
    n %= 3600;
    int minute = n / 60, second = n % 60;
    printf("%02d:%02d:%02d\n", hour, minute, second);
    return 0;
}

