#include <bits/stdc++.h>
#define ll long long 
#define testcases int t;cin>>t;
using namespace std;


void Reverse_a_stack(stack<int>stk,int stack_len,int index){
    if(stack_len==index){
        return;
    }
    if(stack_len/2==index){
         stk.pop();
        Reverse_a_stack(stk,stack_len,index+1);
        
    }
    else{
    int e= stk.top();
    stk.pop();
    cout<<e<<endl;
    Reverse_a_stack(stk,stack_len,index+1);
    
    }
    
    
}




int main(){
stack<int>stk;

stk.push(1);
stk.push(2);
stk.push(3);
stk.push(4);
stk.push(5);
stk.push(6);
stk.push(7);


Reverse_a_stack(stk,7,0);
    

   



    
}                  
