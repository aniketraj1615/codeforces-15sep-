#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"aniker"<<endl;
        for(int i=0;i<n;i++){
            cout<<"a!!!!!!!!!!!!!!!!"<<endl;
            for(int j=i+1;j<n;j++){
                cout<<"b!!!!!!!!!!"<<endl;
                if((i+1)%k==(j+1)%k){
                    int t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                   
                }
            }
        }
        int sum=0;
        
        for(int i=0;i<n;i++){
            cout<<"loop 1"<<endl;
            int a=0;
for(int j=i;j<k;j++){
    cout<<"loop two"<<endl;
    a=a+arr[j];
}
sum=max(sum,a);

}
cout<<"answerr"<<endl;
        cout<<sum<<endl;
        }
        
    
return 0;
}