#include<bits/stdc++.h>
using namespace std;
int main(){
    int tes;
    cin >> tes;
    while(tes--){
        int n;
        cin >> n;
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
            int a,b;
            pair<int,int> t;
            cin >>a >>b;
            t.first=a;
            t.second=b;
            p.push_back(t);
        }
        sort(p.begin(),p.end());
        int end=0;
        long long count=0;
        vector<int> e;
        for(int i=0;i<n;i++){
            end++;
            auto it=lower_bound(e.begin(),e.end(),p[i].second);
            int index=it-e.begin();//after insertion index provided
            if(end-1-index>0){
                count+=end-1-index;
            }
            e.insert(it,p[i].second);
        }
        cout<<count<<"\n";
    }
    return 0;
}