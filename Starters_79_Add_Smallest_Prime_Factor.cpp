#include <iostream>
using namespace std;
int findsmallest(int n){
    if(n%2 == 0) return 2;
    else if(n%3 == 0) return 3;
    else if(n%5 == 0) return 5;
    else    return 7;
}

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	   int base,full;
	   cin>>base>>full;
	   
	    int temp = base;
	    int score = 0;
	    
	    if(base%2 == 0){
	        while(temp < full){
	            temp += 2;
	            score++;
	        }
	    }
	    else{
	        temp += findsmallest(base);
	        score++;
	        while(temp < full){
	            temp += 2;
	            score++;
	        }
	    }

	    cout<<score<<endl;
	}
	return 0;
}
