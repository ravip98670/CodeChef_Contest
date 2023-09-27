#include<bits/stdc++.h>
using namespace std;

int helper(string S, string K,int N, int M) {
    
  int min_step = INT_MAX;

  for(int i=0;i<N-M+1;i++){
      
    int move = 0;
    
    for(int j=0;j<M;j++){
        
      int diff = abs(int(S[i + j]) - int(K[j]));
      move += min(diff, 10 - diff);
      
    }
    
    min_step = min(move,min_step);
  }

  return min_step;
}

int main() {
    
  int test;
  cin >> test;

  while (test--){
      
    int N, M;
    string S, K;
    
    cin >> N >> M;
    cin >> S >> K;


    int ans = helper(S,K,N,M);
    cout << ans << endl;
    
  }

  return 0;
}