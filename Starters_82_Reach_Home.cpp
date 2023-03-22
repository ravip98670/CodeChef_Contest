#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	   int fu,km;
	   cin>>fu>>km;
	   
	   if((5*fu) >= km)
	    cout<<"Yes"<<endl;
	   else
	    cout<<"No"<<endl;
	}
	return 0;
}
