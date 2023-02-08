#include <iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int size;
	    cin>>size;
	    
	    string lc;
	    cin>>lc;
	    int count = 0;
	    int n = lc.length();
	    
	    sort(lc.begin(), lc.end());
	    
	    for(int i=0;i<n-1;i++){
	        if(lc[i] == lc[i+1])
	            count++;
	    }
	    
	    if(count)
	        cout<<n-2<<endl;
	    else
	        cout<<"-1"<<endl;
	}
	return 0;
}
