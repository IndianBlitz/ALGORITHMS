#include <bits/stdc++.h>
#define ll long long 
#define testcases int t;cin>>t;
using namespace std;


int  sum_array(vector<int> v,int index){
    if(index==v.size()){
        return 0;
    }

    int sum  = (v[index] +sum_array(v,index+1));
    // cout<<sum<<endl;
    return sum;

}

int main(){
   

    vector<int>ds = {90,180,34};
    int index =0;
    cout<<sum_array(ds,index);



}                
