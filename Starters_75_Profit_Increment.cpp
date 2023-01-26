#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int y;
	cin>>y;
	while(y--){
	    int xx;
	    int yy;
	    cin>>xx>>yy;
	    
	    int pro = (xx/10);
	    cout<<yy+pro<<endl;
	}
	return 0;
}
