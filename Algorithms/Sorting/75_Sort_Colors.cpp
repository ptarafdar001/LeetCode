#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;

        int i=0;
        while(i <= right){
          if(nums[i]==0){
            int temp = nums[i];
            nums[i] = nums[left];
            nums[left] = temp;
            i++;
            left++;
          }
          else if(nums[i]==2){
            int temp = nums[i];
            nums[i] = nums[right];
            nums[right] = temp;
            right--;
          }
          else{
            i++;
          }
        }
    }
};

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]
