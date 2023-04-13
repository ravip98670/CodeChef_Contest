#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    string in;
	    cin>>in;
	    
	    int i = 0;
	    int hold = 0;
	    while(i < in.size()){
	        hold = hold*10 + (in[i]-'0');
	        
	        hold %= 20;
	        
	        i++;
	    }
	    
	    cout<<hold<<endl;
	}
	return 0;
}
