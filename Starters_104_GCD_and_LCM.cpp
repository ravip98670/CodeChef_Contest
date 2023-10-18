#include <bits/stdc++.h>
using namespace std;



long long lcm(long long a, long long b) {
    
    return (a / __gcd(a, b)) * b;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long x,y,k;
	    cin>>x>>y>>k;
	    
	    
	    for(int i=0;i<k;i++){
	        
	        long long gd = __gcd(x,y);
	        
	        if(x > y)
	            x = gd;
	        else y = gd;
	        
	        long long lc = lcm(x,y);
	        
	        if(x > y)
	            x = lc;
	        else y = lc;
	        
	         if(x == y){
    	        break;
	        }
	        
	        
	    }
	    cout<<x+y<<endl;
	    
	}
	return 0;
}
