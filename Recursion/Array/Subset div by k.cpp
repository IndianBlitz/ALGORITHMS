#include <bits/stdc++.h>
#define ll long long 
#define testcases int t;cin>>t;
using namespace std;


int subset_count_div_by_k(vector<int> v,int index,int len,vector<int> &ds,int k,int sum){

    if(len==index){
        if(ds.size()!=0 && sum%k==0){
            return 1;
        }
        return 0;
    }   


    
    ds.push_back(v[index]);
    sum+=v[index];
   int l= subset_count_div_by_k(v,index+1,len,ds,k,sum);
  

    ds.pop_back();
    sum-=v[index];
    int r = subset_count_div_by_k(v,index+1,len,ds,k,sum);
    return l+r;
    



}

int main(){

    vector<int>v= {4,3,2},v2;
    int index=0;
    int k=3;
    int sum=0;
    int len =v.size();
    

    cout<<subset_count_div_by_k(v,index,len,v2,k,sum);

   



    
}                  
