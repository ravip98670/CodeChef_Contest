#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    long long nos,noq;
	    cin>>nos>>noq;
	    long long dummy[noq];
	    long long sum = 0;
	    for(long long i=0;i<noq;i++){
	        cin>>dummy[i];
	        sum += dummy[i];
	    }
	   
	    long long temp = (nos*(nos+1))/2;
	     cout<<(temp-sum)<<endl;
	     //cout<<sum<<" "<<temp<<endl;
	    
	    
	}
	return 0;
}
