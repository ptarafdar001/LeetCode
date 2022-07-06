#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
      int maxSum = INT_MIN;
      int currSum = 0;
      
      for(int i=0; i<nums.size(); i++){
        currSum += nums[i];
        
        maxSum = max(maxSum, currSum);
        
        if(currSum < 0)
          currSum = 0;
      }
      
      return maxSum;
    }
};


// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

// Example 2:

// Input: nums = [1]
// Output: 1

// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23