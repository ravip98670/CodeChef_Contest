#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int c1,c2,c3;
	    cin>>c1>>c2>>c3;
	    
	    if(c1+c2+c3 >= 6)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}
