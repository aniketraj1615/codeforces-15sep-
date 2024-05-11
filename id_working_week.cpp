#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long int n;
    cin>>n;
    long long int l1,l2,l3;
    l1=1;
    l2=(n-3)/3;
    l3=n-3-l2-l1;
    long long int ans=min(min(abs(l3-l1),abs(l2-l1)),abs(l2-l3));
    cout<<ans<<endl;
    }
return 0;
}