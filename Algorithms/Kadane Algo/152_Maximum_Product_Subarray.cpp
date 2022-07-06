#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
      
      int ans = INT_MIN;
      int maxMul1 = INT_MIN;
      int maxMul2 = INT_MIN;
      int currMulPre = 1;
      int currMulSuf = 1;
        
      for(int i=0; i<nums.size(); i++){
        currMulPre *= nums[i];
        currMulSuf *= nums[nums.size()-1-i];
        
        maxMul1 = max(maxMul1, currMulPre);
        maxMul2 = max(maxMul2, currMulSuf);
        
        
         if(currMulPre == 0)
           currMulPre = 1;
        
         if(currMulSuf == 0)
            currMulSuf = 1;
        
      }
      ans = max(maxMul1, maxMul2);
      
      return ans;
    }
};

// Example 1:

// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

// Example 2:

// Input: nums = [-2,0,-1]
// Output: 0
// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.