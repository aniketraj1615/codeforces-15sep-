#include<bits/stdc++.h>
using namespace std;
int arr[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43,47};
int main(){
    int n,m;
    cin>>n>>m;
    int flage=0;
    for(int i=0;i<15;i++){
        if(arr[i]==n&&arr[i+1]==m){
            cout<<"YES"<<endl;
            flage=1;
            break;
        }
    }
    if(flage==0){
        cout<<"NO"<<endl;
    }
return 0;
}