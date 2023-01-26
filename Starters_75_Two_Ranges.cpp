#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tt;
	cin>>tt;
	while(tt--){
	    int r1,r2,r3,r4;
	    cin>>r1>>r2>>r3>>r4;
	    
	    int arr[10]={0};
	    for(int i=r1;i<=r2;i++){
	        arr[i-1]++;
	    }
	    for(int i=r3;i<=r4;i++){
	        arr[i-1]++;
	    }
	    int count=0;
	    for(int i=0;i<8;i++){
	        if(arr[i]>0)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
