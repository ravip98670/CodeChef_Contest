#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    long long pura;
	    long long paisa;
	    cin>>pura>>paisa;
	    
	    long long temp = pura*paisa;
	    string str = to_string(temp);
	    if(str.size() == 5 && str[0] != '0')
	        cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}
