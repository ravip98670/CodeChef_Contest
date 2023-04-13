#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int xaa,yaa;
	    cin>>xaa>>yaa;
	    
	    if((xaa*15) >= (2*yaa))
	        cout<<"Yes"<<endl;
	   else
	        cout<<"No"<<endl;
	}
	return 0;
}
