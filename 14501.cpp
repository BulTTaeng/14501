#include <iostream>

using namespace std;

int n;

int main() {
  
  cin >> n;
  
  int t[17] = {0, };
  int p[17] = {0, } ;

  for(int i =1; i<=n; i++){
    cin >> t[i];
    cin >> p[i];
  }

  for(int i =n ; i>0; i--){
    if(i+t[i] -1> n){
      p[i] = p[i+1];
    }
    else{
      if(p[i+1] > p[i] + p[i + t[i]]){
        p[i] = p[i+1];
      }
      else{
        p[i] = p[i] + p[i + t[i]];
      }
    }
  }

  int ans =0;
  for(int i =1; i<=n; i++){
    if(ans < p[i]){
      ans = p[i];
    }
  }

  cout << ans;
  return 0;
}