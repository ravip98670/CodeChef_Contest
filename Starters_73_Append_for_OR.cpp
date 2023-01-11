#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int size,final;
	    cin>>size>>final;
	    int hold[100000];
	    for(int i=0;i<size;i++){
	        cin>>hold[i];
	    }
	    int orValue=hold[0];
	    for(int i=0;i<size;i++){
	        orValue |= hold[i];
	    }
	    int count=-1;
	    for(int i=0;i<=final;i++){
	        if((orValue|i )== final){
	            count=i;
	            break;
	        }
	    }
	    if(count > -1)
	        cout<<count<<endl;
	   else
	        cout<<"-1"<<endl;
	}
	return 0;
}
