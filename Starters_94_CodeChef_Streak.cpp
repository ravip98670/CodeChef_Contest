#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int daz;
	    cin>>daz;
	    
	    int om[daz];
	    for(int i=0;i<daz;i++) cin>>om[i];
	    
	    int ad[daz];
	    for(int i=0;i<daz;i++) cin>>ad[i];
	    int ommax = 0;
	    int admax = 0;
	    int count = 0;
	    for(int i=0;i<daz;i++){
	        if(om[i] != 0)
	            count++;
	        else{
	            ommax = max(ommax,count);
	            count = 0;
	        }
	    }
	    ommax = max(ommax,count);
	    count = 0;
	    for(int i=0;i<daz;i++){
	        if(ad[i] != 0)
	            count++;
	        else{
	            admax = max(admax,count);
	            count = 0;
	        }
	    }
	    admax = max(admax,count);
	    //cout<<ommax<<" "<<admax<<endl;
	    if(ommax == admax) cout<<"Draw"<<endl;
	    else if(ommax > admax) cout<<"Om"<<endl;
	    else cout<<"Addy"<<endl;
	}
	return 0;
}
