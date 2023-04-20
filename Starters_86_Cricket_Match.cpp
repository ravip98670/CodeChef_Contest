#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int r,b;
	    cin>>r>>b;
	    
	    if(6*6*b >= r)
	        cout<<"Yes"<<endl;
	       else
	       cout<<"No"<<endl;
	}
	return 0;
}
