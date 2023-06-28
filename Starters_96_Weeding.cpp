#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int tw,td,ts;
	    cin>>tw>>td>>ts;
	    
	    int newW[tw];
	    for(int i=0;i<tw;i++){
	        cin>>newW[i];
	    }
	    bool flag = true;
	    for(int i=0;i<tw;i++){
	        int temp = newW[i];
	        if(temp+(ts-1) > td && flag){
	            cout<<"No"<<endl;
	            flag = false;
	        }
	    }
	    if(flag)
	    cout<<"Yes"<<endl;
	}
	return 0;
}
