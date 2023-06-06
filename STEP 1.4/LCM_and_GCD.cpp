/*
*URL-> https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
*/
/*
Input:
A = 5 , B = 10
Output:
10 5
Explanation:
LCM of 5 and 10 is 10, while
thier GCD is 5.

Input:
A = 14 , B = 8
Output:
56 2
Explanation:
LCM of 14 and 8 is 56, while
thier GCD is 2.

Your Task:
You don't need to read input or print anything. Your task is to complete the function lcmAndGcd() which takes an Integer N as input and returns a List of two Integers, the required LCM and GCD.
> Expected Time Complexity: O(log(min(A, B))
> Expected Auxiliary Space: O(1)

<Basic Euclidean Algorithm for GCD
The algorithm is based on below facts.

>1. If we subtract smaller number from larger (we reduce larger number), GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
>2. Now instead of subtraction, if we divide smaller number, the algorithm stops when we find remainder 0.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long gcdf(long long a, long long b) 
    {
        if (b > a) 
        {
            return gcdf(b, a);
            
        } 
        if (b == 0) 
        {
            return a;
            
        } 
        return gcdf(b, a % b);
        
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        
        long long gcd=gcdf(A,B);
        long long lcm=A*B/gcd;
        vector<long long> arr{lcm,gcd};
        return arr;
    }
};


int main()
{
    Solution gfg;
    long long A, B;cin>>A>>B;
    vector<long long> ans = gfg.lcmAndGcd(A,B);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}