#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int ind=0;
    while(n>0){
        for(int i=0;i<7;i++){
            if(n>0){
            n=n-arr[i];
            ind=i;
            }

        }
       
        
    }
    cout<<ind+1<<endl; 
return 0;
}