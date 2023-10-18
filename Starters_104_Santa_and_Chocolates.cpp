#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int k;
	    cin>>k;
	    
	    long long arr[n];
	    long long sum = 0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum += arr[i];
	    }
	    
	    int temp = sum%n;
	    int d = sum/n;
	    
	    if(sum < n)
	        cout<<"No"<<endl;
	    else{
	        if(k == 0 && temp != 0){
	            cout<<"No"<<endl;
	        }
	        else cout<<"Yes"<<endl;
	    }
	        
	    
	}
	return 0;
}
