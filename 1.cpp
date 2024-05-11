#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    if(n<7){
        cout<<"0"<<endl;
    }
    else{
        cout<<(n-7)/3<<endl;
    }
    }
return 0;
}