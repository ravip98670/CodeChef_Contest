#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int tat;
	cin>>tat;
	while(tat--){
	    int n;
	    cin>>n;
	    string apna;
	    cin>>apna;
	    int zeros=0,ones=0;
	    for(int i=0;i<n;i++){
	        if(apna[i] == '0')
	            zeros++;
	        else 
	            ones++;
	    }
	   if(apna == "1" || apna == "10"){
	        cout<<"no"<<endl;
	        continue;
	    }
	   
	    if(ones > 3 )
	        cout<<"No"<<endl;
	   else 
	        cout<<"Yes"<<endl;
	}
	   
	return 0;
}
