#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    for(int i=0;i<=n;i++){
        int a=i;
        int b=n-(i*i);
        if((a+(b*b))==m&&b>=0){
ans++;
        }
    }
    cout<<ans<<endl;
return 0;
}