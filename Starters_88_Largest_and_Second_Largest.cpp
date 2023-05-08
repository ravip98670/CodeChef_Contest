#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int siza;
	    cin>>siza;
	    
	    int aa[siza];
	    for(int i=0;i<siza;i++)
	        cin>>aa[i];
	        
	   int max=0;
    int max2=max;
    for(int i=0;i<siza;i++){
        
        if(aa[i]>max){
            max2=max;
            max=aa[i];
        }else if(aa[i]<max&&aa[i]>max2){
            max2=aa[i];
        }
    }
    cout<<max+max2<<endl;
	}
	return 0;
}
