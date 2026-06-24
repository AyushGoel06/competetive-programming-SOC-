#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    sort(nums.begin(),nums.end());

    int len=nums.size()-1;

    long long sum_o=0;
    long long sum_e=0;
    for(int i=n-1;i>=0;i--){
        if(nums[i]%2==0){
            sum_e+=nums[i];
        }
        i--;
        if(i>=0){
            if(nums[i]%2!=0){
                sum_o+=nums[i];
            }
        }
    }
    
    if(sum_o>sum_e){
        cout<<"Bob\n";
    }
    else if(sum_e>sum_o){
        cout<<"Alice\n";
    }
    else{
        cout<<"Tie\n";
    }
    return;
}

int main(){
    int tes;
    cin >> tes;
    while(tes--){
        solve();
    }
    return 0;
}