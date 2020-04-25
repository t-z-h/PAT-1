//
// Created by jun on 2020/4/25.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
    1、素数判断-> bool isPrime(int n)；
    2、isPrime(i) && isPrime(i - 2) -> cnt++;
*/

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1007.txt", "r", stdin);
#endif
    int N, cnt = 0;
    cin >> N;
    for (int i = 5; i <= N; i++)
        if (isPrime(i) && isPrime(i - 2)) cnt++;
    cout << cnt;
    return 0;
}

