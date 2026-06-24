#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int d;
    cin >> n >> d;
    vector<int> p;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        p.push_back(temp);
    }
    sort(p.begin(),p.end());
    int st=0;
    int k=0;
    int end=n-1;
    int count=0;
    while(st<=end){
        int sum=0;
        while(sum<=d && st<=end){
            sum=p[end]+(st-k)*p[end];
            if(sum>d){
                break;
            }
            st++;
        }
        end--;
        k=st;
        if(sum>d){
        count++;
        }   
    }
    cout<<count;
    return 0;
}