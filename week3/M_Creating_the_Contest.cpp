#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int ans=1;
    int max_ans=1;
    long long reach=0;
    for(int i=0;i<n;i++){
        reach=2*a[i];
        if(i==n-1){
            cout << max_ans;
            return;
        }
        if(reach>=a[i+1]){
            ans++;
            max_ans=max(ans,max_ans);
        }
        else{
            ans=1;
        }
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}