#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
//         using extra space O(n)
        
//         unordered_map<int, int> mp;
        
//         for(auto x: nums){
//             mp[x]++;
//         }
        
//         for(auto i: mp){
//             if(i.second == 1)
//                 return i.first;
//         }
//         return -1;
        
// No extra space O(1)
        int ans = 0;
        for(int num : nums)
            ans = num^ans;
        return ans;
}

// Example 1:
// Input: nums = [2,2,1]
// Output: 1

// Example 2:
// Input: nums = [4,1,2,1,2]
// Output: 4

// Example 3:
// Input: nums = [1]
// Output: 1