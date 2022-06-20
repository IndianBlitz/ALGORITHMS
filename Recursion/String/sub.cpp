
void subsequence(int index,std::vector<int> &ds,int arr[],int n){

    if(index==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return
    }
    ds.push_back(arr[index]);

    //pick it
    subsequence(index+1,ds,arr,n);

    ds.pop_back();

    subsequence(index+1,ds,arr,n);

}
