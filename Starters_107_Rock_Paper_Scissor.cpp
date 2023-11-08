#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    char chf[n];
	    for(int i=0;i<n;i++){
	        cin>>chf[i];
	    }
	    
	    char chi[n];
	    for(int i=0;i<n;i++){
	        cin>>chi[i];
	    }
	    
	    int c1=0,c2=0;
	    for(int i=0;i<n;i++){
	        
	        if(chf[i] == 'R' && chi[i] == 'S')
	            c1++;
	        else if(chf[i] == 'S' && chi[i] == 'R')
	            c2++;
	        else if(chf[i] == 'S' && chi[i] == 'P')
	            c1++;
	        else if(chf[i] == 'P' && chi[i] == 'S')
	            c2++;
	        else if(chf[i] == 'P' && chi[i] == 'R')
	            c1++;
	       else if(chf[i] == 'R' && chi[i] == 'P')
	            c2++; 
	       
	        
	    }
	   // cout<<c1<<" "<<c2<<endl;
	    if(c1 == c2)
	        cout<<"1"<<endl;
	   else if(c1 > c2)
	        cout<<"0"<<endl;
	        
	   else {
	       int a = (c1+c2)/2;
	       cout<<(a+1)-c1<<endl;
	   }
	}
	return 0;
}
