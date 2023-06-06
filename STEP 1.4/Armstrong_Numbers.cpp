/*
*URL-> https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
*/
/*
*Editorial soln->

string armstrongNumber(int n)
{
    int a=n%10,b= (n/10)%10,c = n/100;
    if(a*a*a + b*b*b +c*c*c == n)
        return "Yes";
    else
        return "No";
}

< Expected Time Complexity: O(1)
> Expected Auxiliary Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string armstrongNumber(int n){
        // code here
        int temp=n,ans;
        while(temp!=0)
        {
            int d=temp%10;
            ans=ans+d*d*d;
            temp/=10;
        }
        return ans==n?"Yes":"No";
    }
};


int main()
{
    Solution gfg;
    int x;cin>>x;
    string ans=gfg.armstrongNumber(x);
    cout<<ans<<endl;
}