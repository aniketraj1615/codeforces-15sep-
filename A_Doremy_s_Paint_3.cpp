#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
         set<int>s;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }
        if(s.size()>2){
            cout<<"No"<<endl;
        }
        else if(s.size()==1){
            cout<<"Yes"<<endl;
        }
        else if(s.size()==2){
        sort(arr,arr+n);
        
        int k=1;
        int p=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                k++;
            }
            else{
                break;
            }

        }
p=n-k;
        if(k==(n/2)||p==(n/2)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
       

        }
        
        
    }
   
return 0;
}