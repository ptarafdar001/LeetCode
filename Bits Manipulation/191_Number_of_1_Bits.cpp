#include<iostream>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        for(int i=0; i<=31; i++){
            if((n >> i) & 1 > 0){
                count++;
            }
        }
        return count;
    }
};