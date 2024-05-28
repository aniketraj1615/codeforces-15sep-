#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"0"<<endl;
    }
     
     else{
 int ans=0;
    int count=1;

    for(int i=0;i<n-1;i++){
if((arr[i]%2==0&&arr[i+1]%2==0)||(arr[i]%2!=0&&arr[i+1]%2!=0)){
count++;


}
else{
    // cout<<"count :"<<count<<endl;
ans+=count-1;
count=1;
}
    }
        // cout<<"count2 :"<<count<<endl;

    ans+=count-1;

    cout<<ans<<endl;
     }
   

   }
return 0;
}