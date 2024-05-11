#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    for(int i=0;i<s1.length();i++){
         for(int j=0;j<s3.length();j++){
        if(s1[i]==s3[j]){
            s3[j]='a';
        }
    }
    }
    for(int i=0;i<s2.length();i++){
         for(int j=0;j<s3.length();j++){
        if(s2[i]==s3[j]){
            s3[j]='a';
        }
    }
    }
    int f=0;
    for(int i=0;i<s3.length();i++){
        if(s3[i]!='a'){
            cout<<"NO"<<endl;
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"YES"<<endl;
    }
return 0;
}