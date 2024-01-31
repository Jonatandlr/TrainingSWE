// Difficult: Litte harder
// Exercise:https://leetcode.com/problems/top-k-frequent-elements/description/
#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <unordered_map>
using namespace std;

struct Element
{
    int value;
    int priority;

    Element(int val, int prio) : value(val), priority(prio) {}
    bool operator<(const Element &otroElement) const
    {
        return priority < otroElement.priority;
    }
};

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> ouput;
        unordered_map<int, int> previous;
        priority_queue<Element> prioridad;
        for (auto &num : nums)
        {
            auto iterator = previous.find(num);
            if (iterator != previous.end())
            {
                previous[iterator->first] = iterator->second + 1;
            }
            else
            {

                previous[num] = 1;
            }
        }

        for (auto &prev : previous)
        {
            prioridad.push(Element(prev.first, prev.second));
        }
        while (ouput.size() < k)
        {
            Element elementoActual = prioridad.top();
            ouput.push_back(elementoActual.value);
            prioridad.pop();
        }

        return ouput;
    }
};

//besterSolution
// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
//         int n = nums.size();
//         unordered_map<int,int>mp;
//         for(int i=0;i<n;i++){
//             mp[nums[i]]++;
//         }
//         for(auto [x,y]:mp){
//             pq.push({y,x});
//             if(pq.size()>k){
//                 pq.pop();
//             }
//         }
//         vector<int>ans;
//         for(int i=0;i<k;i++){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         return ans;
//     }
// };

// code driver

int main()
{
    Solution s;
    // create case for testing
    vector<int> nums = {1, 2,2, 3, 3, 3};
    int k = 2;
    vector<int> result = s.topKFrequent(nums, k);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
