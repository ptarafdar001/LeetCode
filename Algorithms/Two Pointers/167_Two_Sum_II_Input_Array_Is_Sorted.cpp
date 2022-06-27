#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        vector<int> ans;
    
    // Broot Force approch
    //     for(int i=0; i<n; i++){
    //         int a = numbers[i];
    //         for(int j=i+1; j<n; j++){
    //             int b = numbers[j];
    //             if(a+b == target){
    //                 ans.push_back(i+1);
    //                 ans.push_back(j+1);
    //                 break;
    //             }
    //         }
    //     }
    //     return ans;
    
    // two pointer Approuch
        int f = 0, s = n-1; 
        for(int i=0; i<n; i++){
            int temp = numbers[f] + numbers[s];
            if(temp == target){
                ans.push_back(f+1);
                ans.push_back(s+1);
                break;
            }
            if(temp > target)
                s--;
            if(temp < target)
                f++;
        }
        return ans;
    }