/*
*URL-> https://practice.geeksforgeeks.org/problems/count-digits5716/1
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int evenlyDivides(int N){
        //code here
        int temp=N, c=0;
        while(temp!=0)
        {
            int d=temp%10;
            temp/=10;
            if(d!=0 && N%d==0)  //! edge
            {
                c++;
            }
        }
        return c;
    }
};


int main()
{
    Solution gfg;
    int n;cin>>n;
    int ans=gfg.evenlyDivides(n);
    cout<<ans<<endl;
}

/*
Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly

Input:
N = 23
Output
0
Explanation:
2 and 3, none of them
divide 23 evenly
*/