#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    int ans=0;
    
    while(n--){
        int temp=0;
        for(int i=0;i<3;i++){
cin>>a;
if(a==1){
temp++;
}}
if(temp>=2){
    ans++;
}
        }

    cout<<ans<<endl;
return 0;
}