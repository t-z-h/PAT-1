//
// Created by jun on 2020/4/25.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
/*
    1、struct student 存储 一行数据；
    2、友元重载operator< 搭配 priority_queue实现自动排序；
    3、关于分类:
        3.1 input.morality and input.ability < L
        3.2 input.morality and input.ability >= H
        3.3 input.morality >= H && input.ability < H
        3.4 input.morality and input.ability < H && input.morality >= input.ability
        3.5 else
*/

struct student {
    int id;
    int morality;
    int ability;

    friend bool operator<(student s1, student s2) {
        if ((s1.morality + s1.ability) != (s2.morality + s2.ability))
            return (s1.morality + s1.ability) < (s2.morality + s2.ability);
        else if (s1.morality != s2.morality)
            return s1.morality < s2.morality;
        else
            return s1.id > s2.id;
    }

};


int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1015.txt", "r", stdin);
#endif

    int N, L, H;
    scanf("%d %d %d", &N, &L, &H);
    priority_queue<student> q[4];
    student input;
    int total = N;
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &input.id, &input.morality, &input.ability);
        if (input.morality < L || input.ability < L)
            total--;
        else if (input.morality >= H && input.ability >= H)
            q[0].push(input);
        else if (input.morality >= H && input.ability < H)
            q[1].push(input);
        else if (input.morality < H && input.ability < H && input.morality >= input.ability)
            q[2].push(input);
        else
            q[3].push(input);
    }
    printf("%d\n", total);
    for (auto &i : q)
        while (!i.empty()) {
            printf("%d %d %d\n", i.top().id, i.top().morality, i.top().ability);
            i.pop();
        }
    return 0;
}

