//* https://practice.geeksforgeeks.org/problems/assign-cookies/1

class Solution {
public:
    int maxChildren(int N, int M, vector<int> &greed, vector<int> &sz) {
        // code here
        
        int cnt = 0;

        sort(begin(greed),end(greed));
        sort(begin(sz),end(sz));
        
        int i = N-1, j = M-1;

        while(j >= 0 && i >= 0){
            // can be satisfied
            if(greed[i] <= sz[j]){
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
};