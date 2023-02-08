#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int aa,bb,cc,tt;
	    cin>>aa>>bb>>cc>>tt;
	    
	    if((aa+bb) >= tt ||(bb+cc) >= tt ||(aa+cc) >= tt)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}
