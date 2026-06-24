#include<bits/stdc++.h>
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int m=0;
    vector<int> fr(1e5+5,0);
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        fr[temp]++;
        m=max(m,temp);
    }

    int prev2=0;
    int prev1=fr[1];
    for(int i=2;i<=m;i++){
        long long skip=prev1;
        long long taken=prev2+i*fr[i];
        prev2=prev1;
        prev1=max(skip,taken);
    }
    cout << prev1 << "\n";
    return 0 ;
}