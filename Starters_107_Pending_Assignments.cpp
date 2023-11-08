#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--){
	    long x,y,z;
	    cin>>x>>y>>z;
	    
	    long tm = x*y;
	    
	    if(tm <= z*1440)
	     cout<<"Yes"<<endl;
	     else cout<<"no"<<endl;
	}
	return 0;
}
