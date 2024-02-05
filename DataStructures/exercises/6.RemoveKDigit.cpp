// Difficult:harder
// Excercise: https://leetcode.com/problems/top-k-frequent-elements/
#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        stack<char> st;
        int control = 0;
        for (auto &n : num)
        {
            while (!st.empty() && n < st.top() && control != k)
            {
                st.pop();
                control++;
            }
            st.push(n);
        }

        while (control < k)
        {
            st.pop();
            control++;
        }

        if (st.empty())
        {
            return "0";
        }

        string out;
        while (!st.empty())
        {
            out += st.top();
            st.pop();
        }
        reverse(out.begin(), out.end());
        int index = 0;
        while (out[index] == '0' && out[index + 1])
        {
            index++;
        }
        out = out.substr(index);
        return out;
    }
};

// bestest solution
// string removeKdigits(string num, int k)
// {
//     string ans;
//     for (char currdigit : num)
//     {
//         while (k && !ans.empty() && ans.back() > currdigit)
//         {
//             ans.pop_back();
//             k--;
//         }
//         ans.push_back(currdigit);
//     }
//     ans.resize(ans.size() - k);
//     while (!ans.empty() && ans[0] == '0')
//     {
//         ans.erase(ans.begin());
//     }
//     return ans.empty() ? "0" : ans;
// }

// code  driver

int main()
{
    Solution solution;
    string num = "0"; // output hope 1219
    int k = 1;
    cout << solution.removeKdigits(num, k) << endl;
    return 0;
}
