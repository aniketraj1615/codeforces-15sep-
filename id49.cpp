#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length()-3;i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            s.erase(i,i+3);
            i=-1;
        }
        else{
            continue;
        }
    }
    cout<<s<<endl;
return 0;
}