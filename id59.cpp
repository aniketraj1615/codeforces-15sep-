#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    } 
sort(arr,arr+n);
int mx=0,min=0;
for(int i=0;i<m&&n!=0;i++){
if(n<=arr[i]){
    int a=arr[i]-n;
     min+=(n*(n+1))/2-(a*(a+1))/2;
    break;
}
else{
    min+=(arr[i]*(arr[i]+1))/2;
    n=n-arr[i];
}
}
for(int i=m-1;i>=0&&n!=0;i--){
if(n<=arr[i]){
    int a=arr[i]-n;
     mx+=(n*(n+1))/2-(a*(a+1))/2;
    break;
}
else{
    mx+=(arr[i]*(arr[i]+1))/2;
    n=n-arr[i];
}
}
cout<<mx<<"   "<<min<<endl;
return 0;
}