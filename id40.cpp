#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
   long long int z=0,f=0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    arr[i]==5?f++:z++;
   }
   
   long long int a=5*f;
   long long int b=f/9;
   if(b==0&&z==0){
    cout<<"-1"<<endl;
   }
   else{
   b=b*45;
   if(a==b){
    while(b){
        cout<<"5";
        b=b-5;
    }
    z=z-1;
    while(z--){
        cout<<"0";
    }
   }
   else{
    if(b==0){
        cout<<"0"<<endl;
    }
    else{
    while(b){
        cout<<"5";
        b=b-5;
    }
    
    while(z--){
        cout<<"0";
    }
    }
   }
   }

return 0;
}