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
    freopen("input/1002.txt", "r", stdin);
#endif

    // write your code here
    string s;
    int res = 0;
    cin >> s;
    string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for (int i = 0; i < s.length(); i++)
        res += (s[i] - '0');
    string num = to_string(res);
    for (int i = 0; i < num.length(); i++){
        if (i != 0) cout << " ";
        cout << str[num[i] - '0'];
    }

    return 0;
}

