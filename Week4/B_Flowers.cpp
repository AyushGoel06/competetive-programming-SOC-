#include<bits/stdc++.h>
using namespace std;
int mod =1e9 +7;
int f(int k, int i, vector <int>& dp){
    if(i<0) return 0;

    if(i==0) return 1;

    if(dp[i] != -1) return dp[i];
    else{
        dp[i]=(f(k,i-k,dp) + f(k,i-1,dp)) % mod;
    }
    return dp[i];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tes , k;
    cin >> tes >> k;
    vector<int> dp(1e5 + 3 , -1);
    for(int i = 1; i < 1e5+1; i++){
        f(k, i, dp);
    }
    vector<int> pref(1e5+3,0);{ 

    for(int i = 1; i < 1e5+1; i++){
        pref[i] = (pref[i-1] + dp[i]) % mod;
    }

    }
    for(int i=0;i<tes;i++){
        int a,b;
        cin >> a >> b;
        long long ans=(pref[b]-pref[a-1]+mod) % mod;
    
        cout << ans << "\n";
    }
}