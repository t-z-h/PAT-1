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


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1028.txt", "r", stdin);
#endif
    // write your code here
    int n, cnt = 0;
    cin >> n;
    string name, birth, maxname, minname, maxbirth = "1814/09/06", minbirth = "2014/09/06";
    for (int i = 0; i < n; i++) {
        cin >> name >> birth;
        if (birth >= "1814/09/06" && birth <= "2014/09/06") {
            cnt++;
            if (birth >= maxbirth) {
                maxbirth = birth;
                maxname = name;
            }
            if (birth <= minbirth) {
                minbirth = birth;
                minname = name;
            }
        }
    }
    cout << cnt;
    if (cnt != 0) cout << " " << minname << " " << maxname;
    return 0;
}

