#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int j=i+1;
        if(arr[i]<arr[j]){
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            ans++;
        }
    
    }
    for(int i=n-1;i>=0;i--){
        int j=i-1;
        if(arr[i]>arr[j]){
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            ans++;
        }
    
    }
    cout<<ans<<endl;
return 0;
}