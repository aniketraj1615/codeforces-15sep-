#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int p=n-(a+1);
    while(p>b){
      p--;
    }
    cout<<p+1<<endl;
return 0;
}