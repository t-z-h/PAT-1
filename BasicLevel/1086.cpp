//
// Created by jun on 2020/4/20.
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
    freopen("input/1086.txt", "r", stdin);
#endif
    // write your code here
    int a, b, ans;
    scanf("%d %d", &a, &b);
    string s = to_string(a * b);
    reverse(s.begin(), s.end());
    printf("%d", stoi(s));
    return 0;
}

