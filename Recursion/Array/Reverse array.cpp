#include <bits/stdc++.h>
#define ll long long 
#define testcases int t;cin>>t;
using namespace std;



void swap_array (vector<int>&v,int i,int j){
    if(i>=j){
         cout<<i<<" "<<j<<endl;
        return;
    }

    

    sp(v,i+1,j-1);
    swap(v[i],v[j]);
    cout<<i<<" "<<j<<endl;

}



int main(){
   vector<int> v={1,2,3,4,5};

   swap_array(v,0,4);

   for (auto it:v){
       cout<<it<<" ";
   }
 
    

}                
