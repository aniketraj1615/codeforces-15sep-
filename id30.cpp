#include<bits/stdc++.h>
using namespace std;
int find(int arr[],int n,int k){
    for(int i=0;i<n;i++){

        if(arr[i]==k){
            
            return i;
        }
    }
    return 0;
}
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    int b[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int a=0;
    int static v=0,p=0;
    for(int i=0;i<m;i++){
        a=find(arr,n,b[i])+1;
       
       
        v=v+a;
        
        p=p+(n+1-a);
        
    }
    
    cout<<v<<" "<<p;
return 0;
}