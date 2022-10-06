#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<n  <<";"<<a<<"  "<<b<<endl;
    cout<<n-a<<endl;
  int position=(n-a);
//   cout<<pos<<endl;
  if(b==0){
   cout<<"1"<<endl;
  }
  else{

  
 
  while(position>b){
   // cout<<pos<<endl;
   position--;
  }
  cout<<position<<endl;
  }
return 0;
}