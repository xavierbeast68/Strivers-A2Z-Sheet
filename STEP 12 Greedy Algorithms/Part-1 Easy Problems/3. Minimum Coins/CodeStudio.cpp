//* https://www.codingninjas.com/studio/problems/find-minimum-number-of-coins_975277
//* https://takeuforward.org/data-structure/find-minimum-number-of-coins/

#include <bits/stdc++.h> 
using namespace std;

int greedy(vector<int> coins, int amount, int n){
    sort(coins.begin(), coins.end());
    int ans = 0;
    
    for(int i = n-1; i >= 0; i--){
        // while(amount >= coins[i]){
        //     amount -= coins[i];
            
        //     ans++;
        // }

        if(amount == 0){
            break;
        }

        ans += floor(amount / coins[i]);
        amount = amount % coins[i];
    }
    return amount == 0 ? ans : -1;
}
    
int findMinimumCoins(int amount) 
{
    // Write your code here

    vector<int> coins{1,2,5,10,20,50,100,500,1000};
    return greedy(coins, amount, 9);
}
