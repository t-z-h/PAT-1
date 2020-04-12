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


/*
 * 分析:
 * 1. 形如xPATx都可以获得"答案正确"
 *    以下为正确:
 *    I.   PAT
 *    II.  APATA
 *    III. AAPATAA
 *    IV.  AAAPATAAA
 *    ==> 规律: 中间一个A，两边等量的A
 * 2. aPbTc是正确的，那么aPbATca也是正确的
 *    以I、II、III、IV、为例
 *    I.   PAT --> (as aPbTc)a=c=""，b="A" --> PAAT、PAAAAAT,中间多少个A均正确
 *    II.  APATA --> a=b=c="A" --> APAATAA(a="A", b=c="AA") --> APAAATAAA
 *    III. AAPATAA --> a=c="AA", b="A" --> AAPAATAAAA --> AAPAAATAAAAAA
 *
 * 规律: times =  b后面的"A"个数，则c后接times x a
 *  1. 只能有1个P，1个T；
 *  2. P和T之间不能没有A；
 *  3. 开头"A"的个数 * 中间"A"的个数 = 结尾"A"的个数
 */

// define global variable here


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1003.txt", "r", stdin);
#endif
    // write your code here
    int n, p_last_index = 0, t_last_index = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        map<char, int> m;
        for (int j = 0; j < s.size(); j++) {
            m[s[j]]++;
            if (s[j] == 'P') p_last_index = j;
            else if (s[j] == 'T') t_last_index = j;
        }
        if (m['P'] == 1 &&  /* 'P'仅出现1次 */
            m['A'] != 0 &&  /* 'A'至少出现1次 */
            m['T'] == 1 &&  /* 'T'仅出现1次 */
            m.size() == 3 &&  /* 3种字符均出现 */
            t_last_index - p_last_index != 1 &&  /* 'P'、'T'之间有'A' */
            /* 开头"A"的个数 * 中间"A"的个数 = 结尾"A"的个数 */
            p_last_index * (t_last_index - p_last_index - 1) == s.length() - t_last_index - 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

