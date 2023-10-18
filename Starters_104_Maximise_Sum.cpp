#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    long long n;
	    cin>>n;
	    
	    long long arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    long long left[n];
	    left[0] = arr[0];
	    for(int i=1;i<n;i++){
	        
	        left[i] = max(arr[i],left[i-1]); 
	    }
	    
	    long long right[n];
	    right[n-1] = arr[n-1];
	    for(int i=n-2;i>=0;i--){
	        right[i] = max(right[i+1],arr[i]); 
	    }
	    
	    long long sum = 0;
	    for(int i=0;i<n;i++){
	        arr[i] = max(arr[i],min(left[i],right[i]));
	        sum += arr[i];
	    }
	    
	    cout<<sum<<endl;
	    
	    
	    
	}
	return 0;
}
