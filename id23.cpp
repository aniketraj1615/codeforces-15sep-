#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set <int> a;
    for(int i=0;i<=s.length();i++){
        a.insert(s[i]);
    }
    if(s.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;

    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
return 0;
}