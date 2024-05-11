#include<bits/stdc++.h>
using namespace std;
int main(){
   string a,b,c;
   cin>>a>>b>>c;
   string ab=a+b;

   bool flage=false;
   if(ab.size()!=c.size()){
    cout<<"NO"<<endl;
   }
   else{
       sort(ab.begin(),ab.end());
   sort(c.begin(),c.end());
for(int i=0;i<c.size();i++){
    if(ab[i]!=c[i]){
        flage=true;
        break;
    }
   }
   if(flage==false){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

   }

   
return 0;
}