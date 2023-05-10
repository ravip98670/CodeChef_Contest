#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int baari;
	    cin>>baari;
	    
	    if(baari == 0)
	        cout<<"1"<<endl;
	     else{
	         cout<<baari+(2*baari)<<endl;
	     }
	}
	return 0;
}
