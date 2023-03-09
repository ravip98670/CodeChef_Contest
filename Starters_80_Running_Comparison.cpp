#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testa;
	cin>>testa;
	while(testa--){
	    int diza;
	    cin>>diza;
	    
	    int alicaarr[diza];
	    for(int i=0;i<diza;i++)
	        cin>>alicaarr[i];
	        
	   
	    int bobarr[diza];
	    for(int i=0;i<diza;i++)
	        cin>>bobarr[i];
	        
	    int count = 0;
	    for(int i=0;i<diza;i++){
	        if(bobarr[i]*2 < alicaarr[i])
	            continue;
	        else if(alicaarr[i]*2 < bobarr[i])
	            continue;
	        else
	            count++;
	    }
	    
	    cout<<count<<endl;
	   
	}
	return 0;
}