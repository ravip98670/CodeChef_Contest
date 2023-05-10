#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    string str = "";
	    cin>>str;
	    
	    int f[2];
	    int s[2];
	    
	    f[0] = str[0] - '0';
	    f[1] = str[1] - '0';
	    
	    s[0] = str[3] - '0';
	    s[1] = str[4] - '0';
	    
	    int ff = f[0]*10+f[1];
	    int ss = s[0]*10+s[1];
	    
	    int d = 0;
	    int m = 0;
	    
	        if(ff > 12 && ff < 32 )
	           d++;
	        else
	            m++;
	    
	   if(d == 1){
	       cout<<"DD/MM/YYYY"<<endl;
	       continue;
	   }
	        if(ss > 12 && ss < 32 )
	           d++;
	        else
	            m++;
	   if(m == 1){
	       cout<<"MM/DD/YYYY"<<endl;
	      continue;
	   }
	    
	   
	        cout<<"BOTH"<<endl;
	    
	    
	}
	return 0;
}
