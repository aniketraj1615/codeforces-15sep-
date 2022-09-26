#include<bits/stdc++.h>
using namespace std;
bool fun(int n){
    int arr[4];
  arr[3]=n%10;
  n=n/10;
  arr[2]=n%10;
  n=n/10;
  arr[1]=n%10;
  n=n/10;
  arr[0]=n%10;
//   for(int i=0;i<4;i++){
//     cout<<arr[i]<<" ";
//   }


     
     for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]==arr[j]){
                return false;
            }
        }

     }
     return true;
}
int main(){
    int n;
    cin>>n;
   
   while(1){
    n++;
    if(fun(n)){
        
        break;
    }
   }
    
   cout<<n<<endl;

    

return 0;
}