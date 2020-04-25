//
// Created by jun on 2020/4/25.
//
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
    reverse(reverse(n)) = n
    doing nothing
*/

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1008.txt", "r", stdin);
#endif
    int N, M;
    cin >> N >> M;
    M = M % N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++)
        cin >> nums[i];
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + M);
    reverse(nums.begin() + M, nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (i != 0) cout << " ";
        cout << nums[i];
    }

    return 0;
}

