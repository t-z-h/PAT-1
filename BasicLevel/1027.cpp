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
/*
 * 分析: 关键求有多少层
 *      设有i层，上半部分(不含1个*的层)共有: 3 + 5 + ... + (2i+1) = (3 + 2i + 1) * i / 2 = i * (i + 2) 个元素
 *   整个沙漏有 2 * i * (i + 2) + 1个元素
 */


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1027.txt", "r", stdin);
#endif
    // write your code here
    int N, row = 0;
    char c;
    cin >> N >> c;
    for (int i = 0; i < N; i++) {
        if ((2 * i * (i + 2) + 1) > N) {
            row = i - 1;
            break;
        }
    }
    for (int i = row; i >= 1; i--) {
        for (int k = row - i; k >= 1; k--) cout << " ";
        for (int j = i * 2 + 1; j >= 1; j--) cout << c;
        cout << endl;
    }
    for (int i = 0; i < row; i++) cout << " ";
    cout << c << endl;
    for (int i = 1; i <= row; i++) {
        for (int k = row - i; k >= 1; k--) cout << " ";
        for (int j = i * 2 + 1; j >= 1; j--) cout << c;
        cout << endl;
    }
    cout << (N - (2 * row * (row + 2) + 1));
    return 0;
}

