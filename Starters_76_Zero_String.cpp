#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    
	    string strr;
	    cin>>strr;
	    
	     int zeros=0;
	    int ones=0;
	    for(int i=0;i<n;i++){
	        if(strr[i]=='1')
	        ones++;
	        else 
	        zeros++;
	    }
	    if(zeros>=ones){
	        cout<<ones<<endl;
	    }  
	    else 
	        cout<<zeros+1<<endl;
	}
	return 0;
}
