#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int sppeed;
	    cin>>sppeed;
	    if(sppeed<=70)
	        cout<<"0"<<endl;
	    else if(sppeed>70 && sppeed<=100)
	        cout<<"500"<<endl;
	    else if(sppeed>100)
	        cout<<"2000"<<endl;
	}
	return 0;
}
