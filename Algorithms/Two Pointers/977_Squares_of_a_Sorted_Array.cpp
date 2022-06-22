#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[i]*nums[i]);    
        }
        sort(ans.begin(), ans.end());
        return ans;
    }

int main(){
  vector<int>arr = {-4,-1,0,3,10};
   vector<int> ans = sortedSquares(arr);
  for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" "<<endl;
  
  return 0;
}

// Example 1:
// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].