#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--){
	    int n;
	 int arr[n];
	 vector<int>v;
	 set<int>s;
     for(int i=0;i<n;i++){
	 cin>>arr[i];
	 s.insert(arr[i]);
     }
	if(s.size()==n){
	    cout<<n-1<<endl;
	}
	else{
	   sort(arr,arr+n);
	   for(int i=0;i<n;i++){
	       int a=0;
	       for(int j=i+1;j<n;j++){
	           if(arr[i]==arr[j]){
	               a++;
	               v[i]=a;
	               i=j-1;
	               
	           }
	       }
	   }
	   sort(v.begin(),v.end());
	   int mx=0;
	   int sum=0;
	   for(int i=0;i<n;i++){
	       mx=max(mx,v[i]);
	       sum+=v[i];
	       
	   }
       cout<<(sum-mx)<<endl;
	   
	}
	
	    
	}
	return 0;
}
