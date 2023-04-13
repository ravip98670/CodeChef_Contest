#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int siza;
	    cin>>siza;
	    int runs[siza];
	    for(int i=0;i<siza;i++)
	        cin>>runs[i];
	     
	    long long ans = 0;
	    float sum = 0;   
	    for(int i=0;i<siza;i++){
	        sum += runs[i];
	        float avg = (sum/(float(i+1)));
	        //cout<<avg<<endl;
	        if(avg == 1.0)
	            ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
