#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int siza;
	    cin>>siza;
	    string bi;
	    cin>>bi;
	    
	    if(siza == 1){
	        cout<<"1"<<endl;
	        continue;
	    }
	    int ph = 1,c1 = 1;
	    int du = 0,c2 = 0;
	    
	    for(int i=1;i<siza;i++){
	        ph = ph^(bi[i-1]-'0');
	        if(ph == 1)
	            c1++;
	        
	        du = du^(bi[i-1]-'0');
	        if(du == 1)
	            c2++;
	    }
	     if(c1>c2)
	        cout<<c1<<endl;
	    else 
	        cout<<c2<<endl;

	}
	
	return 0;
}
