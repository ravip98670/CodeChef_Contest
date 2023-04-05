#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int mp,ip;
	    cin>>mp>>ip;
	    
	    int i = 1;
	    int ans = 0;
	    while(ip < mp){
	        ip += i;
	        i++;
	        ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
