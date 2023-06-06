/*
*URL-> https://practice.geeksforgeeks.org/problems/java-if-else-decision-making0924/0?category%5B%5D=Java&category%5B%5D=Java&difficulty%5B%5D=-2&page=1&query=category%5B%5DJavadifficulty%5B%5D-2page1category%5B%5DJava
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string compareNM(int n, int m){
        // code here
        if(n==m) return "equal";
        else if(n<m) return "lesser";
        else return "greater";
    }
};

int main()
{
    Solution gfg;
    int n,m;cin>>n>>m;
    string ans=gfg.compareNM(n,m);
    cout<<ans<<endl;
}

/*
Input:
n = 4
m = 8

Output:
lesser

Explanation:
4 < 8 so print 'lesser'.

Input:
n = 8
m = 8

Output:
equal

Explanation:
8 = 8 so print 'equal'.
*/