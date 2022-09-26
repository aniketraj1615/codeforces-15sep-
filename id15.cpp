#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    double d=0;
    for(int i=0;i<n;i++){
cin>>arr[i];
d+=arr[i];
    }
    d=d/(n*100);
    cout<<100*d<<endl;
return 0;
}