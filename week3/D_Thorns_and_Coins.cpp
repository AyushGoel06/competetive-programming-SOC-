#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string path;
    cin >> path;
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(i+1>=n){
            cout<<ans<<"\n";
            return;
        }
        if(path[i+1]!='*'){
            if(path[i+1]=='@'){
                ans++;
            }
        }
        else{
            if(i+2>=n){
                cout<<ans<<"\n";
                return;
            }
            else{
                if(path[i+2]!='*'){
                    if(path[i+2]=='@'){
                        ans++;
                    }
                    i++;
                }
                else{
                    cout<<ans<<"\n";
                    return;
                }
            }
        }
    }
    cout<<ans<<"\n";
    return;
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