#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
   
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>ss(s.begin(),s.end());
    string uni="";
 for (auto& it : ss) {
        uni+=it;
    }
sort(uni.begin(),uni.end());
int uni_size=uni.size();

for(int i=0;i<n;i++){
    for(int j=0;j<uni.size();j++){
        if(s[i]==uni[j]){
            
            int loc=uni_size-1-j;
            
            s[i]=uni[loc];
            break;
        }
    }
}
cout<<s<<endl;
   }
   
return 0;
}