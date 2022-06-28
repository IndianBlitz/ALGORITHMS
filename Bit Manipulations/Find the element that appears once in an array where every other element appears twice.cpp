//  Question ->
// Find the element that appears once in an array where every other element appears twice

// https://www.geeksforgeeks.org/find-element-appears-array-every-element-appears-twice/
#include <bits/stdc++.h>
#define ll long long 
#define testcases ll t;cin>>t;
using namespace std;





int arr[]= {1,2,3,4,5,6,6,5,4,3,2};


int main(){
    int res =0;
    for (int i = 0; i <11 ; ++i){
        res= res xor arr[i];
    }

    cout<<res<<endl;
     
    
}                   
