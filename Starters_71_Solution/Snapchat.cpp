//Problem Code:SNAPCHAT
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int din;
	    cin>>din;
	    int bkk1[din],bkk2[din];
	    for(int i=0;i<din;i++)
	        cin>>bkk1[i];
	    for(int i=0;i<din;i++)
	        cin>>bkk2[i];
	    
	    int count=0,max=0;    
	   for(int i=0;i<din;i++){
	       if(bkk1[i]!=0 && bkk2[i]!=0)
	       {
	        count++;
	        
	       }
	        else{
	            if(count>max)
	        max=count;
	            count=0;
	        }
	      
	   }
	            if(count>max)
	        max=count;
	   
	   
	     cout<<max<<endl;   
	}
	return 0;
}
