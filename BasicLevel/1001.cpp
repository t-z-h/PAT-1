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
    freopen("input/1001.txt", "r", stdin);
#endif

    // write your code here
    int n, step = 0;
    scanf("%d", &n);
    while (n != 1){
        if (n % 2 == 0) n /= 2;
        else n = (3 * n + 1) / 2;
        step++;
    }
    printf("%d\n", step);
    return 0;
}

