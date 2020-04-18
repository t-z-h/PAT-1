//
// Created by jun on 2020/4/16.
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
    freopen("input/1036.txt", "r", stdin);
#endif
    // write your code here
    int N;
    char c;
    cin >> N >> c;
    int t = N / 2 + N % 2;
    for (int i = 0; i < N; i++)
        cout << c;
    cout << endl;
    for (int i = 0; i < t - 2; i++) {
        cout << c;
        for (int k = 0; k < N - 2; k++)
            cout << " ";
        cout << c << endl;
    }
    for (int i = 0; i < N; i++)
        cout << c;
    return 0;
}

