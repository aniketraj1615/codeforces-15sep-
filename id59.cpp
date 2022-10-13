#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int copy=n;
    int arr[m];
    int brr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
        brr[i]=arr[i];
    } 
    
sort(arr,arr+n);
sort(brr,brr+n);
int mx=0,minn=0;
for(int i=0;i<m;i++){
while(arr[i]!=0&&n!=0){
    minn+=arr[i];
    n--;
    arr[i]=arr[i]-1;
}
n=copy;

}
int j=m-1;
while(n--){
    cout<<"max"<<endl;
mx+=brr[j];
brr[j]=brr[j]-1;
if(j==0){
    j=m-1;
}



}
cout<<mx<<"   "<<minn<<endl;
return 0;
}