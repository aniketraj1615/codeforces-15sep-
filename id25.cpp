#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=(k*l)/n;
    cout<<a<<endl;
    int b=(c*d);
    cout<<b<<endl;
    int z=(p/np);
    cout<<z<<endl;
    cout<<min(a,min(b,z))/n<<endl;
return 0;
}