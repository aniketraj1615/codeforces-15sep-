#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int ans=y%2==0?y/2:y/2+1;
        // cout<<"ans"<<ans<<endl;
        int one=(15*ans-4*y);
        if(x<=one){
            cout<<ans<<endl;
        }
        else{
            x=x-one;
            // cout<<"x"<<x;
            // ans=ans+(x<=15?1:ceil(x/15));
            int b=0;
            if(x%15==0){
                ans=ans+(x/15);
            }
            else{
                ans=ans+1+(x/15);
            }
            // ans=ans+ceil(x/15);
            cout<<ans<<endl;
        }
       
    }
   
return 0;
}