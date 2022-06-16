#include<bits/stdc++.h>
using namespace std;

vector<int> longest_subArray(vector<int> arr, int n, int k ){
  vector<int> ans;

  vector<int>pre_sum(n);
  pre_sum.push_back(arr[0]);
  for(int i=1; i<n; i++){
    pre_sum.push_back(arr[i]+pre_sum[i-1]);
  }
  
  int l = 0;
  int r = 0;

  int sum = pre_sum[0];
  int max_size = 0;

  for(int i=1; i<n; i++){

    if(sum < k){
      sum = pre_sum[i];
      r++;
    }
    else if(sum == k){
        max_size = max(max_size, r-l+1);
        ans.push_back(max_size);
        r++;
    }
    else if(sum > k){
      while(sum > k){
        sum -= arr[l];
        l++;
      }
      r++;
    }
  }

  // ans.push_back(arr[n-2]);
  return ans;
}

int main(){
  int n, sum;
  cin>>n>>sum;

  vector<int>arr;
  int x;
  for(int i=0; i<n; i++){
    cin>>x;
    arr.push_back(x);
  }

  vector<int> ans ;
  ans = longest_subArray(arr, n, sum);
  cout<<ans[0]<<endl;

  return 0;
}