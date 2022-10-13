#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ff first
#define ss second
#define pii pair<int,int>
#define vii vector<pii>
#define sqrt sqrtl();

int main(){
    int s;
    cin>>s;
    int n;
    cin>>n;
    vii a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].ff>>a[i].ss;
    }
    sort(a.begin(),a.end());
    int f=0;
    for(int i=0;i<n;i++){
        if(s>a[i].ff){
            s+=a[i].ss;
        }
        else{
            cout<<"NO"<<endl;
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"YES"<<endl;
    }
return 0;
}