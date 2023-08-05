#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int drr[n];
	    for(int i=0;i<n;i++){
	        cin>>drr[i];
	    }
	    
	    map<int,int> mp;
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	        mp[drr[i]]++;
	    }
	    int maxi = 1;
	    for(auto i:mp){
	        maxi = max(maxi,i.second);
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}
