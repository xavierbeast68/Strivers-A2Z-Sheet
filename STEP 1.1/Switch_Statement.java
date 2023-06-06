/*
 * URL-> https://practice.geeksforgeeks.org/problems/java-switch-case-statement3529/1
 */

import java.util.*;
import java.util.List;

public class Switch_Statement
{
    static double switchCase(int choice, List<Double> arr)
    {
        // code here
        double area=0;
        switch(choice)
        {
            case 1:
                double R = arr.get(0);
                area=Math.PI*R*R;
            break;
            case 2:
                double L = arr.get(0);
                double B = arr.get(1);
                area=L*B;
            break;
        }
        return area;
    }

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int choice=sc.nextInt();
        List<Double> a = new ArrayList<Double>();

        a.add(0,5.0);     // R
        // a.add(0,5.0);  // L
        // a.add(1,10.0);     // B
        double ans=switchCase(choice, a);
        System.out.println(ans);
    }
}
/*
Input: 
choice = 1, 
R = 5
Output: 78.53981633974483
Explaination: The choice is 1. 
So we have to calculate the area of the circle.

Input: 
choice = 2, 
L = 5, B = 10
Output: 50
Explaination: Here we have to calculate the 
area of the rectangle.
*/