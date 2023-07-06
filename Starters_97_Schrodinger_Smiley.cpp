#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
        int siza;
        cin>>siza;
        string S ;
        cin>>S;
         
        int count = 0;
        int ans = 0;
        for (int i = 0; i < S.length(); ++i) {
            count = 0;
            int flag = 0;
            if (S[i] == ':') {
                for (int j = i + 1; j < S.length(); ++j) {
                    if (S[j] == ')') {
                    count += 1;
                    } else if (S[j] == ':') {
                        
                        flag = 1;
                        break;
                    }
                    else if(S[j] == '(' ) break;
                }
                if(count != 0 && flag == 1) ans++; 
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}