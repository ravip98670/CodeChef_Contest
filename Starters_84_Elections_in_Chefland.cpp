#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int siza;
	    cin>>siza;
	    int mini;
	    cin>>mini;
	    int arr[siza];
	    int count = 0;
	    for(int i=0;i<siza;i++){
	        cin>>arr[i];
	        if(arr[i] >= mini)
	            count++;
	    }
	    cout<<count<<endl;
	        
	   
	}
	return 0;
}
