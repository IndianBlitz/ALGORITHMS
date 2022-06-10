#include <bits/stdc++.h>
#define ll long long 

using namespace std;


void FirstNegNumberSubarray(int k,int arr_size,vector<int>arr){
        queue<int>q;
        int i=0;
        int j=0;
        while(j<arr_size){
            if(arr[j]<0){
                q.push(arr[j]);
            }

            if(j-i+1<k){
                j++;
            }   
            else if(j-i+1==k){
                if(q.empty()){
                    cout<<0<<" ";
                }
                else if(!q.empty()){
                    cout<<q.front()<<" ";
                }

                if(arr[i]<0){ // if number is negative pop it because it has been use in the previous subarray
                    q.pop();
                }  

                i++;
                j++; 

            }

        }


}





int main() {
    vector<int>arr;
    int arr_size,k;

    cin>>arr_size>>k;


    for (int i = 0; i < arr_size; ++i){
        int inputs;
        cin>>inputs;
        arr.push_back(inputs);
    }

    if(arr_size<k){
        cout<<"invalid inputs"<<endl;
    }
    else{
         FirstNegNumberSubarray(k,arr_size,arr);
        

    }

    





}                
