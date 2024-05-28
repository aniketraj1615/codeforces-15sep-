#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int count=1;
    bool flage=true;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            if(count%k==0){
                count=1;
            }
            else{
                flage=false;
                break;
            }
        }
    }
    
   
return 0;
}