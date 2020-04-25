//
// Created by jun on 2020/4/25.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

/*
    1、input num -> int b[3];
    2、遍历b[3]，按要求输出。
*/
using namespace std;


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1006.txt", "r", stdin);
#endif
    int n, i = 0;
    int b[3] = {0};
    cin >> n;
    while (n) {
        b[i++] = n % 10;
        n /= 10;
    }
    for (i = 0; i < b[2]; i++)
        cout << 'B';
    for (i = 0; i < b[1]; i++)
        cout << 'S';
    for (i = 1; i <= b[0]; i++)
        cout << i;


    return 0;
}

