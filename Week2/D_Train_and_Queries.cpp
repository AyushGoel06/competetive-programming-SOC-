#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases;
    for(int i=0;i<cases;i++){
        int n ,k;
        cin >>n >> k;

        vector<int> sta;

        map<int,int> m;
        map<int,int> l;

        for(int i=0;i<n;i++){
            int temp;
            cin >>temp;
            if(m.find(temp) == m.end()){
                m[temp]=i;
            }
            l[temp]=i;
            sta.push_back(temp);
        }

        for(int i=0;i<k;i++){
            int temp1,temp2;
            cin >> temp1 >> temp2;
            int cond=0;
            bool a=m.count(temp1);
            bool b=l.count(temp2);
            if(a && b && m[temp1]<=l[temp2]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}