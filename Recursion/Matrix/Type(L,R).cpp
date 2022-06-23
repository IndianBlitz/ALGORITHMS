#include <bits/stdc++.h>
#define ll long long 
#define testcases ll t;cin>>t;
using namespace std;


void FindPath(vector<vector<int>> vect,int i,int j,int n,int m,string str){
    if(j>=m || i>=n){
        return;
    }

    if(j==m-1 && i==n-1){
       
        cout<<str<<" ";
         // cout<<endl;
        return;
    }
    
    str+='R';
    // cout<<i<<"-"<<j<<" ";
    FindPath(vect,i,j+1,n,m,str);
    str.pop_back();

     str+='D';
     
   FindPath(vect,i+1,j,n,m,str);
    str.pop_back();



}


int main(){
vector<vector<int>>matrix;

string str="";

 vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    FindPath(matrix,0,0,3,3,str);



    
}                  
