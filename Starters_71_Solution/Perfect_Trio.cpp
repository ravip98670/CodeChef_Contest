// Problem Code:PERFECTTRIO
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int first,sec,tri;
	    cin>>first>>sec>>tri;
	    if(first ==(sec+tri) || sec==(first+tri) || tri==(first+sec))
	        cout<<"YES"<<endl;
	   else
	    cout<<"NO"<<endl;
	}
	return 0;
}
