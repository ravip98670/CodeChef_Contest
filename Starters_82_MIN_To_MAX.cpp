#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int siza;
	    cin>>siza;
	    int apna[siza];
	    for(int i=0;i<siza;i++)
	        cin>>apna[i];
	        
	   int mini = *min_element(apna, apna + siza);
	  // cout<<mini<<endl;
	   
	   long long count = 0;
	   for(int i=0;i<siza;i++){
	       if(mini != apna[i])
	        count++;
	   }
	   cout<<count<<endl;
	}
	return 0;
}
