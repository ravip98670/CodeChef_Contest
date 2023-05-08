#include <bits/stdc++.h>
using namespace std;
void helper(){
    int siza;
	    cin>>siza;
	    
	    int arr[siza];
	    for(int i=0;i<siza;i++){
	        cin>>arr[i];
	    }
	    
	    long long cnt = (siza*(siza-1) / 2) ;
	    long long c = 0;
	    map<int,int> mn;
	    for(int n:arr){
	        mn[n]++;
	    }
	    
	    if(mn.size() != siza){
	        
	    long long a = 0,val = 0;
	    
	    for(int i=0;i<siza;i++){
	        a += (siza-mn[arr[i]] - val);
	        val += 1;
	        mn[arr[i]] -= 1;
	    }
	    cout<<a<<endl;
	    
	   }
	   else
	   cout<<cnt<<endl;
	   
	    
	
}

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    helper();
	}
	return 0;
}
