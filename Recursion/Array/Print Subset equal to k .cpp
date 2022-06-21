#include <bits/stdc++.h>
#define ll long long 
#define testcases int t;cin>>t;
using namespace std;


void subarray(vector<int> v,int index,int len,vector<int> &ds,int k,int sum){

    if(len==index){
        if(sum==k){
            for(auto it:ds){
                cout<<it<<" ";
            }
             cout<<endl;
        }
        return;
    }

    //picking 
    ds.push_back(v[index]);
    sum+=v[index];
    subarray(v,index+1,len,ds,k,sum);

    // when returing or going to not picking condtion remove them as they will not be included in not picking condition
    sum-=v[index];
    ds.pop_back();
    
    //not picking
    subarray(v,index+1,len,ds,k,sum);




}

int main(){

    vector<int>v= {1,2,3},v2;
    int index=0;
    int k=3;
    int sum=0;
    int len =v.size();
    

    subarray(v,index,len,v2,k,sum);

   



    
}                  
