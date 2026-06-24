#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int count_o=0;
    int count_e=0;
    int max_o=0,max_e=0;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(i%2==0){
            count_e++;
            max_e=max(temp,max_e);
        }
        else{
            count_o++;
            max_o=max(temp,max_o);
        }
    }
    int ans=max(max_e+count_e,max_o+count_o);
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