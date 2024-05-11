#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int vect[n];
    for(int i=0;i<n;i++){
        cin>>vect[i];

    }
    int index;
   while(1){
    int count=0;
    for(int i=0;i<n;i++){
        if(vect[i]>0){
count++;
vect[i]=vect[i]-m;
index=i;
        }
    }
    if(count==0){
        break;
    }
   }
cout<<index+1<<endl;
return 0;


}