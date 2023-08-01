//* https://www.codingninjas.com/studio/problems/balanced-parentheses_8162202
//* https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/
//* https://www.youtube.com/watch?v=wkDfsKijrZ8

#include<bits/stdc++.h>
using namespace std;

// bool isValid(char c, char ch){
//     if((c == '[' && ch == ']') || 
//         (c == '{' && ch == '}') || 
//         (c == '(' && ch == ')')){

//             return true;
//     }
//     return false;
// }
bool isBalanced(string S){
    // Write your code here.

    //* Another method to define a function
    function<bool(char, char)> isValid = [&](char c, char ch){
        if((c == '[' && ch == ']') || 
            (c == '{' && ch == '}') || 
            (c == '(' && ch == ')')){

                return true;
        }
        return false;
    };

    stack<char> st;

    for(char ch : S){
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