#include<bits/stdc++.h>
using namespace std;
int main(){
    int flag=0;
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        
        cin>>arr[i];
        if(arr[i]==1||arr[i]==n){
            flag=1;
        }
    }
    sort(arr,arr+m);
    
    for(int i=0;i<m-2;i++){
        if(arr[i]==arr[i+1]-1&&arr[i+1]==arr[i+2]-1){
flag=1;
break;
        }
        
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
return 0;
}