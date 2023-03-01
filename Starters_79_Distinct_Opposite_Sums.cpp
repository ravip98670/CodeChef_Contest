#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int evena;
	    cin>>evena;
	    
	    int arr[evena];
	    
	    for(int i=0;i<evena;i++){
	        arr[i] = i+1;
	    }
	    
	    
	    for(int i=0;i<evena/2;i++){
	        cout<<evena-i<<" ";
	        cout<<i+1<<" ";
	    }
	    
	    
	    
	  cout<<endl;  
	    
	}
	return 0;
}
