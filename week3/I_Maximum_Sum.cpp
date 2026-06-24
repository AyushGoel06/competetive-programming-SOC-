#include<bits/stdc++.h>
using namespace std;
long long power(long long base, long long exp){
    long long res=1;
    long long mod=1000000007;
    base=base%mod;
    while(exp>0){
        if (exp % 2 == 1) {res = (res * base) % mod;
            exp--;}
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return res;
}

void solve(){
    //task find largest sub array sum;
    int n;
    long long k;
    cin >> n>>k;
    vector<int> s(n);
    long long tot=0;
    for(int i=0;i<n;i++){
        cin >> s[i];
        tot+=s[i];
    }
    long long ans=0,curr=0;
    for(int i=0;i<n;i++){
        curr+=s[i];
        ans=max(curr,ans);
        if(curr<0){
            curr=0;
        }
    }
    //cout is 2^k * ans;
    long long mod = 1000000007;
    long long multiplier = (power(2, k) - 1 + mod) % mod; 
    long long added_value = (ans % mod * multiplier) % mod; 
    long long final_answer = ((tot % mod) + added_value) % mod;
    final_answer = (final_answer + mod) % mod;
    
    cout << final_answer << "\n";
    return ;
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