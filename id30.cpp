#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    int h[100001]={0};

    for(int i=1;i<=n;i++){
        cin>>arr[i];
        h[arr[i]]=i;
    }
    cin>>m;
    int static left=0;
     int static right=0;
    int mrr[m];
    for(int i=0;i<m;i++){
        cin>>mrr[i];
        left+=h[mrr[i]];
        right+=n-h[mrr[i]]+1;
    }
   
    cout<<left<<" "<<right<<endl;
    return 0;
}