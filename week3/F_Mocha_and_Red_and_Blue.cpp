#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int first_known = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] != '?') {
            first_known = i;
            break;
        }
    }

    if (first_known == -1) {
        s[0] = 'B';
        first_known = 0; 
    }

    for (int i = first_known - 1; i >= 0; i--) {
        if (s[i + 1] == 'B') {
            s[i] = 'R';
        } else {
            s[i] = 'B';
        }
    }

    for (int i = first_known + 1; i < n; i++) {
        if (s[i] == '?') {
            if (s[i - 1] == 'B') {
                s[i] = 'R';
            } else {
                s[i] = 'B';
            }
        }
    }

    cout << s << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tes;
    cin >> tes;
    while(tes--){
        solve();
    }
    return 0;
}