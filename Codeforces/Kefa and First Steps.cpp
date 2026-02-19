#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int currentcount=1; 
 int maxcount=1; 
 for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
          currentcount++;
        }
        else{
           currentcount=1;
											}
        maxcount = max(maxcount, currentcount);
    }
    cout << maxcount << endl;
		  return 0;
	}