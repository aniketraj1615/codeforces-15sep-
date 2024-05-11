#include<bits/stdc++.h>
using namespace std;
int main(){
    int b=0;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int a=n-i;
        while(a--){
            cout<<" "<<" ";
        }
        for(int j=0;j<(2*i+1);j++){
            
            if(j<=i){
                if(j==(2*i)){
                    cout<<j;
                }
                else{
                cout<<j<<" ";
                b=j;
                }
            }
            else{
                if(j==(2*i)){
                    b=b-1;
                cout<<(b);
                }
                else{
                b=b-1;
                cout<<(b)<<" ";
                }
            }
        }
        cout<<endl;
    }

    for(int i=n-1;i>=0;i--){
        int a=n-i;
        while(a--){
            cout<<" "<<" ";
        }
        for(int j=0;j<(2*i+1);j++){
            
            if(j<=i){
                 if(j==(2*i)){
                    cout<<j;
                }
                else{
                cout<<j<<" ";
                b=j;
                }
            }
            else{
                b=b-1;
                 if(j==(2*i)){
                    
                cout<<(b);
                }
                else{
                
                cout<<(b)<<" ";
                }
            }
        }
        cout<<endl;
    }
return 0;
}