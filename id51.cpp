#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
  int pos=(n-a);
  cout<<pos<<endl;
  if(b==0){
   cout<<"1"<<endl;
  }
  else{

  
 
  while(pos>b){
   cout<<pos<<endl;
   pos--;
  }
  cout<<pos<<endl;
  }
return 0;
}