/*
! Very Important
*URL-> https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long reversedBits(long long X) {
        // code here
        string s=bitset<32>(X).to_string(); //* converts X to binary form and then store it in string
        reverse(s.begin(),s.end());     //* reverses the binary string
        long long rev=stoll(s,nullptr,2);   //* using stoi will cause overflow
        return rev;
    }
};


int main()
{
    Solution gfg;
    int x;cin>>x;
    long long ans=gfg.reversedBits(x);
    cout<<ans<<endl;
}

// * Editorial Solution->>>
/*
< Method1 - Simple: 
> Loop through all the bits of an integer. If a bit at ith position is set in the i/p no. then set the bit at (NO_OF_BITS - 1) - i in o/p. Where NO_OF_BITS is number of bits present in the given number. 
// C code to implement the approach
#include <stdio.h>

// Function to reverse bits of num
unsigned int reverseBits(unsigned int num)
{
    unsigned int NO_OF_BITS = sizeof(num) * 8; //* =32
    unsigned int reverse_num = 0;
    int i;
    for (i = 0; i < NO_OF_BITS; i++) {  //! Trick to check set bits using bitwise & operator, and set bits using bitwise | operator
        if ((num & (1 << i)))   //* & operator works on bits, so (num & (1<<i)) is true if 2^i bit of num is set
            reverse_num |= 1 << ((NO_OF_BITS - 1) - i);     //* setting opposite bits of reverse_num using | bitwise operator
    }
    return reverse_num;
}

// Driver code
int main()
{
    unsigned int x = 2;
    printf("%u", reverseBits(x));
    getchar();
}

> Time Complexity: O(Log n). Time complexity would be Log(num) as there are log(num) bits in a binary number "num" and we're looping through all bits.
> Auxiliary space: O(1)
*/

/*
<Method 2 - Standard: 
> The idea is to keep putting set bits of the num in reverse_num until num becomes zero. After num becomes zero, shift the remaining bits of reverse_num. Let num is stored using 8 bits and num be 00000110. After the loop you will get reverse_num as 00000011. Now you need to left shift reverse_num 5 more times and you get the exact reverse 01100000.

// C code to implement the approach
#include <stdio.h>

// Function to reverse bits of num
unsigned int reverseBits(unsigned int num)
{
    unsigned int count = sizeof(num) * 8 - 1;
    unsigned int reverse_num = num;

    num >>= 1;  //* num = num/(2^1) => num/2 => these means we are shifting bits of num to right
    while (num) {
        reverse_num <<= 1;  //* reverse_num = reverse_num*(2^1) => reverse_num*2 => means shifting bits of reverse_num to left, thus making LSB of reverse_num =0
        reverse_num |= num & 1; //* reverse_num = reverse_num | num & 1 => means checking if LSB of num is set of not, if set then also set LSB of reverse_num bit
        num >>= 1;  //* num = num/(2^1) => num/2
        count--;
    }
    reverse_num <<= count;
    return reverse_num;
}

// Driver's code
int main()
{
    unsigned int x = 1;
    printf("%u", reverseBits(x));
    getchar();
}

> Time Complexity: O(logn) where n is the given number
> Auxiliary space: O(1)
*/

/*
<Method 3 - Lookup Table: 
> We can reverse the bits of a number in O(1) if we know the size of the number. We can implement it using look up table. Please refer Reverse bits using lookup table in O(1) time for details.
*URL=> https://www.geeksforgeeks.org/reverse-bits-using-lookup-table-in-o1-time/
*/

/*
Input:
X = 1
Output:
2147483648 
Explanation:
Binary of 1 in 32 bits representation-
00000000000000000000000000000001
Reversing the binary form we get, 
10000000000000000000000000000000,
whose decimal value is 2147483648.

Input:
X = 5
Output:
2684354560 
Explanation:
Binary of 5 in 32 bits representation-
00000000000000000000000000000101
Reversing the binary form we get, 
10100000000000000000000000000000,
whose decimal value is 2684354560.
*/