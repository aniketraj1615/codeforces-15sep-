#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    
    int n=s.length();
    char a=s[n-1];
    for(int i=n-2;i>=0;i--){
        if(s[i]>a){
           if(s[i]!='9'){ 
            s[i]=char(int(s[i])+1);
           }
           else if(s[i]=='9'){
            s[i]='9';
           }
        }
        else{
            a=s[i];
        }
    }
    
    sort(s.begin(),s.end());
    cout<<s<<endl;
    }
return 0;
}