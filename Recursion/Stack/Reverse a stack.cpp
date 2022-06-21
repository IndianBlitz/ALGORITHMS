#include <bits/stdc++.h>
#define ll long long 
#define testcases int t;cin>>t;
using namespace std;


void Reverse_a_stack(stack<int>stk,int stack_len){

    if(stack_len==0){
        return;
    }

    
    int e = stk.top();
     stk.pop();
    
   
    Reverse_a_stack(stk,stack_len-1);
    cout<<e<<endl;
}




int main(){
stack<int>stk;

stk.push(1);
stk.push(2);
stk.push(3);
stk.push(4);

Reverse_a_stack(stk,4);
    

   



    
}                  
