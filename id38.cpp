#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]={-1};
    cin>>arr[1];
    int minn=arr[1];
    for(int i=2;i<=n;i++){
cin>>arr[i];
minn=min(minn,arr[i]);
    }
    int a=0;
    int c=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==minn){
c++;
a=i;
        }
    }
    if(c>1){
cout<<"Still Rozdil"<<endl;
    }
    else{
cout<<a<<endl;
    }
return 0;
}