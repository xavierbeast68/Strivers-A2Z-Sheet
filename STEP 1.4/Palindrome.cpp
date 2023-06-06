/*
*URL-> https://practice.geeksforgeeks.org/problems/palindrome0746/1
*/
/*
Input: n = 55555
Output: Yes

Input: n = 123
Output: No

Your Task:
You don't need to read or print anything. Your task is to complete the function is_palindrome() which takes the number as input parameter and returns "Yes" if it is palindrome otherwise returns "No"(Without quotes).
*/


#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string is_palindrome(int n)
	{
	    // Code here.
        if(n%10==0 && n!=0)
        {
            return "No";
        }
        int rev=0;
        while(n>rev)
        {
            rev=rev*10+n%10;
            n/=10;
        }
        return (n==rev || n==rev/10)?"Yes":"No";
	}
};


int main()
{
    Solution gfg;
    int n;cin>>n;
    string ans=gfg.is_palindrome(n);
    cout<<ans<<endl;
}
