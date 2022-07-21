#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
//       using unorderd_map -  O(n), O(n)
      
//       unordered_map<int, int> umap;
//       for(int i=0; i<nums.size(); i++){
//           umap[nums[i]]++;
//       }
      
//       int ans;
//       for(auto i : umap){
//         if(i.second > nums.size() / 2){
//             ans =  i.first;
//             break;
//         }
//       }
//       return ans;
      
//    use sorting technique: Time - 0(nlogn), space-O(1)
      
      int n = nums.size();
      sort(nums.begin(), nums.end());
      
      return nums[n/2];
      
    }
    
};