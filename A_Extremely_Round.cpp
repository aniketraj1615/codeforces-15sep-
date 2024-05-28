#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    
    if(n<=9){
        cout<<n/1<<endl;
    }
    else if(n>=10&&n<=99){
                cout<<9+(n/10)<<endl;

    }
    else if(n>=100&&n<=999){
                cout<<18+(n/100)<<endl;

    }
     else if(n>=1000&&n<=9999){
                cout<<27+(n/1000)<<endl;

    }
    else if(n>=10000&&n<=99999){
                cout<<36+(n/10000)<<endl;

    }
    else if(n>=100000&&n<=999999){
                cout<<45+(n/100000)<<endl;

    }
    
   }
return 0;
}