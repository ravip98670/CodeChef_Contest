#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int mm;
	    cin>>mm;
	   
	    int change = 0;
	    for(int i=1;i<=mm*mm;i+=2){
	        cout<<i<<" ";
	        change++;
	        if(change%mm == 0)
	            cout<<endl;
	    }
	    for(int i=2;i<=mm*mm;i+=2){
	        cout<<(i)<<" ";
	        change++;
	        if(change%mm == 0)
	            cout<<endl;
	    }
	}
	return 0;
}
