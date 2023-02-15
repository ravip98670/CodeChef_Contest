#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int size1;
	    cin>>size1;
	    string inputstr;
	    cin>>inputstr;
	    int countzero=0;
	    int pos=0;
	    int mini=0;
	    int runningz=0;
	    for(int i=0;i<size1;i++){
	        if(inputstr[i]=='0'){
	            runningz++;
	        }else if(inputstr[i]=='+'){
	            pos++;
	            if(pos==mini&&(runningz%2!=0)){
	                runningz=0;
	                pos=1;
	                mini=0;
	                countzero++;
	            }else{
	                runningz=0;
	                mini=0;
	                pos=1;
	            }
	        }else{
	            mini++;
	            if(pos==mini&&(runningz%2!=0)){
	                runningz=0;
	                mini=1;
	                pos=0;
	                countzero++;
	            }else{
	                runningz=0;
	                mini=1;
	                pos=0;
	            }
	        }
	    }
	    if(runningz!=0&&pos==0&&mini==0){
	        countzero+=runningz;
	    }
	    cout<<countzero<<endl;
	}
	return 0;
}
