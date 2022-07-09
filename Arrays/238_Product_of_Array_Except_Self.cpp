#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prePro;
        vector<int>suffPro;
        vector<int>ans;
      
        int n = nums.size();
        int pre = 1;
        int suff = 1;
        for(int i=0; i<n; i++){
          
          pre *= nums[i];
          suff *= nums[n-1-i];
          
          prePro.push_back(pre);
          suffPro.push_back(suff);
        }
      
        reverse(suffPro.begin(), suffPro.end());
      
        for(int i=0; i<n; i++){
          if(i == 0){
            ans.push_back(suffPro[i+1]);
          }else if(i == n-1){
            ans.push_back(prePro[i-1]);
          }else{
            ans.push_back(prePro[i-1] * suffPro[i+1]);
          }
        }
      
      return ans;
    }
};