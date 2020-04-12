//
// Created by jun on 2020/4/12.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
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
    freopen("input/1004.txt", "r", stdin);
#endif
    // write your code here
    int n, maxScore = -1, minScore = 101, score;
    cin >> n;
    string maxName, minName, maxId, minId, name, id;
    for (int i = 0; i < n; i++) {
        cin >> name >> id >> score;
        if (maxScore < score) {
            maxScore = score;
            maxName = name;
            maxId = id;
        }
        if (minScore > score) {
            minScore = score;
            minName = name;
            minId = id;
        }
    }
    cout << maxName << " " << maxId << "\n" << minName << " " << minId;
    return 0;
}