#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    string s;
    cin >> n >> t;
    cin >> s;
    while(t>0){
        t--;
        for(int i=0; i<n;i++){
            if(s[i+1]=='G' && s[i]=='B'){
                s[i+1]='B';
                s[i]='G';
                i++;
            }
        }
    } 
    cout << s;
    return 0;
}