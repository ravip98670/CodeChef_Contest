#include <bits/stdc++.h>
using namespace std;
string dena(int siza,string str,string temp,string krna){
    int step = ((temp[0]-str[0]+26)%26);
    
    string ans = "";
    for(int i=0;i<siza;i++){
        int np = (krna[i] - 'a' + step) % 26;
        ans += np + 'a';
    }
    return ans;
}
int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int siza;
	    cin>>siza;
	    
	    string str;
	    cin>>str;
	    
	    string temp;
	    cin>>temp;
	    
	    string krna;
	    cin>>krna;
	    
	    string ans = dena(siza,str,temp,krna);
	    
	    cout<<ans<<endl;
	}
	return 0;
}
