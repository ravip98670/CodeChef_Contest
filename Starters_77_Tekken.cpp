#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int ana,bob,clau;
	    cin>>ana>>bob>>clau;
	    
	    int ann = min(bob, clau);
        bob -= ann;
        clau -= ann;
        
        
        if (ana>bob && ana>clau) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
	}
	return 0;
}
