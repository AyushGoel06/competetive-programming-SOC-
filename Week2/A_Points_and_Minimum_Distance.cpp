#include<bits/stdc++.h>
using namespace std;
int main(){
    int tes;
    cin>> tes;
    for(int i=0; i<tes ;i++){
        int num;
        vector<int> a;
        cin >> num;
        int j=0;
        int s=0;
        while((2*num)>j){
            j++;
            cin >> s;
            a.push_back(s);
        }
        sort(a.begin(),a.end());
        vector<int> a1,a2;
        int sum=0;
        for(int k=0;k<2*num;k++){
            if(k<num){
                a1.push_back(a[k]);
            }
            else{
                a2.push_back(a[k]);
            }
        }
        sum = (a1[num - 1] - a1[0]) + (a2[num - 1] - a2[0]);
        cout <<sum <<endl;
        for(int k=0;k<num;k++){
            cout<<a1[k]<<" "<<a2[k];
            cout<<endl;
        }
    }
    return 0;
}