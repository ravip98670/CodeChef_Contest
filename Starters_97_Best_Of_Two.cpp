#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int a1,a2,a3;
	    int b1,b2,b3;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    
	    int sum1 = a1+a2+a3;
	    int min1 = min(a1,a2);
	    min1 = min(min1,a3);
	    
	    sum1 = sum1-min1;
	    
	    int sum2 = b1+b2+b3;
	    int min2 = min(b1,b2);
	    min2 = min(min2,b3);
	    
	    sum2 = sum2-min2;
	    
	    if(sum1 == sum2) cout<<"Tie"<<endl;
	    else if(sum1 > sum2) cout<<"Alice"<<endl;
	    else cout<<"Bob"<<endl;
	}
	return 0;
}
