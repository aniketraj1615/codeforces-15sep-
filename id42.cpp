#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n;
    vector<int>s;
    int digit=0;
    while(n){
        s.push_back(n%10);
        n=n/10;
        digit++;
    }
    reverse(s.begin(),s.end());
    if(s[0]!=1){
        cout<<"NO"<<endl;
    }
    else{
    for(int i=1;i<digit;i++){
       if(s[i]==1||s[i]==4){
        continue;
       }
       else{
        
       }
    }
    }
return 0;
}