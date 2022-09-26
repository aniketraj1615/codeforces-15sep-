#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int sum=0;
    int sum1=0;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
        cin>>b[i];
        int p=b[i]-a[i];
        sum1+=p;
       
       sum=max(sum,max(p,sum1));
}
    
    cout<<sum<<endl;

return 0;
}