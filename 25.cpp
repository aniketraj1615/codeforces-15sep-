#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, k, l, c, d, p, nl, np;
   cin>>n>> k>> l>> c>> d>>p>> nl>> np;
   int drink=k*l;
   int dt=drink/nl;
   int dl=c*d;
   int ds=p/np;
   cout<<min(dt,min(dl,ds))/n<<endl;
return 0;
}