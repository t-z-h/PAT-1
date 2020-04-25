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
    1、素数判断
    2、遍历num, 计数器cnt, if M <= cnt <= N -> num存入v
    3、重置计数器cnt， 10个数一行输出，每行不是第1个数，输出空格。
*/
bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1013.txt", "r", stdin);
#endif
    int N, M, cnt = 0, num = 2;
    cin >> M >> N;
    vector<int> v;
    while (cnt < N) {
        if (isPrime(num)) {
            cnt++;
            if (cnt >= M) v.push_back(num);
        }
        num++;
    }
    cnt = 0;
    for (int n: v) {
        cnt++;
        if (cnt % 10 != 1) printf(" ");
        printf("%d", n);
        if (cnt % 10 == 0) printf("\n");

    }

    return 0;
}
