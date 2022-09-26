#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    n=n+1;
    if(n%2==0){
        if(sum%2==0){
cout<<"3"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    else{
        if(sum%2==0){
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
    }
    
return 0;
}