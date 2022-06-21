#include <bits/stdc++.h>
#define ll long long 
#define testcases int t;cin>>t;
using namespace std;


void subarray(vector<int> v,int index,int len,vector<int> &ds){

    if(index==len){
        if(ds.size()!=0){
            for(auto it:ds){
                cout<<it<<" ";

            }
            cout<<endl;
        }

        return;
    }

//pick the element going down
    ds.push_back(v[index]);
    subsequence(v,index+1,len,ds);
// pop the element coming up(returning phase)
    ds.pop_back();
// don't pick the element move to next index
    subsequence(v,index+1,len,ds);

}

int main(){

    vector<int>v= {1,2,3},v2;
    int index=0;
    int len =3;
    subsequence(v,index,len,v2);

   



    
}                  
