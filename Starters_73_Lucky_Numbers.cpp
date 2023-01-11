#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int hold;
	    cin>>hold;
	    
	    int rem;
	    int flag=0;
	    while(hold>0){
	        rem=hold%10;
	        if(rem==7){
	            flag=1;
	            break;
	        }
	        hold /= 10;
	    }
	    if(flag==1)
	        cout<<"Yes"<<endl;
	       else 
	        cout<<"No"<<endl;
	}
	return 0;
}
