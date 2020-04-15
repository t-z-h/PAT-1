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


int main(){
#ifdef ONLINE_JUDGE
#else
    freopen("input/1030.txt", "r", stdin);
#endif
    // write your code here
    int n;
    long long p;
    scanf("%d%lld", &n, &p);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int result = 0, temp = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + result; j < n; j++){
            if (v[j] <= v[i] * p) {
                temp = j - i + 1;
                result = max(result, temp);
            } else {
                break;
            }
        }
    }
    cout << result;
    return 0;
}

