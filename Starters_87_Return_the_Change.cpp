#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int val;
	    cin>>val;
	    
	    if(val <= 4){
	        cout<<"100"<<endl;
	        continue;
	    }
	    if(val >= 95){
	        cout<<"0"<<endl;
	        continue;
	    }
	   
	   // string str = to_string(val);
	   // int temp = str[0] - '0';
	   //// cout<<temp<<endl;
	    
	   // if(val >= (temp*10)+5 && val < (temp+1)*10){
	   //     cout<<100 - (temp+1)*10<<endl;
	   //     continue;
	   // }
	   // if(val <= (temp*10)+4 && val >= (temp)*10){
	   //     cout<<100 - (temp*10)<<endl;
	   //     continue;
	   // }
	   
	   int t = val % 10;
	   if(t >= 5 && t < 10)
	    cout<<(100 - ((val / 10)+1)*10 )<<endl;
	   else 
	    cout<<(100 - (val/10)*10 )<<endl;
	}
	return 0;
}
