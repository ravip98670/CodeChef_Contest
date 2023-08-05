#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int siza;
	    cin>>siza;
	    
	    int arr[siza];
	    for(int i=0;i<siza;i++)
	        cin>>arr[i];
	     
	    map<int,int> mp;
	    int count = 0 ,ans = 0;;
	    
	    for(int i=0;i<siza;i++){
	        mp[arr[i]]++;
	        if(mp[arr[i]] %2 == 0)
	            count--;
	       else count++;
	       ans = max(count,ans);
	    }
	    ans = max(count,ans);
	    cout<<ans<<endl;
	    
	}
	return 0;
}
