#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upper=0;
    int len=0;
    for(int i=0;s[i]!='\0';i++){
        len++;
        if(isupper(s[i])){
upper++;
        }
    }
    // cout<<"length  :"<<len<<endl;
    // cout<<"upper  :"<<upper<<endl;
    if(upper>(len-upper)){
        // cout<<"upper more"<<endl;
        for(int i=0;s[i]!='\0';i++){
            if(!isupper(s[i])){
                s[i]=s[i]-32;
            }
        }
    }
   else if(upper<(len-upper)){
    // cout<<"lower more"<<endl;
        for(int i=0;s[i]!='\0';i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
        }
    }
    else if(upper=(len-upper)){
        // cout<<"both equal"<<endl;
        for(int i=0;s[i]!='\0';i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
        }
    }
   
    cout<<s<<endl;
return 0;
}