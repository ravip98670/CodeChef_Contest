#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int noPages,xx,yy;
	    cin>>noPages>>xx>>yy;
	    
	    if(xx*yy >= noPages)
	        cout<<"Yes"<<endl;
	       else
	       cout<<"No"<<endl;
	}
	return 0;
}
