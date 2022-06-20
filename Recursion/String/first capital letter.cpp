#include <bits/stdc++.h>
#define ll long long 
#define testcases int t;cin>>t;
using namespace std;


char  first_captial_letter(string sentence,int index,int length){

    if(sentence[index]>='A' && sentence[index]<='Z'  ){
        
        return sentence[index];
    }
    
    char s = first_captial_letter(sentence,index+1,length);


    return s;

}

int main(){
   
    string str="rhe first capital letter appears in the string testString is z";
    int length = str.length()-1;
    int index=0;

    cout<<first_captial_letter(str,index,length);

   



}                
