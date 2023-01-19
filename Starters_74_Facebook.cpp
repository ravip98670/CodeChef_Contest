#include<bits/stdc++.h>
#include <climits>
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
	    int max1=INT_MIN;
	    vector<int>hold;
	    for(int i=0;i<size;i++){
	        
	        cin>>arr1[i];
	        if(arr1[i]>max1){
	            max1=arr1[i];
	        }
	    }
	        
	    int arr2[size];
	    for(int i=0;i<size;i++)
	        cin>>arr2[i];
	        
	        
	        for(int i=0;i<size;i++){
	            if(arr1[i]==max1){
	                hold.push_back(i);
	            }
	        }
	        if(hold.size()==1){
	            cout<<hold[0]+1<<endl;
	            continue;
	        }
	        
	    int max2=INT_MIN;
	    int ind=0;
	        for(int i=0;i<hold.size();i++){
	            if(arr2[hold[i]]>max2){
	                max2=arr2[hold[i]];
	                ind=hold[i];
	            }
	        }
	        cout<<ind+1<<endl;
	}
	return 0;
}
