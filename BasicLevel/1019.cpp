//
// Created by jun on 2020/4/26.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
    1、string 使用 sort 可实现排序, 自定义cmp 逆序;
    2、stoi: string -> int
    3、to_string: int -> string
*/

bool cmp(char a, char b) { return a > b; }

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1019.txt", "r", stdin);
#endif
    string s, ascent, descent;
    cin >> s;
    s.insert(0, 4 - s.length(), '0');
    do {
        ascent = s;
        descent = s;
        sort(ascent.begin(), ascent.end(), cmp);
        sort(descent.begin(), descent.end());
        int result = stoi(ascent) - stoi(descent);
        s = to_string(result);
        s.insert(0, 4 - s.length(), '0');
        cout << ascent << " - " << descent << " = " << s << endl;
    } while (s != "6174" && s != "0000");
    return 0;
}

