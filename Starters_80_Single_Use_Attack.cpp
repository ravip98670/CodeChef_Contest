#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int shakti,ph,du;
	    cin>>shakti>>ph>>du;
	   
	    
	   int xx = shakti-du;
	   
	   if(shakti==du)
	    cout<<"1"<<endl;
	   else{
	       if(xx % ph==0)
	        cout<<xx/ph+1<<endl;
	       else
	        cout<<xx/ph+2<<endl;
	   }
	   
	   
	}
	return 0;
}