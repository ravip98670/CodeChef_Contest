#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int ep,e,o;
	    cin>>ep>>e>>o;
	    int ans = 0;
	    for(int i=0;i<ep;i++){
	        if(i == 0 || i%2 == 0)
	            ans += (o);
	        else
	            ans += (e);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
