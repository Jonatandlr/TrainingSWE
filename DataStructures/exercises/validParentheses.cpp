// Exercise: https://leetcode.com/problems/valid-parentheses/description/

#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        // create a stack because is a structure LIFO
        //  and you add ( or [ or { and you pop when you find the closing one
        // so the last one you add is the first one you pop
        stack<char> braces;
        // iterate over the string
        for (int i = 0; i < s.length(); i++)
        {
            // if the char is an opening brace push it to the stack
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                braces.push(s[i]);
            }
            // if the char is a closing brace pop the last one from the stack
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                // verify if it's equal to the last inserted or if the stack is empty
                if (braces.empty() ||
                    (s[i] == ')' && braces.top() != '(') ||
                    (s[i] == ']' && braces.top() != '[') ||
                    (s[i] == '}' && braces.top() != '{'))
                {
                    return false;
                }

                braces.pop();
            }
        }
        // if the stack is empty return true
        if (braces.empty())
        {
            return true;
        }
        // if the stack is not empty return false
        else
        {
            return false;
        }
    }
};


//solution more efficient 
// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         map<char,char> mp;
//         mp['('] = ')';
//         mp['{'] = '}';
//         mp['['] = ']';
//         for(auto x:s){
//             if(!st.empty() && mp[st.top()]==x) st.pop();
//             else st.push(x);
//         }
//         return st.empty();
//     }
// };

// driver Code
int main()
{
    // test cases
    string s1 = "()";
    string s2 = "()[]{}";
    string s3 = "(]";

    Solution sol;
    sol.isValid(s3);
    return 0;
}
