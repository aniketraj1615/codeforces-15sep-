#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    string str;
vector<string>vect;
   
  int ans=0;
   for(int i=0;i<n;i++){
    string s;
    cin>>s;
    vect.push_back(s);
    if(s==vect[0]){
        ans++;
    }
    else{
        str=vect[i];
    }
    }
    

   
   if(ans>n/2){
    cout<<vect[0]<<endl;
   }
   else{
    cout<<str<<endl;
   }

return 0;
}