#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxProfit(vector<int>& prices) {
  int currentMin = prices[0];
  int ans = 0;
  for(int i=1; i<prices.size(); i++){
    int currentProfit = prices[i]-currentMin;
    ans = max(currentProfit, ans);
    currentMin = min(prices[i], currentMin);
  }
  return ans;
}