#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      
        char arr[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>arr[i][j];
            }
        }
        int RR;
        int BB;
        int R=0;
        int B=0;
         for(int i=0;i<8;i++){
            RR=0;
            BB=0;
            for(int j=0;j<8;j++){
                if(arr[i][j]=='R'){
RR++;
                }
                
            }
            if(RR==8){
                R=RR;
                break;
            }
        }
        if(R==8){
            cout<<"R"<<endl;

        }
        else{
            cout<<"B"<<endl;
        }


    }
return 0;
}