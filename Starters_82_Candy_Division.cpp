#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int f;
	    cin>>f;
	    if((f%3) == 0)
	        cout<<"Yes"<<endl;
	   else
	    cout<<"No"<<endl;
	}
	return 0;
}
