//* https://www.codingninjas.com/studio/problems/assign-cookies_8390826

#include <bits/stdc++.h>
using namespace std;

int assignCookie(vector<int> &greed, vector<int> &size) {
	// Write your code here.

    int cnt = 0;

    sort(begin(greed),end(greed));
    sort(begin(size),end(size));

    int i = greed.size()-1, j = size.size()-1;

    while(j >= 0 && i >= 0){
        // can be satisfied
        if(greed[i] <= size[j]){
            cnt++;
            j--;
            i--;
        }
		// cannot be satisfied
        else{
            i--;
        }
    }
    
    return cnt;	
}