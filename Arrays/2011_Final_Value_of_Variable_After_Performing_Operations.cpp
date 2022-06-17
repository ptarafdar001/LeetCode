#include<iostream>
#include<vector>
#include<string>

using namespace std;

int finalValueAfterOperations(vector<string>& op) {
  int x = 0;
        
  for(int i=0; i<op.size(); i++){
    if(op[i]  == "++X" || op[i]  == "X++"){
        x++;
    }
            
    if(op[i]  == "--X" || op[i]  == "X--"){
      x--;
    }
  }
  return x;
}

int main(){
  vector<string> arr = {"X++","++X","--X","X--", "++X"};

  int ans = finalValueAfterOperations(arr);
  
  cout<< ans<<endl;
  return 0;
}

// Example 1:

// Input: operations = ["X++","++X","--X","X--"]
// Output: 0
// Explanation: The operations are performed as follows:
// Initially, X = 0.
// X++: X is incremented by 1, X = 0 + 1 = 1.
// ++X: X is incremented by 1, X = 1 + 1 = 2.
// --X: X is decremented by 1, X = 2 - 1 = 1.
// X--: X is decremented by 1, X = 1 - 1 = 0.