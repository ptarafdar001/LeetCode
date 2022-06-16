#include<iostream>
using namespace std;

 void twoSum(int arr[], int n, int target){
    
    for(int i=0; i<n; i++){
        int numToFind = target - arr[i];
        for(int j = i+1; j<n; i++){
            if(numToFind == arr[j]){
               cout<<i<<" "<<j<<endl;
            }
        }
    }
   cout<<-1<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int t;
    cin>>t;

    twoSum(arr,n,t);

    return 0;

}