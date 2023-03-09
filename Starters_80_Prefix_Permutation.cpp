#include <iostream>
using namespace std;

void perDiv(int divArr[],int siza){
    int total = 1;
    int c = -1;
    for(int i=1;i<siza;i++){
        int t = divArr[i];
            total += divArr[i];
        if(total % (i + 1) == 0){
            int temp = divArr[i];
            
            if(i + 1 < siza){
                divArr[i] = divArr[i+1];
                total = total - t + divArr[i + 1];
                divArr[i + 1] = temp;
                
                
            }
            else{
                c = 0;
            }
        }
        
        else if(c == 0)
            break;
    }
    
    if(c == 0)
        cout<<-1<<endl;
    else{
        for(int i=0;i<siza;i++){
            cout<<divArr[i]<<" ";
        }
        cout<<endl;
    }
}

int main() {
	// your code goes here
	int testa;
	cin>>testa;
	while(testa--){
	    int siza;
	    cin>> siza;
	    
	    int divArr[siza];
	    for(int i=0;i<siza;i++)
	        divArr[i] = (i + 1);
	        
	    perDiv(divArr,siza);
	}
	return 0;
}