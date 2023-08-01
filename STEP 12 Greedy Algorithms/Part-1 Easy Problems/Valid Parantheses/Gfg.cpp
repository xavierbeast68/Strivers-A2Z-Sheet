//* https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
//* https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/
//* https://www.youtube.com/watch?v=wkDfsKijrZ8

class Solution{
private:
    // bool isValid(char c, char ch){
    //     if((c == '[' && ch == ']') || 
    //         (c == '{' && ch == '}') || 
    //         (c == '(' && ch == ')')){

    //             return true;
    //     }
    //     return false;
    // }
public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        
        stack<char> st;

        //* Another method to define a function
        function<bool(char, char)> isValid = [&](char c, char ch){
            if((c == '[' && ch == ']') || 
                (c == '{' && ch == '}') || 
                (c == '(' && ch == ')')){

                    return true;
            }
            return false;
        };

        for(char ch : x){
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            }
            else if(!st.empty()){
                if(isValid(st.top(), ch)){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }

        return st.size() == 0;
    }

};