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
	    for(int i=0;i<siza;i++){
	        cin>>arr[i];
	    }
	    int ans[siza];
	   //vector<int> ans(siza,0);
	   //for(int i=0;i<siza;i++)
	   // ans[i] = arr[i];
	    
	   //reverse(ans.begin(),ans.end());
	   //if(siza == 1)
	   // cout<<(!arr[0])<<endl;
	   //else{
	   //    for(int i=0;i<siza;i++){
	   //        cout<<ans[i]<<" ";
	   //    }
	   //    cout<<endl;
	   //}
	   
	   if(arr[0] == 0)
	    ans[0] = 1;
	   else
	    ans[0] = 0;
	    
	    for(int i=1;i<siza;i++){
	        if(arr[i] != arr[i-1]){
	            if(arr[i] == 0)
	                ans[i] = 1;
	            else
	                ans[i] = 0;
	        }
	        if(arr[i] == arr[i-1]){
	            if(arr[i] == 0)
	                ans[i] = 1;
	            else
	                ans[i] = 0;
	        }
	    }
	    for(int i=0;i<siza;i++){
	           cout<<ans[i]<<" ";
	       }
	       cout<<endl;
	    
	}
	return 0;
}
