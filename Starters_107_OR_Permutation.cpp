#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    if (n == 3)
        cout << "1 3 2" << endl;
    else if (n == 4)
        cout << "1 2 4 3" << endl;
    else if (n == 5)
        cout << "2 1 5 3 4" << endl;
    else {
         for (int i = n; i > 0 ; i--) {
            cout << i  << " ";
        }
        // for (int i = n / 2; i < n; i++) {
        //     cout << i + 1 << " ";
        // }
       
        cout << endl;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    
        solve(n);
        
        
        
	}
	return 0;
}
