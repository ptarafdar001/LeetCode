#include<iostream>
#include<vector>
using namespace std;

    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        int left = 0, right = n-1, mid;
        
        while(left<=right){
            mid = left + (right-left)/2;
            
            if(nums[mid] == target) 
                return mid;
            else if (nums[mid] < target) 
                left = mid+1;
            else right = mid-1;
        }
        
        return left;
    }

int main(){
  vector<int> arr = {1,3,5,6};
  int key = 2;
  cout<<searchInsert(arr, key)<<endl;

  return 0;
}

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1

// Example 3:
// Input: nums = [1,3,5,6], target = 7
// Output: 4

