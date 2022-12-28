//Problem Code:PETSTORE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int ff;
	cin>>ff;
	while(ff--){
	   int total;
	   cin>>total;
	   int animal[100000];
	   for(int i=0;i<total;i++){
	       cin>>animal[i];
	   }
	   
	   int arr[101]={0};
	   for(int i=0;i<total;i++){
	       arr[animal[i]] ++;
	   }
	   bool flag=true;
	   for(int i=1;i<101;i++){
	       if(arr[animal[i]]%2!=0){
	           
	            flag=false;
	            break;
	       }
	      
	   }
	   if(flag)
	    cout<<"YES"<<endl;
	   else
	    cout<<"NO"<<endl;
	}
	return 0;
}
