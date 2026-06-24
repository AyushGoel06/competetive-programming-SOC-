#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int max_i=0,min_i=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
        if(a[i]>a[max_i]){
            max_i=i;
        }
        if(a[i]<a[min_i]){
            min_i=i;
        }
    }

    if(min_i>max_i){
    
        int t=min_i;
        min_i=max_i;
        max_i=t;
    }

    int dist1,dist2,dist3;
    dist1=max_i+1;
    dist2=min_i+1+n-max_i;
    dist3=n-min_i;
    int ans=min({dist1,dist2,dist3});
    cout<<ans<<"\n";
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