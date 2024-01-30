// Difficult: Litte harder
// Exercise:https://leetcode.com/problems/daily-temperatures/description/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int>output(temperatures.size(),0);
        stack<int>index;
        for(int i = 0; i < temperatures.size(); ++i){
            while(!index.empty() && temperatures[i] > temperatures[index.top()]){
                output[index.top()] = i - index.top();
                index.pop();
            }
            index.push(i);
        }
        return output;
        
    }
};
// driver Code
int main()
{
    Solution s;
    vector<int> temperatures = {73,74,75,71,69,72,76,73};
    vector<int> result = s.dailyTemperatures(temperatures);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}