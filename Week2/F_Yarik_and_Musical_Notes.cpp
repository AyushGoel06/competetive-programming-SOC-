#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,long long> m;
        for(int i=0;i<n;i++){
            int temp;
            cin>> temp;
            m[temp]++;
        }
        long long ans =0;
        for(auto const& p : m ){
            long long cou = p.second;
            
            if(cou >= 2){
                ans += cou * (cou - 1) / 2;
            }
        }
        if(m.count(2) && m.count(1)){
                ans+=m[1]*m[2];
            }
        cout << ans <<"\n";
    }
    return 0;
}