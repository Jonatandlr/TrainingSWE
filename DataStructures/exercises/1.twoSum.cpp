//Difficult:WarmUp`
//Excercise: https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };


//More efficient
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;

    for (int i = 0; i < nums.size(); ++i) {
      if (const auto it = numToIndex.find(target - nums[i]);
        it != numToIndex.cend())
            return {it->second, i};
      numToIndex[nums[i]] = i;
    }

    return {};
  }
};

//driver Code

int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}