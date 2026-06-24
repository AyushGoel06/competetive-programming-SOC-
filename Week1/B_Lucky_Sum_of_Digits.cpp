#include<iostream>
#include<vector>
using namespace std;

void pr_vec(vector<char>& a){
    for(int i=a.size()-1; i>-1;--i){
        cout<< a[i];
    }
    return;
}

int main(){
    int n;
    cin >> n;
    vector<char> num;
    while(n>0){
        if(n%4==0 && n%7!=0 && n/4<7){
            while(n>0){
            num.push_back('4');
            n=n-4;
            }
            pr_vec(num);
            return 0;
        }
        num.push_back('7');
        n=n-7;
        if (n==0){
            pr_vec(num);
            return 0;
        }
    }
    cout << -1;
    return 0;
}