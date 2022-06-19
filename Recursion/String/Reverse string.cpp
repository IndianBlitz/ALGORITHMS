#include <bits/stdc++.h>
#define ll long long 
#define testcases int t;cin>>t;
using namespace std;



void swap_string (vector<char>&v,int i,int j){
    if(i>=j){
         // cout<<i<<" "<<j<<endl;
        return;
    }

    

    swap_string(v,i+1,j-1);
    swap(v[i],v[j]);
    // cout<<i<<" "<<j<<endl;

}



int main(){
   vector<char> v={'a','b','c','d','e'};

   swap_string(v,0,4);

   for (auto it:v){
       cout<<it<<" ";
   }
 
    

}                
