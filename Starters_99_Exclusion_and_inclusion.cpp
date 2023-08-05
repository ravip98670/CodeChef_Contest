#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long test;
	cin>>test;
	while(test--){
	    long long n;
	    cin>>n;
	     
	    vector<long long> arr(n,0);
	    long long sum = 0;
	    for(long long i=0;i<n;i++){
	        cin>>arr[i];
	        sum += arr[i];
	    }
	    
	   
	    
	    sort(arr.begin(), arr.end(), greater<long long>());
	    cout<<sum<<" ";
	    for(long long i=n-1;i>0;i--){
	        sum -= arr[i];
	        cout<<sum<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
