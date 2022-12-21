/*Problem Code:KITCHENCOST*/


#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,smell;
	    cin>>n>>smell;
	    
	    int smellarr[100];
	    for(int i=0;i<n;i++){
	        cin>>smellarr[i];
	    }
	    
	    int paisa[100];
	    for(int i=0;i<n;i++){
	        cin>>paisa[i];
	    }
	    
	    int ans=0;
	    for(int i=0;i<n;i++){
	        if(smellarr[i] >= smell){
	            ans=ans+paisa[i];
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
