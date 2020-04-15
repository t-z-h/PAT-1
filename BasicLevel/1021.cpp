//
// Created by jun on 2020/4/15.
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

int main(){
#ifdef ONLINE_JUDGE
#else
    freopen("input/1021.txt", "r", stdin);
#endif
    // write your code here
    string n;
    cin >> n;
    int res[10] = {0};
    for (char x: n){
        res[x  - '0']++;
    }
    for (int i = 0; i < 10; i++){
        if (res[i] != 0)
            cout <<  i << ":" << res[i] << endl;
    }

    return 0;
}


