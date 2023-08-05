#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int test;
	cin>>test;
	while(test--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int pro;
	    int temp = -1;
	    
	    if((x*y)%z == 0){
	        pro = x*y;
	        temp = z;
	    }else if((y*z)%x == 0){
	        pro = y*z;
	        temp = x;
	    }else if((z*x)%y == 0){
	        pro = z*x;
	        temp = y;
	    }
	    
	    if(temp == -1) cout<<temp<<endl;
	    else cout<<pro<<" "<<temp<<endl;
	}
	return 0;
}
