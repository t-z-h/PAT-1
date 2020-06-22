//
// Created by jun on 2020/6/10.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1093.txt", "r", stdin);
#endif
    string inputStr1, inputStr2, combineStr;
    int hashTable[200] = {0};  /* 保存字符出现次数，e.g. index: 65 -> 'a' */
    getline(cin, inputStr1);
    getline(cin, inputStr2);
    combineStr = inputStr1 + inputStr2;
    for (char ch : combineStr) {
        if (!hashTable[ch]) cout << ch;  /* first appearance */
        hashTable[ch] = 1;
    }
    return 0;
}

