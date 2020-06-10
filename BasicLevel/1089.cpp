//
// Created by jun on 2020/4/20.
//
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// define global variable here


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1089.txt", "r", stdin);
#endif
    // write your code here
    int n;
    cin >> n;
    vector<int> inputWords(n + 1);  // 保存输入
    for (int i = 1; i <= n; i++) cin >> inputWords[i];
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            vector<int> lie /* 保存说谎人下标 */, status(n + 1, 1) /* 保存身份: -1 狼人, 1 好人 */;
            status[i] = status[j] = -1;
            for (int k = 1; k <= n; k++)
                if (inputWords[k] * status[abs(inputWords[k])] < 0) lie.push_back(k);
            if (lie.size() == 2 && status[lie[0]] + status[lie[1]] == 0) {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "No Solution";
    return 0;
}


