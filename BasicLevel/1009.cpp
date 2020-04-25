//
// Created by jun on 2020/4/25.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

/*
    input word -> stack
*/

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1009.txt", "r", stdin);
#endif
    stack<string> words;
    int notFirstPrint = 0;
    string temp;
    while (cin >> temp)
        words.push(temp);
    while (!words.empty()) {
        if (notFirstPrint) cout << " ";
        cout << words.top();
        words.pop();
        notFirstPrint = 1;
    }


    return 0;
}

