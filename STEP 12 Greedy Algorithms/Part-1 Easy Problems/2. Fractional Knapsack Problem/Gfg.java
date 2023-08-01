/*
class Item {
    int value, weight;
    Item(int x, int y){
        this.value = x;
        this.weight = y;
    }
}
*/




class Solution
{
    // itemComparator class implements Comparator<T> interface
    class itemComparator implements Comparator<Item>{
        
        // overriding compare function of comparator interface for user-defind datatype Item
        @Override
        public int compare(Item a, Item b) 
        {
            double r1 = (double)(a.value) / (double)(a.weight); 
            double r2 = (double)(b.value) / (double)(b.weight); 
            if(r1 < r2) return 1; 
            else if(r1 > r2) return -1; 
            else return 0; 
        }
    }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n){
        // Your code here
        
        // passing obj of itemComparator class that implements compare fn of Comparator interface
        Arrays.sort(arr, new itemComparator()); 
        
        int curWeight = 0; 
        double finalvalue = 0.0; 
        
        for (int i = 0; i < n; i++) {

            if (curWeight + arr[i].weight <= W) {
                curWeight += arr[i].weight;
                finalvalue += arr[i].value;
            }

            else {
                int remain = W - curWeight;
                finalvalue += ((double)arr[i].value / (double)arr[i].weight) * (double)remain;
                break;
            }
        }

        return finalvalue;
    }
}