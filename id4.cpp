#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>vect;
    int num=0;
    for(int i=0;s[i]!='\0';i++)
{
    if(s[i]=='.'){
        vect.push_back(0);
        
        
num++;

    }
    else if(s[i]=='-'&&s[i+1]=='.'){
        vect.push_back(1);
        
        i++;
        num++;
        
        
    }
    else if(s[i]=='-'&&s[i+1]=='-'){
        vect.push_back(2);
        
        i++;
        num++;
        
        
    }
}
    
    for(int i=0;i<num;i++){
        cout<<vect[i];
    }

    return 0;
}