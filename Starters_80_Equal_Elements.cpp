#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int teta;
	cin>>teta;
	while(teta--){
	    int siza;
	    cin>>siza;
	    
	    int arra[siza];
	    for(int i=0;i<siza;i++)
	        cin>>arra[i];
	        
	   
	    map<int,int> hold;
	    
	    for(int n:arra)
	        hold[n]++;
	        
	    int bigs = 0;  
	    for(auto i:hold){
	        if(bigs < i.second)
	            bigs = i.second;
	    }     
	    
	    cout<<siza-bigs<<endl;
	}
	return 0;
}