#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int ap,bp;
	    cin>>ap>>bp;
	   // int isEqual = 0;
	   // if(ap == bp){
	   //    isEqual = 1;
	   //    cout<<"YES"<<endl;
	   // } 
	   // else if(ap > bp){
	   //     while(ap > bp){
	   //         ap -= 1;
	   //         bp += 1;
	   //         if(ap == bp){
	   //            cout<<"YES"<<endl;
	   //            isEqual = 1;
	   //            continue;
	   //         }
	   //     }
	   // }else if(ap < bp){
	   //     while(ap < bp){
	   //         bp -= 1;
	   //         ap += 3;
	   //         if(ap == bp){
	   //            cout<<"YES"<<endl;
	   //            isEqual = 1;
	   //            continue;
	   //         }
	   //     }
	   // }
	   // if(isEqual == 0)
	   //     cout<<"No"<<endl;
	   int temp = abs(ap-bp);
	   if(temp%2 == 0) cout<<"YES"<<endl;
	   else cout<<"No"<<endl;
	}
	return 0;
}
