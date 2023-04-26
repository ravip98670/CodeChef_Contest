#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    
	    long long xx,yy;
	    cin>>xx>>yy;
	    if(((xx*xx) - (2*yy)) == 0)
	        cout<<"Yes"<<endl;
	    else 
	        cout<<"No"<<endl;
	}
	return 0;
}
