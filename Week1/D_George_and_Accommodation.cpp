#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int n;
    cin >> n;
    int c=0;
    while(n>0){
        int p,q;
        cin >> p >> q;
        if(q-p>=2){
            c++;
        }
        n--;
    }
    cout << c<<endl;
    return 0;
}