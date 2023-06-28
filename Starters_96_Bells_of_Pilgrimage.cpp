#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    long long tbell,fx,tr,pr;
	    cin>>tbell>>fx>>tr>>pr;
	    
	    if(tr == 0) cout<<pr<<endl;
	    else{
	        long long temp = abs(tr-fx);
	        if(tbell == tr) pr += 20;
	        if(tr <= fx){
	            pr += (10*tr);
	            
	        }
	        else{
	            pr += (10*fx);
	            pr += (5*temp);
	        }
	        cout<<pr<<endl;
	        
	    }
	}
	return 0;
}
