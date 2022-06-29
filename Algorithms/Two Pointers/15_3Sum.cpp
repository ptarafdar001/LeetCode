#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    vector<vector<int>> twoSum(vector<int>&nums, int start, int end, int target){
        int f = start;
        int s = end;
        vector<vector<int>>pairs;
            
        while(f<s){
            if(f-1 >= start && nums[f-1] == nums[f]){
                f++;
                continue;
            }
            if(s+1 <= end && nums[s+1] == nums[s]){
                s--;
                continue;
            }
            
            if(nums[f]+nums[s] < target){
                f++;
            }else if(nums[f] + nums[s] > target){
                s--;
            }else{
                vector<int> pair;
                pair.push_back(nums[f]);
                pair.push_back(nums[s]);
                pairs.push_back(pair);
                f++;
            }
        }
        return pairs;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;
        
        int i = 0;
        while(i < nums.size()){
            if(i == 0 || (i-1 >= 0 && nums[i-1] != nums[i])){
                int firstNo = nums[i];
                int target = -firstNo;
                
                vector<vector<int>> pairs = twoSum(nums, i+1, nums.size()-1, target);
                for(vector<int> & pair : pairs){
                    vector<int> triplet;
                    triplet.push_back(firstNo);
                    triplet.push_back(pair[0]);
                    triplet.push_back(pair[1]);
                    
                    triplets.push_back(triplet);
                }
            }
            i++;
        }
        return triplets;
    }

// Approuch : Two Pointer

// Example 1:
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]

// Example 2:
// Input: nums = []
// Output: []

// Example 3:
// Input: nums = [0]
// Output: []