//
// Created by jun on 2020/4/13.
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
    freopen("input/1010.txt", "r", stdin);
#endif
    // write your code here
    stack<string> v;
    string s;
    while (cin >> s) v.push(s);
    cout << v.top();
    v.pop();
    while (!v.empty()){
        cout << " " << v.top();
        v.pop();
    }
    return 0;
}

