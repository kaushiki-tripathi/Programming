#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int minunfair=INT_MAX;
    for(int i=0;i<=n-k;i++){
        int diff=arr[i+k-1]-arr[i];
        if(diff<minunfair)
            minunfair=diff;
    }
    cout<<minunfair<<endl;
    return 0;
    
    
    
}