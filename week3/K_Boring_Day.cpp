#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int ans=0;
    long long sum=0;
    int st=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>r){
            while(sum>r && st<=i){
                sum-=a[st];
                st++;
            }
        }
        if(sum>=l && sum <=r){
            sum=0;
            ans++;
            st=i+1;
        }
    }
    cout<<ans<<"\n";
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