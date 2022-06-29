#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        
        unordered_map<int, int> mp;
        int ans = f(0, n, mp);
        return ans;
    }
    
    int f(int i, int n, unordered_map<int, int>& mp){
        
        if(i>n){
            return 0;
        }else if(i==n){
            return 1;
        }else{
            if(mp.find(i)!=mp.end()){
                return mp[i];
            }
            int val =  f(i+1, n, mp) + f(i+2, n, mp);
            mp[i] = val;
            return val;
        }
    }
};

int main(){
  Solution s;
  int n;
  cin>>n;

  cout<<s.climbStairs(n)<<endl;

  return 0;
}

// Example 2:

// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step