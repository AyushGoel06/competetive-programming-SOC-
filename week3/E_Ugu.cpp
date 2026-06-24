#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int ans=0;
    string s;
    cin >> s;
    for(int i=0;i<n-1;i++){
        if(ans%2!=0){
            if(s[i+1]=='0'){
                s[i+1]='1';
            }
            else{
                s[i+1]='0';
            }
        }
        if(s[i+1]<s[i]){
            ans++;
            if(s[i+1]=='0'){
                s[i+1]='1';
            }
            else{
                s[i+1]='0';
            }
        }
    }
    cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}