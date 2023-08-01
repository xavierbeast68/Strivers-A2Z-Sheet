//* https://leetcode.com/problems/assign-cookies/description/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt = 0;

        sort(begin(g),end(g));
        sort(begin(s),end(s));
        
        int i = g.size()-1, j = s.size()-1;

        while(j >= 0 && i >= 0){
            // can be satisfied
            if(g[i] <= s[j]){
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