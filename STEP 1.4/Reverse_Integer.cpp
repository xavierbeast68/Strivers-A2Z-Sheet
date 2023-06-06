/*
*URL-> https://leetcode.com/problems/reverse-integer/description/
*/
/*
> Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
> Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Input: x = 123
Output: 321

Input: x = -123
Output: -321

Input: x = 120
Output: 21
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int reverse(int x)
    {
        int rev = 0;
        while (x != 0)
        {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};


int main()
{
    Solution leetcode;
    int x;cin>>x;
    long long ans=leetcode.reverse(x);
    cout<<ans<<endl;
}

/*
< JAVA Solution

class Solution {
    public int reverse(int x) {
        long rev=0;
        while(x!=0)
        {
            int pop=x%10;
            rev=rev*10+pop;
            x/=10;
            if(rev>Integer.MAX_VALUE || rev<Integer.MIN_VALUE) 
            {
                return 0;
            }
        }
        return (int)rev;
    }
}
*/