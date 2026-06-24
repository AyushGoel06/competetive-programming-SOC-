#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ini_sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
        if(arr[i]==1) ini_sum++;
    }
    int max_sum=0;
    int curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            curr++;
        }
        if(arr[i]==1){
            curr--;
        }
        if(curr<0){
            curr=0;
        }
        max_sum=max(curr,max_sum);
    }
    if (max_sum==0) max_sum=-1;
    cout<< max_sum+ini_sum;
    return 0;
}