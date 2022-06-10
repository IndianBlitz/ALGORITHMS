#include <bits/stdc++.h>
#define ll long long 

using namespace std;


int MinSumSubarray(int k,int arr_size,vector<int>arr){
        int i=0,j=0,sum=0,ans=INT32_MAX;

        while(j<arr_size){
            sum+=arr[j];

            if(j-i+1<k){ //move the window forward till window size is less than required(K)
                j++;
            }
            else if(j-i+1==k){ //window size is reached
                //do something
                ans= min(ans,sum); //max of current sum vs previous value
                sum-=arr[i]; // minus the previous value as windows moves forward

                i++; // move i foward
                j++; // move j foward
            }
        }

        return ans;
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
        int val = MinSumSubarray(k,arr_size,arr);
        cout<<val<<endl;

    }

    





}                
