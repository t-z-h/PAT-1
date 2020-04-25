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
    freopen("input/1004.txt", "r", stdin);
#endif
    int n, temp, maxScore = -1, minScore = 101;
    string name, studentId, maxName, maxId, minName, minId;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> studentId >> temp;
        if (temp > maxScore) {
            maxScore = temp;
            maxName = name;
            maxId = studentId;
        }
        if (temp < minScore) {
            minScore = temp;
            minName = name;
            minId = studentId;
        }
    }
    cout << maxName << " " << maxId << endl << minName << " " << minId;

    return 0;
}

