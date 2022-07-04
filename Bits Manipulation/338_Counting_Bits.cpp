#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0; i<=n; i++){
          ans.push_back(countSetBits(i));
        }
        return ans;
    }

    int countSetBits(int num){
      int count = 0;
      for(int i=0; i<=31; i++){
        if((num & (1<<i)) > 0){
          count++;
        }
      }
      return count;
    }
};


int main(){
  int n; cin>>n;
  Solution s;
  vector<int>ans;
  ans = s.countBits(n);

  for(int i: ans){
    cout<<i<<" ";
  }

  return 0;
}

// Example 1:

// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10

// Example 2:

// Input: n = 5
// Output: [0,1,1,2,1,2]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// 3 --> 11
// 4 --> 100
// 5 --> 101