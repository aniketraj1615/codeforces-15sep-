#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int left[n];
    int la=0,lb=0;
    int ra=0,rb=0;

    int right[n];
    for(int i=0;i<n;i++){
        cin>>left[i];
        if(left[i]==0){
            la++;
        }
else{
    lb++;
}
        cin>>right[i];
         if(right[i]==0){
            ra++;
        }
else{
    rb++;
}
    }
    la=min(la,lb);
    ra=min(ra,rb);
    cout<<la+ra<<endl;
return 0;
}