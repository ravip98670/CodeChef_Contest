#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int kb;
	cin>>kb;
	while(kb--){
	    int x1,x2,x3;
	    cin>>x1>>x2>>x3;
	    int ans1=x1*x2;
	    int ans2=x2*x3;
	    int ans3=x3*x1;
	    if(ans1<0 || ans2<0 || ans3<0)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}
