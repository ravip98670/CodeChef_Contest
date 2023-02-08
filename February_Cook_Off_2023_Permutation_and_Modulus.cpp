#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    
	    for(int i=2;i<=n;i++){
	        cout<<i<<" ";
	    }
	    cout<<"1"<<endl;
	}
	return 0;
}
