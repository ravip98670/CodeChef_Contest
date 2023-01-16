#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int x1,y1;
	    int x2,y2;
	    
	    cin>>x1>>y1;
	    cin>>x2>>y2;
	    float ans1=sqrt(pow(x1, 2) + pow(y1, 2) * 1.0);
	    float ans2=sqrt(pow(x2, 2) + pow(y2, 2) * 1.0);
	    
	    if(ans1>ans2)
	       cout<<"ALEX"<<endl;
	    else if(ans1<ans2)
	        cout<<"BOB"<<endl;
	    else
	        cout<<"EQUAL"<<endl;
	}
	return 0;
}
