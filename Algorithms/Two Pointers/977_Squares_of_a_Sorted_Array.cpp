#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    vector<int> sortedSquares(vector<int>& a) {
        // vector<int>ans;
        // for(int i=0; i<a.size(); i++){
        //     ans.push_back(a[i]*a[i]);    
        // }
        // sort(ans.begin(), ans.end());
        // return ans;

        // using 2 pointers
        int n = a.size();
        int i=0, j=n-1;
        vector<int>ans(n);
        int k = n-1;
        while(i<=j){
            if(abs(a[i]*a[i]) < abs(a[j]*a[j])){
                ans[k--] = abs(a[j]*a[j]);
                j--;
            }
            else{
                ans[k--] = abs(a[i]*a[i]);
                i++;
            }
        }
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