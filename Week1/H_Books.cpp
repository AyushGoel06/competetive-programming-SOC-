#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;
    int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr[i]=temp;
    }
    int best=0,count=0,start=0;
    int currtime=0;
    for (int i=0;i<n;i++){
        currtime+=arr[i];
        count++;
        while(currtime>t){
            currtime-=arr[start];
            start++;
            count--;
        }
        best=max(count,best);
    }
    cout << best;
    return 0;
}