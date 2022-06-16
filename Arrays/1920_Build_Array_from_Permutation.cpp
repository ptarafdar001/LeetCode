#include<bits/stdc++.h>
using namespace std;

 vector<int> buildArray(vector<int>& nums) {
  vector<int>ans;
  for(int i=0; i<nums.size(); i++){
    int temp = nums[nums[i]];
    ans.push_back(temp);
  }
  return ans;
}

int main(){
  vector<int> arr = {5, 0, 1, 2, 3, 4};

  vector<int> ans = buildArray(arr);

  for(int i = 0; i<ans.size(); i++)
    cout<< ans[i]<<" ";

}

// Example 2:

// Input: nums = [5,0,1,2,3,4]
// Output: [4,5,0,1,2,3]
// Explanation: The array ans is built as follows:
// ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]
//     = [nums[5], nums[0], nums[1], nums[2], nums[3], nums[4]]
//     = [4,5,0,1,2,3]