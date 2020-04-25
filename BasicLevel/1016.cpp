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

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1016.txt", "r", stdin);
#endif
    string a, b;
    char da, db;
    int pa = 0, pb = 0;
    cin >> a >> da >> b >> db;
    for (auto n: a) {
        if (n == da)
            pa = pa * 10 + da - '0';
    }
    for (auto n: b) {
        if (n == db)
            pb = pb * 10 + db - '0';
    }
    printf("%d", pa + pb);
    return 0;
}

