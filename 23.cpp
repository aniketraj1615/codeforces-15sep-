#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int count=0;
    for(int i=0;i<s.size()-1;i++){
if(s[i]!=s[i+1]){
    count++;

}
    }
    if(count%2!=0){
        cout<<"CHAT WITH HER!"<<endl;

    }
    else{
        cout<<"IGNORE HIM!"<<endl;

    }
   
return 0;
}