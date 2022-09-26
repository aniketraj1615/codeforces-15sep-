#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flage=0;
    int mx=arr[0];
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            flage=1;
        }
        if(arr[i]>mx){
            mx=arr[i];
            ans=i;
        }

    }
    
    
    for(int i=0;i<n;i++){
        if(m>arr[i]){
            arr[i]=0;
        }
        else{
            arr[i]=arr[i]-m;
        }
    }
    
    if(flage==0){
        cout<<n<<endl;
    }
    else{
int i=0;
while(arr[i]>=0){
    arr[i]=arr[i]-m;
    i=(i+1)%n;
   
}
cout<<i<<endl;
for(int j=0;j<n;j++){
    cout<<arr[j]<< " ";
}
    }

return 0;
}