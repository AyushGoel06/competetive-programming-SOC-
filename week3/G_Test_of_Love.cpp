#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    
    // We start at the left bank, which is conceptually index -1
    int i = -1; 
    
    while(i < n) {
        // CASE 1: We are on the bank (-1) or on a log ('L')
        if(i == -1 || s[i] == 'L'){
            // If we can jump directly to the right bank, we win
            if(i + m >= n){
                cout << "YES\n";
                return;
            }
            
            int furthest_log = -1;
            // Look ahead within our jump range (m) for the FURTHEST log
            for(int step = i + m; step > i; step--){
                if(s[step] == 'L'){
                    furthest_log = step;
                    break;
                }
            }
            
            // If we found a log, jump to it.
            if(furthest_log != -1){
                i = furthest_log; 
            } 
            // If no log is found, we are forced to jump as far as possible into the water/croc
            else {
                i += m; 
            }
        } 
        // CASE 2: We are in the water ('W')
        else if(s[i] == 'W'){
            if(k <= 0){ // Check if we are out of stamina (k <= 0 catches negatives)
                cout << "NO\n";
                return;
            }
            k--; // Spend 1 stamina
            i++; // Swim exactly 1 meter forward
        } 
        // CASE 3: We landed on a crocodile ('C')
        else if(s[i] == 'C'){
            cout << "NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
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