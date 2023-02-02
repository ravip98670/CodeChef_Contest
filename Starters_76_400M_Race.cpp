#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    float t1,t2,t3;
	    cin>>t1>>t2>>t3;
	    
	    float a1 = 400/t1;
	    float a2 = 400/t2;
	    float a3 = 400/t3;
	    
	    if(a1 > a2 && a1 > a3)
	        cout<<"ALICE"<<endl;
	   else if(a2 >a1 && a2 > a3)
	    cout<<"BOB"<<endl;
	    else
	    cout<<"CHARLIE"<<endl;
	}
	return 0;
}
