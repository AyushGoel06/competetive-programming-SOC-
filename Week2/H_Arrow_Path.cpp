#include<bits/stdc++.h>
using namespace std;

int main(){
    int tes;
    cin >> tes;
    while(tes--){
        int l;
        cin >> l;
        string row1;
        string row2;

        cin >> row1;
        cin >> row2;

        int con=1;
        int m=1,n=1;
        while(con){
            if(m== 2 && n==l){
                cout<<"YES"<<"\n";
                con=0;
                break;
            }
            if(m==1){
                if(row1[n]=='<'){
                    //move down
                    m=2;
                    if(row2[n-1]=='<'){
                        cout<<"NO"<<"\n";
                        con=0;
                        continue;
                    }
                    else{
                        n++;
                    }
                }
                else{
                    //good move right
                    n=n+2;
                }
                continue;
            }
            if(m==2){
                if(row2[n]=='<'){
                    m=1;
                    if(row1[n-1]=='<'){
                        cout<<"NO"<<"\n";
                        con=0;
                        continue;
                    }
                    else{
                        n++;
                    }
                }
                else{
                    n=n+2;
                }
            }
            if(n>l){
                cout << "NO" <<"\n";
                con=0;
                break;
            }
        }
    }
    return 0;
}