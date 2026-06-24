#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >>m>>n;
    int ans=0;
    while(m>0 && n>0){
        if(m==1 && n==1){
            break;
        }
        if(m<n){
            n=n-2;
            m++;
        }
        else{
            n++;
            m=m-2;
        }
        ans++;
    }
    cout<<ans;
    return 0;
}