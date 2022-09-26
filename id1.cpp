#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum1=0,sum2=0,sum3=0;
   int a;
    
        
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
cin>>a; 
if(j==0){
    sum1=sum1+a;
}
else if(j==1){
    sum2=sum2+a;
}
else if(j==2){
    sum3=sum3+a;
}

            }
       
    }
    
     if(sum1==0&&sum2==0&&sum3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
return 0;
}