#include<bits/stdc++.h>
using namespace std;
int main(){
    int tes;
    cin >> tes;
    while(tes--){
        int n;
        cin >> n;
        vector<int> a;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            m[i]=temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        vector<long long> ss;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            ss.push_back(sum);
        }
        unordered_map<int,int> reach;
        for(int i=n-1;i>-1;i--){
            if(i==n-1){
                reach[a[i]]=i;
                continue;
            }
            
            if(ss[i]>=a[i+1]){
                reach[a[i]]=reach[a[i+1]];
            }
            else{
                reach[a[i]]=i;
            }
        }
        //two map reach<index after sort , reach> and m<index before sort and ellemnt>
        for(int i=0;i<n;i++){
            cout << reach[m[i]] << " ";
        }
        cout<<endl;
    }
    return 0;
}