#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    set<int> c;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        c.insert(temp);
    }

    vector<int> a(c.begin(),c.end());
    sort(a.begin(),a.end());
int max_ans = 0;
    
    // Check the window starting at EVERY unique element
    for(int i = 0; i < a.size(); i++){
        int tar = a[i] + n;
        int it = lower_bound(a.begin(), a.end(), tar) - a.begin();
        
        max_ans = max(max_ans, it - i);
    }
    cout <<max_ans<<"\n";
    return;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}