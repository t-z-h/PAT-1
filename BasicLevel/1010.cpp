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
    d(a*x^b) = a*b*x^(b-1) dx
    input: a b, if b != 0(常数导数为0) -> (a*b) (b-1)
    注意：输出格式，及输入为0次多项式
*/

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1010.txt", "r", stdin);
#endif
    int a, b, notFirstPrint = 0;
    while (cin >> a >> b) {
        if (b != 0) {
            if (notFirstPrint) cout << " ";
            cout << a * b << " " << b - 1;
            notFirstPrint = 1;
        }
    }
    if (!notFirstPrint) cout << "0 0";
    return 0;
}

