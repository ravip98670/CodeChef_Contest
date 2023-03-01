#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int ya,ba;
	    cin>>ya>>ba;
	    
	    int dis1 = 100-ya;
	    int dis2 = 200-(2*ba);
	    
	    if(dis1 < dis2)
	        cout<<"FIRST"<<endl;
	    else if(dis1 > dis2)
	        cout<<"SECOND"<<endl;
	   else
	    cout<<"BOTH"<<endl;
	}
	return 0;
}
