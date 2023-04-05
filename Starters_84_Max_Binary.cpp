#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int siza,addon;
	    cin>>siza>>addon;
	    
	    string dec;
	    cin>>dec;
	    
	    
	    
	    if(dec[0] == '1'){
	        for(int i=0;i<addon;i++)
	            dec += '0';
	    }else{
    	    dec[0] = '1';
    	    for(int i=1;i<addon;i++)
    	        dec += '0';
	    }
	    cout<<dec<<endl;
	}
	return 0;
}
