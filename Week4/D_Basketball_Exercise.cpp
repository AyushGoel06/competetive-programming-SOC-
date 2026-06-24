#include<bits/stdc++.h>
using namespace std;
//prev refers to state 1 or 2 or none
long long f(const vector<vector<int>>& team , int y, int prev,vector<vector<long long>>& dp){
    if(y<0){
        return 0;
    }
    long long t1=0,t2=0,t3=0;
    if(dp[prev][y] != -1){
        return dp[prev][y];
    }
    if(prev==0){
        t1=team[0][y]+f(team,y-1,1,dp);
        t2=team[1][y]+f(team,y-1,2,dp);
    }
    else if(prev==1){
        t2=team[1][y]+f(team,y-1,2,dp);
    }
    else if(prev==2){
        t1=team[0][y]+f(team,y-1,1,dp);
    }
    t3=f(team,y-1,prev,dp);
    dp[prev][y]=max(t1,max(t2,t3));
    return dp[prev][y];
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> team;
    for(int i=0;i<2;i++){
        vector<int> temp(n);
        for(int j=0;j<n;j++){
            cin >> temp[j];
        }
        team.push_back(temp);
    }
    vector<vector<long long>> dp(3,vector<long long>(n,-1));
    long long ans= f(team,n-1,0,dp);
    cout << ans;
    return 0;
}