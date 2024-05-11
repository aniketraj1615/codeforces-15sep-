#include <bits/stdc++.h>
using namespace std;
bool pailndrome(int arr[],int n){
    int a=-1;
  if(n%2==0){
    
    for(int i=0;i<=(n/2-1);i++){
      a=arr[i]^arr[n-1-i];
    }
    if(a==0){
      return true;
    }
    else{
      return false;
    }
  }
  else{
     for(int i=0;i<n/2;i++){
      a=arr[i]^arr[n-1-i];
    }
    if(a^arr[n/2]==arr[n/2]){
      return true;
    }
    else{
      return false;
    }
  }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int a[n];
	    for(int i=0;i<n;i++){
	      cin>>arr[i];
	      a[i]=arr[i];
	    }
	    sort(a,a+n);
	    int flage=0;
	    for(int i=0;i<n;i++){
	      if(a[i]!=arr[i]){
	        flage=1;
	        break;
	      }
	    }
	    if(arr[0]>arr[n-1]){
	      cout<<"-1"<<endl;
	    }
	    else if(pailndrome(arr,n)){
	      cout<<"0"<<endl;
	        
	      }
	      else{
	        if(flage==0){
	          cout<<arr[n-1]-arr[0]<<endl;
	        }
	        else {
	          cout<<"-1"<<endl;
	        }
	        
	      }
	    }
	   return 0; 
	}
