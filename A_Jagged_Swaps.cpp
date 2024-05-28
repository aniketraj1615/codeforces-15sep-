#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        cin>>arr[0];
         int minn=arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];
            minn=min(minn,arr[i]);

        }
        if(minn==arr[0]){
            cout<<"YES"<<endl;
        }
        else{
                        cout<<"NO"<<endl;

        }
       
        
    }
   
return 0;
}