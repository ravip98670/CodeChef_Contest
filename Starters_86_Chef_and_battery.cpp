#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int bl;
	    cin>>bl;
	    
	    int ans = 0;
	    while(bl != 50){
	        if(bl > 50){
	            bl -= 3;
	            ans++;
	        }
	        else if(bl < 50){
	            bl += 2;
	            ans++;
	        }
	        else
	            break;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
