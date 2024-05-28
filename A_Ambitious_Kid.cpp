#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    bool flage=true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            flage=false;
        }
    }
    if(flage==false){
        cout<<"0"<<endl;
    }
    else{
        int minn=abs(arr[0]);
        for(int i=1;i<n;i++){
            if(abs(arr[i])<minn){
                minn=abs(arr[i]);
            }
        }
        cout<<minn<<endl;
    }
   
return 0;
}