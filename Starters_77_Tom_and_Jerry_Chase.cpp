#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int toms,jerrys;
	    cin>>toms>>jerrys;
	    if(jerrys > toms)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}
