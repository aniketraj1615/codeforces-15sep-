#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int aniket=0;
    int arr[12];
    for(int i=0;i<12;i++){
        cin>>arr[i];
        aniket+=arr[i];
    }
    if(k>aniket){
        cout<<"-1"<<endl;
    }
    else{
    sort(arr,arr+12);
    
    int sum=0;
    int count=0;
    for(int i=11;i>=0;i--){
        if(sum>=k){
            break;
        }
        else{
            sum+=arr[i];
            count++;
        }
    }
    cout<<count<<endl;
    }
return 0;
}