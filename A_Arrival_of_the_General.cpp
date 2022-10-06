#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    cin>>arr[0];
    int minn=arr[0];
    int mx=arr[0];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mx=max(mx,arr[i]);
        minn=min(minn,arr[i]);
    }
    if(arr[0]==mx&&arr[n-1]==minn){
        cout<<"0"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
        if(arr[i]==minn){

        }
        }
    }


return 0;
}