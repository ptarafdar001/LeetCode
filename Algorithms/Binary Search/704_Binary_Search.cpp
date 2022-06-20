#include<iostream>
#include<vector>

using namespace std;

    int search(vector<int>& nums, int key) {
        int l = 0;
        int r = nums.size()-1;
        int mid = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums.size()==1){
                if(nums[0]==key)
                    return 0;
                else
                    return -1;
            }
            if(l > r){
                return -1;
            }
            else{
                mid = (l+r)/2;
                if(nums[mid] > key){
                    r = mid - 1;
                }
                if(nums[mid] == key){
                    break;
                }
                if(nums[mid] < key){
                    l = mid + 1;
                }
            }
        }
        return mid;
    }

int main(){
    vector<int>arr = {-1,0,3,5,9,12};
    int key = 9;
    cout<<search(arr, key)<<endl;

    return 0;
}

// Example 1:
// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4

// Example 2:
// Input: nums = [-1,0,3,5,9,12], target = 2
// Output: -1
// Explanation: 2 does not exist in nums so return -1
