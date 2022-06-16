#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
  vector<int> v;
  v.push_back(nums[0]);
  for(int i=1; i<nums.size(); i++){
    int pre_sum = nums[i]+v[i-1];
    v.push_back(pre_sum);
  }

  return v;
}

int main(){
  vector<int> arr = {5, 0, 1, 2, 3, 4};

  vector<int> ans = runningSum(arr);

  for(int i = 0; i<arr.size(); i++)
    cout<< ans[i]<<" ";

}

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [1,3,6,10]
// Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].