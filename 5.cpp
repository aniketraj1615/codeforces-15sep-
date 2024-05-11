#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int mx=0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      mx=max(mx,arr[i]);
    }
    int a[2*n+1]={0};
    a[0]=-2;
    for(int i=0;i<n;i++){
      a[arr[i]]=-1;
    }
    int ans=0;
    while(k--){
      int h=0;
      for(int i=1;i<=2*n;i++){
        if(arr[i]==0){
          h=i;
          arr[i]=-1;
          break;
        }
        
      }
      ans+=mx-h;
    }
    
    
    
    cout<<ans<<endl;
    
  }
	return 0;
}
