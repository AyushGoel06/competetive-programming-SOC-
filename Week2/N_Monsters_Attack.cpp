#include<bits/stdc++.h>
using namespace std;

void fight(){
    int n;
    long long k;
    cin >> n >> k;
    vector <long long> a(n);
    vector <long long> x(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> x[i];
    }

    vector<pair<long long,long long>> mons(n);
    for(int i=0;i<n;i++){
        mons[i]={abs(x[i]),a[i]};
    }
    sort(mons.begin(),mons.end());
    long long total_health = 0;
    
    for(int i = 0; i < n; i++) {
        total_health += mons[i].second;
        long long max_bullets_possible = mons[i].first * k;
        if(total_health > max_bullets_possible) {
            cout << "NO\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
    return;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        fight();
    }
    return 0;
}