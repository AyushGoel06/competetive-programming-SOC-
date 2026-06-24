#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0,count=0;
    string s;
    cin >> n;
    cin >> s;
    char cur , next;

    while(i<n){
        cur=s[i];
        next=s[i+1];
        i++;
        if(cur==next){
            count++;
        }
    }
    cout << count;
    return 0;
}