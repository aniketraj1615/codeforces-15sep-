#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]={-1};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int ind1=n,ind2=1;
    int minn=abs(arr[n]-arr[1]);
    for(int i=1;i<=n;i++){
       
        if(abs(arr[i+1]-arr[i])<minn){
minn=abs(arr[i+1]-arr[i]);

            ind1=i+1;
            ind2=i;
        }
    
    }
    cout<<ind1<<" "<<ind2<<endl;
return 0;
}