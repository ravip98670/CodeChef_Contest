#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	   int l,v1,v2;
	    cin>>l>>v1>>v2;
	    
	    int x1 = l/v1;
	    
	    int x2 = l/v2;
	   // cout<<x1<<": "<<x2<<endl;
	    
	    if(l%v1 != 0)
	      x1 += 1;
	    if(l%v2 != 0)
	      x2 += 1;
	      
	    if(x2 >= x1)
	     cout<<"-1"<<endl;
	    else cout<<x1-x2-1<<endl;
	    
	}
	return 0;
}