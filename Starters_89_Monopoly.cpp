#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    
	    int p1,p2,p3,p4;
	    cin>>p1>>p2>>p3>>p4;
	    
	    int max = p1+p2+p3+p4;
	    int max1 = p1>p2?p1:p2;
	    int max2 = max1>p3?max1:p3;
	    int max3 = max2>p4?max2:p4;
	    
	    if(max3 > (max-max3))
	        cout<<"Yes"<<endl;
	   else 
	   cout<<"No"<<endl;
	    
	}
	return 0;
}
