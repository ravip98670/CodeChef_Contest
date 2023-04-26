#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    
	    long xx;
	    cin>>xx;
	    
	    if(xx == 1)
	        cout<<"-1"<<endl;
	    else if(xx <= 1000000){
	        cout<<"1"<<" "<<"1"<<" "<<xx-1<<endl;
	    }
	    else if(xx > 1000000){
	       long temp = xx % 1000000;
	       
	       if(temp == 0)
	            cout<<(xx/1000000)-1<<" "<<"1000000"<<" "<<"1000000"<<endl;
	       else{
	           cout<<(xx/1000000)<<" "<<"1000000"<<" "<<temp<<endl;
	       }
	    }
	}
	return 0;
}
