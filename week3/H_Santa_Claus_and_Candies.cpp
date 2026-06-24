#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i;
    for(i=1;;i++){
        if((i*i+i)/2>n){
            i--;
            break;
        }
    }
    cout << i<<"\n";
    if(i==1){
        cout<<n;
        return 0;
    }
    for(int j=1;j<i+1;j++){
        if(j==i){
            cout<<n-(j*j-j)/2;
            break;
        }
        cout<<j<<" ";
    }
    return 0;
}