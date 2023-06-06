/*
 * URL-> https://practice.geeksforgeeks.org/problems/while-loop-printtable-java/1
 */

import java.util.*;

public class While_Loops {
    static void printTable (int n) 
    {
            int multiplier=10;
            while(multiplier>0)
            {
                //Your code here
                System.out.print(((multiplier--)*n)+" ");
            }
        System.out.println();
    }

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        printTable(n);
    }
}

/*
Input:
1

Output:
10 9 8 7 6 5 4 3 2 1

Input:
2

Output:
20 18 16 14 12 10 8 6 4 2
*/