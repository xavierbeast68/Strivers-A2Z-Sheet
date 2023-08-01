//* https://www.codingninjas.com/studio/problems/fractional-knapsack_975286
//* https://takeuforward.org/data-structure/fractional-knapsack-problem-greedy-approach/

#include <bits/stdc++.h>
using namespace std;

bool static comp(pair<int, int> a, pair<int, int> b){
    double r1 = (double) a.second / (double) a.first;
    double r2 = (double) b.second / (double) b.first;
    return r1 > r2;
}

double maximumValue (vector<pair<int, int>>& items, int n, int w){
   // Write your code here.
   // ITEMS contains {weight, value} pairs.

    sort(items.begin(), items.end(), comp);

    int curWeight = 0;
    double finalvalue = 0.0;

    for (int i = 0; i < n; i++) {
        if (curWeight + items[i].first <= w){
            curWeight += items[i].first;
            finalvalue += items[i].second;
        } 
        else{
            int remain = w - curWeight;
            finalvalue += (items[i].second/ (double) items[i].first) * (double) remain;
            break;
        }
    }
    
    return finalvalue;
}