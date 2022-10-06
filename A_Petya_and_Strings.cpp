#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        s1[i]=toupper(s1[i]);
    }
     for(int i=0;i<s2.length();i++)
    {
        s2[i]=toupper(s2[i]);
    }
    int a=s1.compare(s2);
    if(a==0){
        cout<<"0"<<endl;
    }
    if(a>0){
        cout<<"1"<<endl;
    }
    if(a<0){
        cout<<"-1"<<endl;
    }
    
return 0;
}