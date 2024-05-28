#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   string ans="hello";
   int j=0;
   int count=0;
   for(int i=0;i<s.size();i++){
    if(s[i]==ans[j]){
        j++;
        count++;
        if(count==5){
            break;
        }
    }
   }
   if(count==5){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

return 0;
}