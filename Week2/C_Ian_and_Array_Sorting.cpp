#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int cond=1;
        int len;
        cin >> len;
        vector<int> arr;
        long long sum=0;
        for(int i=0;i<len;i++){
            int ele;
            cin >> ele;
            if(i%2==0){
                sum+=ele;
            }
            else{
                sum-=ele;
            }
            arr.push_back(ele);
        }
        if(len%2!=0 || sum<=0){
            cout<<"YES\n";
        }
        else{
            cout <<"NO\n";
        }

    }

    return 0;
}