#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int x,y,r;
	    cin>>x>>y>>r;
	    int s = r/30;
	    
	    x += s;
	    
	    s = x/y;
	    if(x%y != 0){
	        s += 1;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
