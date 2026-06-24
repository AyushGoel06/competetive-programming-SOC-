#include<bits/stdc++.h>
using namespace std;
int main(){
    bool flag=1;
    string s;
    string t;
    cin >> s;
    cin >> t;
    int i=0;
    int len_s=s.size();
    int len_t=t.size();
    if(len_s!=len_t){
        cout << "NO";
        return 0;
    }
    while(s[i]!='\0'){
        if(s[i]!=t[len_t-1-i]) {
            flag=0;
        }
        i++;
    }
    if(flag) cout<< "YES";
    else cout<<"NO";
    return 0;
}