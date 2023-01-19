#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int size;
	    cin>>size;
	    
	    int arr1[size];
	    int ones=0,zero=0;
	    unordered_map<int,int>meraMap;
	    for(int i=0;i<size;i++){
	        cin>>arr1[i];
	       if(arr1[i]==0){
	           zero++;
	       }
	        
	    }
	    
	   
	    if(zero%2==0){
	        cout<<"YES"<<endl;
	    }else{
                   cout<<"NO"<<endl;
	    }
	    
	   
	}
	return 0;
}
