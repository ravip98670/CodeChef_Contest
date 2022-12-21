/*Problem Code:PRIMEREVERSE*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	int whole;
	cin>>whole;
	while(whole--){
	    int n;
	    cin>>n;
	    
	    int one1=0,zero1=0;
        int one2=0,zero2=0;
        
	    char firstarr[100000];
	    for(int i=0;i<n;i++){
	        cin>>firstarr[i];
	        if(firstarr[i]=='0')
	            zero1++;
	        else 
	            one1++;
	    }
	    
	    char secondarr[100000];
	    for(int i=0;i<n;i++){
	        cin>>secondarr[i];
	        if(secondarr[i]=='0')
	            zero2++;
	        else 
	            one2++;
	    }
        
        if(one1==one2 && zero1==zero2)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
	}
	return 0;
}
