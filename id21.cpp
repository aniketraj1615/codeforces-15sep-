#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
if(arr[i]==arr[j]&&c<3&&arr[j]!=0){
    arr[j]=0;
c++;
}



        }
    }
    cout<<c<<endl;
return 0;
}