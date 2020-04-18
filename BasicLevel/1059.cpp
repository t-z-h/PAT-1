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
int ran[10000];

bool isPrime(int a) {
    if (a <= 1) return false;
    int Sqrt = sqrt((double) a);
    for (int i = 2; i <= Sqrt; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1059.txt", "r", stdin);
#endif
    // write your code here
    int n, k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int id;
        scanf("%d", &id);
        ran[id] = i + 1;
    }
    scanf("%d", &k);
    set<int> ss;
    for (int i = 0; i < k; i++) {
        int id;
        scanf("%d", &id);
        printf("%04d: ", id);
        if (ran[id] == 0) {
            printf("Are you kidding?\n");
            continue;
        }
        if (ss.find(id) == ss.end()) {
            ss.insert(id);
        } else {
            printf("Checked\n");
            continue;
        }
        if (ran[id] == 1) {
            printf("Mystery Award\n");
        } else if (isPrime(ran[id])) {
            printf("Minion\n");
        } else {
            printf("Chocolate\n");
        }
    }
    return 0;
}

