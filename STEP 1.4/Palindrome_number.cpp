/*
*URL-> https://leetcode.com/problems/palindrome-number/
*/
/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool isPalindrome(int x)
    {
        if(x<0 || (x%10==0 && x!=0))    //! important edge case
        {
            return false;
        }
        int revnumber=0;
        while(x>revnumber)
        {
            revnumber=revnumber*10+x%10;
            x/=10;
        }
        return x==revnumber || x==revnumber/10;
    }
};


int main()
{
    Solution leetcode;
    int n;cin>>n;
    bool ans=leetcode.isPalindrome(n);
    cout<<ans<<endl;
}

//* Another solution using string
/*
bool isPalindrome(int x)
{
    string s = to_string(x);
    int start = 0;
    int end = s.length() - 1;
    while(start < end)
    {
        if(s[start++] != s[end--])
            return false;
    }
    return true;
}
*/

//* Editorial Solution (Optimised approach) =>
/*
bool isPalindrome(int x)
{
    if(x<0 || (x%10==0 && x!=0))
    {
        return false;
    }
    int revnumber=0;
    while(x>revnumber)
    {
        revnumber=revnumber*10+x%10;
        x/=10;
    }
    return x==revnumber || x==revnumber/10;
}
*/