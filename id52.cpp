#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.length()<7){
        cout<<"NO"<<endl;
    }
    else{
        int  c=1;
       
        for(int i=0;i<s.length();i++){
            
            if(s[i]==s[i+1]){
               
c++;
            }
            else if(s[i]!=s[i+1]&&c<7){
                
                c=1;
            }
            else if(c==7){
                
                break;
            }
        }
        if(c>=7){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

return 0;
}