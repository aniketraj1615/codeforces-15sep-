#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;s[i]!='\0';i++){
        int j=i+1;
while(s[j]==s[i]){
    c++;
    j++;
}
i=j-1;
    }
    cout<<c<<endl;
return 0;
}