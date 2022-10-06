#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int k,l,m;
    k=(sqrt((a*b)/c));
     l=(sqrt((c*b)/a));
      m=(sqrt((a*c)/b));
      cout<<4*(k+l+m)<<endl;
    
return 0;
}