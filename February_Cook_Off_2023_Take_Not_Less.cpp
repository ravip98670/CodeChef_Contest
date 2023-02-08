#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int size;
	    cin>>size;
	   
	    int apnaarray[size];
	    for(int i=0;i<size;i++){
	        cin>>apnaarray[i];
	       
	    }
	    sort(apnaarray,apnaarray+size);
	    map<int,int>stones;
	   
	    int flag=1;
	    for(int i=size-1;i>=0;i--){
	        stones[apnaarray[i]]++;
	    }
	   
	    flag=0;
	    
	    for(auto i:stones){
	        if(i.second%2!=0){
	            flag=1;
	        }
	    }
	    
	    if(flag==0){
	         cout<<"Zenyk"<<endl;
	    }else{
	        cout<<"Marichka"<<endl;
	    }
	}
	return 0;
}
