#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int capa,people,cost;
	    cin>>capa>>people>>cost;
	    
	    if((10*capa) >= people){
	        cout<<people*cost<<endl;
	    }
	    else{
	        cout<<((10*capa)*cost)<<endl;
	    }
	}
	return 0;
}
