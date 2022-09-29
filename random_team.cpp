#include<bits/stdc++.h>
using namespace std;
long long int ncr(long long int n){
    
        return ((n*(n-1))/2);
    
}
int main(){
   long long int n,m;
    cin>>n>>m;
   long long int a=n/m;
   long int b=n%m;
  long long  int min=0,mx=0;
    



// min=ncr(a+1);
// min=min*b;
// min=min+(m-b)*ncr(a);
min=(ncr(a+1)*b)+(ncr(a)*(m-b));

   

   

mx=ncr(n-m+1);

cout<<min<<" "<<mx<<endl; 
return 0;
}