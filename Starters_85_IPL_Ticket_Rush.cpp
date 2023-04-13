#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int na,tt;
	    cin>>na>>tt;
	    if(na < tt)
	        cout<<"0"<<endl;
	    else
	        cout<<na-tt<<endl;
	}
	return 0;
}
