#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l;
    string r1,r2;
    cin >>l;
    cin>>r1>>r2;
    int m=0,n=0;

    string ans;
    ans+=r1[0];

    int count=1;
    int cond=0;

    for(int i=0;i<l;i++){
        if(m==1){
            n++;
            ans=ans+r2.substr(n,l-n);
            break;
        }
        if(n==l-1 && m==0){
            count+=cond;
            ans+=r2[l-1];
            break;
        }
        if(r1[n+1]==r2[n]){
            ans+=r2[n];
            cond++;
            n++;
        }
        else if(r1[n+1]=='0'){
            n++; ans+='0';
            if(cond>0){
                if(r1[n] != r2[n-1]){
                    cond=0;
                }
            }
        }
        else{
            m++; ans+='0';  
            if(cond>0){
                count+=cond;
            }
        }
    }
    
    cout << ans<<"\n"<<count<<"\n";
    return;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tes;
    cin >> tes;

    while(tes--){
        solve();
    }

    return 0;
}