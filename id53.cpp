#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int j=0;j<s.length();j++){
       
        s[j]=tolower(s[j]);
         
    }
    cout<<s<<endl;
    for(int j=0;j<s.length();j++){
       
       
         if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
            cout<<s[j]<<endl;
            s.erase(j,1);
            cout<<"string ::"<<s<<endl;
        }
    }
    
    cout<<s<<endl;
return 0;
}