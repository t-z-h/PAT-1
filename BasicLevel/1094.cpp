//
// Created by jun on 2020/6/10.
//
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    if (n == 0 || n == 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1094.txt", "r", stdin);
#endif
    int l, k;
    string inputStr;
    cin >> l >> k >> inputStr;
    for (int i = 0; i <= l - k; i++) {
        string partStr = inputStr.substr(i, k);
        int num = stoi(partStr);
        if (isPrime(num)) {
            cout << partStr;
            return 0;
        }
    }
    cout << "404\n";
    return 0;
}

