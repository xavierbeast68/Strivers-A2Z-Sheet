//* https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1
//* https://www.geeksforgeeks.org/fractional-knapsack-problem/
//* https://takeuforward.org/data-structure/fractional-knapsack-problem-greedy-approach/

/*
struct Item{
    int value;
    int weight;
};
*/

class Solution
{   
public:
    bool static comp(Item a, Item b){
        double r1 = (double) a.value / (double) a.weight;
        double r2 = (double) b.value / (double) b.weight;
        return r1 > r2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        
        // why to use static comparator method?
        // https://leetcode.com/discuss/general-discussion/547798/static-comparator-function-for-sort-reasons-as-to-why-c#:~:text=C%2B%2B%20%2D%20LeetCode%20Discuss-,Static%20Comparator%20function%20for%20sort%20(Reasons%20as%20to%20why,C%2B%2B&text=So%20for%20those%20who're,you're%20good%20to%20go.
        sort(arr, arr+n, comp);
        
        int curWeight = 0;
        double finalvalue = 0.0;
        
        for (int i = 0; i < n; i++) {
            if (curWeight + arr[i].weight <= W){
                curWeight += arr[i].weight;
                finalvalue += arr[i].value;
            } 
            else{
                int remain = W - curWeight;
                finalvalue += (arr[i].value / (double) arr[i].weight) * (double) remain;
                break;
            }
        }
        
        return finalvalue;
    }
        
};