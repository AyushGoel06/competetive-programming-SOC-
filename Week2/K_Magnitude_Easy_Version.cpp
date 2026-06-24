#include<bits/stdc++.h>
using  namespace std;

int main(){
    int tes;
    cin>>tes;
    while(tes--){
        int n;
        cin >>n;
        vector<int> arr;
        long long o1=0,o2=0,o3=0,o4=0;
        long long a_max=0,a_min=0;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            o1=a_max+a;
            o2=abs(a_max+a);
            o3=a_min+a;
            o4=abs(a_min+a);
            a_max=max({o1,o2,o3,o4});
            a_min=min({o1,o2,o3,o4});
        }
        cout<<a_max<<"\n";
    }
}