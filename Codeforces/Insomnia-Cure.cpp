#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int t;
		cin>>t;
		vector<int>arr(t);
		for(int i=0;i<t;i++){
			cin>>arr[i];
		}
		bool flag=1;
		sort(arr.begin(), arr.end());
		for(int i=0;i<t-1;i++){
			if(arr[i+1]-arr[i]>1){
				flag=0;
				break;
			}
		}
		if(flag)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}