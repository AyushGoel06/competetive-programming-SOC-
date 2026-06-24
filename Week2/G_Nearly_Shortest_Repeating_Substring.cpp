#include<bits/stdc++.h>
using namespace std;

bool check(const string& s, const string& k,int n){
    int mis=0;
    int d=k.length();
    for(int i=0;i<n;i++){
        if(k[i%d] != s[i]){
            mis++;
        }
        if(mis>1){
            return 0;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        vector<int> fac;
        for(int i=1;i<=n;i++){
            if(n%i==0){
               string pre=s.substr(0,i);
               string post=s.substr(n-i,i);
            
                if(check(s,pre,n) || check(s,post,n)){
                    cout<<i<<'\n';
                    break;
                }
            }
        }
    }
    return 0;
}